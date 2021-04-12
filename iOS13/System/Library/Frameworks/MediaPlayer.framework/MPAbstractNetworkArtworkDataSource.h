/*
* Generated on Monday, March 1, 2021 at 2:31:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
*/

#import <MediaPlayer/MediaPlayer-Structs.h>
#import <libobjc.A.dylib/NSURLSessionDataDelegate.h>
#import <libobjc.A.dylib/MPArtworkDataSource.h>

@protocol OS_dispatch_queue;
@class NSObject, NSCache, NSMapTable, NSMutableDictionary, NSURLSession, NSURLSessionConfiguration, NSString;

@interface MPAbstractNetworkArtworkDataSource : NSObject <NSURLSessionDataDelegate, MPArtworkDataSource> {

	BOOL _usesFallbackCache;
	NSObject*<OS_dispatch_queue> _accessQueue;
	NSObject*<OS_dispatch_queue> _callbackQueue;
	NSCache* _fallbackArtworkRepresentationCache;
	NSMapTable* _catalogTaskMap;
	NSMutableDictionary* _pendingRequestURLToCompletionHandlers;
	NSURLSession* _URLSession;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> accessQueue;                                 //@synthesize accessQueue=_accessQueue - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> callbackQueue;                               //@synthesize callbackQueue=_callbackQueue - In the implementation block
@property (nonatomic,retain) NSCache * fallbackArtworkRepresentationCache;                             //@synthesize fallbackArtworkRepresentationCache=_fallbackArtworkRepresentationCache - In the implementation block
@property (nonatomic,retain) NSMapTable * catalogTaskMap;                                              //@synthesize catalogTaskMap=_catalogTaskMap - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * pendingRequestURLToCompletionHandlers;              //@synthesize pendingRequestURLToCompletionHandlers=_pendingRequestURLToCompletionHandlers - In the implementation block
@property (nonatomic,retain) NSURLSession * URLSession;                                                //@synthesize URLSession=_URLSession - In the implementation block
@property (nonatomic,readonly) NSURLSessionConfiguration * URLSessionConfiguration; 
@property (assign,nonatomic) BOOL usesFallbackCache;                                                   //@synthesize usesFallbackCache=_usesFallbackCache - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)_applyURLCachePolicy:(unsigned long long)arg1 cacheDiskPath:(id)arg2 toConfiguration:(id)arg3 ;
-(id)init;
-(NSObject*<OS_dispatch_queue>)callbackQueue;
-(NSObject*<OS_dispatch_queue>)accessQueue;
-(void)setCallbackQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)_performSyncBlock:(/*^block*/id)arg1 ;
-(void)setURLSession:(NSURLSession *)arg1 ;
-(NSURLSession *)URLSession;
-(void)setAccessQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(id)existingArtworkEffectResultForEffectType:(long long)arg1 catalog:(id)arg2 options:(id)arg3 ;
-(void)loadArtworkEffectResultForEffectType:(long long)arg1 catalog:(id)arg2 options:(id)arg3 systemEffectHandler:(/*^block*/id)arg4 completionHandler:(/*^block*/id)arg5 ;
-(BOOL)areRepresentationsAvailableForCatalog:(id)arg1 ;
-(BOOL)isRepresentation:(id)arg1 bestRepresentationForArtworkCatalog:(id)arg2 ;
-(id)existingRepresentationForArtworkCatalog:(id)arg1 ;
-(void)loadRepresentationForArtworkCatalog:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)cancelLoadingRepresentationForArtworkCatalog:(id)arg1 ;
-(id)visualIdenticalityIdentifierForCatalog:(id)arg1 ;
-(id)cacheKeyForCatalog:(id)arg1 size:(CGSize)arg2 ;
-(id)requestForCatalog:(id)arg1 size:(CGSize)arg2 ;
-(id)sortedSupportedSizesForCatalog:(id)arg1 ;
-(id)supportedSizesForCatalog:(id)arg1 ;
-(NSURLSessionConfiguration *)URLSessionConfiguration;
-(void)updateURLSessionWithCachePolicy:(unsigned long long)arg1 cachePath:(id)arg2 ;
-(NSCache *)fallbackArtworkRepresentationCache;
-(BOOL)shouldLookForLargerRepresentationsWhenBestRepresentationIsUnavailable;
-(BOOL)wantsBackgroundImageDecompression;
-(id)_artworkRepresentationWithImageFromData:(id)arg1 forURLResponse:(id)arg2 size:(CGSize)arg3 immediateImageDecompressionAllowed:(BOOL)arg4 ;
-(id)_existingRepresentationFromURLCacheForArtworkCatalog:(id)arg1 immediateImageDecompressionAllowed:(BOOL)arg2 ;
-(BOOL)_isRepresentationSize:(CGSize)arg1 validForCatalog:(id)arg2 ;
-(id)_existingRepresentativeObjectForArtworkCatalog:(id)arg1 handler:(/*^block*/id)arg2 ;
-(id)_requestForCatalog:(id)arg1 size:(CGSize)arg2 ;
-(void)_performAsyncBarrierBlock:(/*^block*/id)arg1 ;
-(BOOL)usesFallbackCache;
-(void)setUsesFallbackCache:(BOOL)arg1 ;
-(void)setFallbackArtworkRepresentationCache:(NSCache *)arg1 ;
-(NSMapTable *)catalogTaskMap;
-(void)setCatalogTaskMap:(NSMapTable *)arg1 ;
-(NSMutableDictionary *)pendingRequestURLToCompletionHandlers;
-(void)setPendingRequestURLToCompletionHandlers:(NSMutableDictionary *)arg1 ;
@end

