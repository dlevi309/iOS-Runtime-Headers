/*
* Generated on Thursday, January 14, 2021 at 2:22:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <libobjc.A.dylib/PXGTextureProviderDelegate.h>
#import <libobjc.A.dylib/PXGTextureAtlasManagerDelegate.h>

@protocol OS_dispatch_queue, PXGTextureConverter, PXGMutableSpriteTexture, PXGTextureManagerDelegate;
@class NSObject, NSMapTable, NSHashTable, NSDictionary, NSMutableDictionary, NSIndexSet, NSMutableSet, PXGTextureManagerPreheatingStrategy, PXGViewEnvironment, NSArray, NSString;

@interface PXGTextureManager : NSObject <PXGTextureProviderDelegate, PXGTextureAtlasManagerDelegate> {

	NSObject*<OS_dispatch_queue> _requestQueue;
	NSObject*<OS_dispatch_queue> _workQueue;
	NSObject*<OS_dispatch_queue> _processQueue;
	NSObject*<OS_dispatch_queue> _deallocationsQueue;
	os_unfair_lock_s _lookupLock;
	NSMapTable* _lookupLock_textureByKeyByPresentationType[2];
	unordered_map<int, PXGRequestDetails, std::__1::hash<int>, std::__1::equal_to<int>, std::__1::allocator<std::__1::pair<const int, PXGRequestDetails> > >* _lookupLock_requestDetailsByRequestID;
	NSHashTable* _spriteTexturesInUse;
	NSDictionary* _textureConverterByPresentationType;
	id<PXGTextureConverter> _atlasTextureConverter;
	int _atlasPresentationType;
	BOOL _didSwitchTextureConverter;
	NSMutableDictionary* _textureProviderByMediaKind;
	NSMapTable* _textureProvidersDisplayLinkRegistrationState;
	unordered_map<int, unsigned int, std::__1::hash<int>, std::__1::equal_to<int>, std::__1::allocator<std::__1::pair<const int, unsigned int> > >* _spriteIndexByRequestID;
	NSIndexSet* _loadedSpriteIndexes;
	SCD_Struct_PX138* _streamInfoBySpriteIndex;
	unsigned long long _streamInfoBySpriteIndexCount;
	unsigned long long _streamInfoBySpriteIndexCapacity;
	AC _isPerformingUpdateFromRequestQueue;
	unsigned long long _requestQueue_pendingSetNeedsUpdate;
	id<PXGMutableSpriteTexture> _emptyTexture;
	NSMutableSet* _placeholderTextures;
	BOOL _lowMemoryMode;
	BOOL _isInactive;
	id<PXGTextureManagerDelegate> _delegate;
	PXGTextureManagerPreheatingStrategy* _preheatingStrategy;
	PXGViewEnvironment* _viewEnvironment;
	NSDictionary* _texturesByPresentationType;
	NSArray* _textureAtlasManagers;
	long long _streamCount;

}

@property (retain) NSArray * textureAtlasManagers;                                                  //@synthesize textureAtlasManagers=_textureAtlasManagers - In the implementation block
@property (nonatomic,readonly) long long streamCount;                                               //@synthesize streamCount=_streamCount - In the implementation block
@property (assign,nonatomic,__weak) id<PXGTextureManagerDelegate> delegate;                         //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) PXGTextureManagerPreheatingStrategy * preheatingStrategy;              //@synthesize preheatingStrategy=_preheatingStrategy - In the implementation block
@property (nonatomic,retain) PXGViewEnvironment * viewEnvironment;                                  //@synthesize viewEnvironment=_viewEnvironment - In the implementation block
@property (assign,nonatomic) BOOL lowMemoryMode;                                                    //@synthesize lowMemoryMode=_lowMemoryMode - In the implementation block
@property (assign,nonatomic) BOOL isInactive;                                                       //@synthesize isInactive=_isInactive - In the implementation block
@property (nonatomic,readonly) NSDictionary * texturesByPresentationType;                           //@synthesize texturesByPresentationType=_texturesByPresentationType - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setViewEnvironment:(PXGViewEnvironment *)arg1 ;
-(BOOL)isInactive;
-(void)textureProvider:(id)arg1 didProvidePayload:(id)arg2 forRequestID:(int)arg3 ;
-(void)streamTexturesForSpritesInDataStore:(id)arg1 presentationDataStore:(id)arg2 changeDetails:(id)arg3 layout:(id)arg4 interactionState:(SCD_Struct_PX22)arg5 ;
-(void)_pruneTextures:(id)arg1 ;
-(id)init;
-(void)textureProviderNeedsToRegisterToDisplayLinkUpdates:(id)arg1 ;
-(id)_existingTextureForCGImage:(CGImageRef)arg1 presentationType:(int)arg2 ;
-(void)_addTextureToTexturesInUse:(id)arg1 ;
-(id<PXGTextureManagerDelegate>)delegate;
-(void)simulateTextureLoad;
-(void)_requestQueue_scheduleUpdateIfAllowed;
-(void)registerTextureConverter:(id)arg1 forPresentationType:(int)arg2 ;
-(BOOL)_getRequestDetails:(out SCD_Struct_PX139*)arg1 forRequestID:(int)arg2 ;
-(void)_processPixelBuffer:(CVBufferRef)arg1 orientationTransform:(CGAffineTransform)arg2 fromTextureProvider:(id)arg3 withTextureConverter:(id)arg4 forRequestID:(int)arg5 deliveryOrder:(unsigned)arg6 ;
-(void)_enumerateSpriteTextures:(/*^block*/id)arg1 ;
-(long long)_processTextureProviderResults;
-(void)_configureAllTextureProviders;
-(void)_processCGImage:(CGImageRef)arg1 orientation:(unsigned)arg2 fromTextureProvider:(id)arg3 withTextureConverter:(id)arg4 requestID:(int)arg5 deliveryOrder:(unsigned)arg6 ;
-(void)_blockOnThumbnailsIfNeededWithGeometries:(SCD_Struct_PX106*)arg1 visibleRect:(CGRect)arg2 interactionState:(SCD_Struct_PX22)arg3 fences:(id)arg4 ;
-(void)textureProvider:(id)arg1 didProvideNothingForRequestID:(int)arg2 ;
-(void)setLowMemoryMode:(BOOL)arg1 ;
-(void)_removeAllTexturesForPresentationType:(int)arg1 ;
-(id)_storeTexture:(id)arg1 forCGImage:(CGImageRef)arg2 ;
-(void)_enumerateTextureConverters:(/*^block*/id)arg1 ;
-(void)_configureAllTextureConverters;
-(PXGTextureManagerPreheatingStrategy *)preheatingStrategy;
-(void)_handleProvidedSpriteTexture:(id)arg1 fromTextureProvider:(id)arg2 requestID:(int)arg3 deliveryOrder:(unsigned)arg4 ;
-(void)setDelegate:(id<PXGTextureManagerDelegate>)arg1 ;
-(void)textureProvider:(id)arg1 didProvideCGImage:(CGImageRef)arg2 orientation:(unsigned)arg3 forRequestID:(int)arg4 ;
-(void)textureProvider:(id)arg1 didProvideImageData:(id)arg2 withSpecAtIndex:(long long)arg3 bytesPerRow:(unsigned long long)arg4 contentsRect:(CGRect)arg5 forRequestID:(int)arg6 ;
-(NSString *)description;
-(id)_textureAtlasManagerForImageDataSpec:(SCD_Struct_PX25)arg1 ;
-(id)_storeTexture:(id)arg1 forKey:(id)arg2 ;
-(BOOL)textureAtlasManagerShouldPruneUnusedTextures:(id)arg1 ;
-(void)_resizeStorageIfNeededForSpriteCount:(long long)arg1 ;
-(void)setPreheatingStrategy:(PXGTextureManagerPreheatingStrategy *)arg1 ;
-(void)textureProvider:(id)arg1 didProvidePixelBuffer:(CVBufferRef)arg2 orientationTransform:(CGAffineTransform)arg3 forRequestID:(int)arg4 ;
-(BOOL)streamUpdatedTexturesForDisplayLinkIfNeeded:(id)arg1 ;
-(PXGViewEnvironment *)viewEnvironment;
-(id)_existingTextureForPayload:(id)arg1 presentationType:(int)arg2 ;
-(id)_existingTextureForKey:(id)arg1 presentationType:(int)arg2 ;
-(id)_existingTextureForPixelBuffer:(CVBufferRef)arg1 presentationType:(int)arg2 ;
-(void)_updatePreheatingStrategy;
-(void)_configureTextureConverter:(id)arg1 ;
-(void)registerTextureProvider:(id)arg1 forMediaKind:(int)arg2 ;
-(long long)streamCount;
-(id)_createTextureForCGImage:(CGImageRef)arg1 orientation:(unsigned)arg2 fromTextureProvider:(id)arg3 withTextureConverter:(id)arg4 ;
-(void)_lookupLock_requestTexturesForSpritesInRange:(PXGSpriteIndexRange)arg1 textureProvider:(id)arg2 mediaKind:(int)arg3 presentationType:(int)arg4 isAppearing:(BOOL)arg5 layout:(id)arg6 leafSpriteIndexRange:(PXGSpriteIndexRange)arg7 sprites:(SCD_Struct_PX84*)arg8 textureStreamInfos:(SCD_Struct_PX138*)arg9 ;
-(void)_configureTextureProvider:(id)arg1 ;
-(id)_storeTexture:(id)arg1 forPixelBuffer:(CVBufferRef)arg2 ;
-(BOOL)lowMemoryMode;
-(NSArray *)textureAtlasManagers;
-(void)_setNeedsUpdate;
-(void)_requestQueue_setNeedsUpdate;
-(id)_textureConverterForPresentationType:(int)arg1 ;
-(NSDictionary *)texturesByPresentationType;
-(id)_storeTexture:(id)arg1 forPayload:(id)arg2 ;
-(void)setIsInactive:(BOOL)arg1 ;
-(void)setTextureAtlasManagers:(NSArray *)arg1 ;
-(void)textureProviderNeedsToUnregisterFromDisplayLinkUpdates:(id)arg1 ;
-(void)dealloc;
-(void)_enumerateTextureProviders:(/*^block*/id)arg1 ;
-(CGImageRef)textureSnapshotForSpriteIndex:(unsigned)arg1 ;
@end

