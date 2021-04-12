/*
* Generated on Monday, March 1, 2021 at 2:31:50 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/


#import <ChatKit/ChatKit-Structs.h>
@class NSCache, NSMutableSet;

@interface CKSearchThumbnailPreviewGenerator : NSObject {

	NSCache* _thumbnailCache;
	NSCache* _livePhotoStatusCache;
	NSCache* _videoDurationCache;
	NSCache* _lpLinkMetadataCache;
	NSCache* _mapHashesCache;
	NSMutableSet* _keysWithInFlightGeneration;
	NSMutableSet* _keysWithInFlightLivePhotoStatus;
	NSMutableSet* _keysWithInFlightVideoDurationCalculation;
	NSMutableSet* _keysWithInFlightLPLinkMetadataGeneration;

}

@property (nonatomic,retain) NSCache * thumbnailCache;                                             //@synthesize thumbnailCache=_thumbnailCache - In the implementation block
@property (nonatomic,retain) NSCache * livePhotoStatusCache;                                       //@synthesize livePhotoStatusCache=_livePhotoStatusCache - In the implementation block
@property (nonatomic,retain) NSCache * videoDurationCache;                                         //@synthesize videoDurationCache=_videoDurationCache - In the implementation block
@property (nonatomic,retain) NSCache * lpLinkMetadataCache;                                        //@synthesize lpLinkMetadataCache=_lpLinkMetadataCache - In the implementation block
@property (nonatomic,retain) NSCache * mapHashesCache;                                             //@synthesize mapHashesCache=_mapHashesCache - In the implementation block
@property (nonatomic,retain) NSMutableSet * keysWithInFlightGeneration;                            //@synthesize keysWithInFlightGeneration=_keysWithInFlightGeneration - In the implementation block
@property (nonatomic,retain) NSMutableSet * keysWithInFlightLivePhotoStatus;                       //@synthesize keysWithInFlightLivePhotoStatus=_keysWithInFlightLivePhotoStatus - In the implementation block
@property (nonatomic,retain) NSMutableSet * keysWithInFlightVideoDurationCalculation;              //@synthesize keysWithInFlightVideoDurationCalculation=_keysWithInFlightVideoDurationCalculation - In the implementation block
@property (nonatomic,retain) NSMutableSet * keysWithInFlightLPLinkMetadataGeneration;              //@synthesize keysWithInFlightLPLinkMetadataGeneration=_keysWithInFlightLPLinkMetadataGeneration - In the implementation block
+(id)sharedInstance;
+(void)__setSingleton__im:(id)arg1 ;
+(id)__singleton__im;
-(id)init;
-(NSCache *)thumbnailCache;
-(void)setThumbnailCache:(NSCache *)arg1 ;
-(id)linkMetadataForQueryResult:(id)arg1 ;
-(void)_IMSPIQueryMessageItemsWithGUIDs:(id)arg1 results:(/*^block*/id)arg2 ;
-(id)previewForQueryResult:(id)arg1 ;
-(id)mapPreviewForQueryResult:(id)arg1 traitCollection:(id)arg2 ;
-(id)cachedPreviewForQueryResult:(id)arg1 ;
-(id)cachedMapPreviewForQueryResult:(id)arg1 traitCollection:(id)arg2 ;
-(id)cachedLinkMetadataForQueryResult:(id)arg1 ;
-(void)setLivePhotoStatusCache:(NSCache *)arg1 ;
-(void)setVideoDurationCache:(NSCache *)arg1 ;
-(void)setLpLinkMetadataCache:(NSCache *)arg1 ;
-(void)setMapHashesCache:(NSCache *)arg1 ;
-(void)setKeysWithInFlightGeneration:(NSMutableSet *)arg1 ;
-(void)setKeysWithInFlightLivePhotoStatus:(NSMutableSet *)arg1 ;
-(void)setKeysWithInFlightVideoDurationCalculation:(NSMutableSet *)arg1 ;
-(void)setKeysWithInFlightLPLinkMetadataGeneration:(NSMutableSet *)arg1 ;
-(NSMutableSet *)keysWithInFlightGeneration;
-(Class)_qlThumbnailGenerationRequestClass;
-(id)_qlThumbnailGeneratorSharedGenerator;
-(id)_previewURLForKey:(id)arg1 ;
-(void)_persistPreview:(id)arg1 atURL:(id)arg2 ;
-(void)generateAndCacheIconWithURL:(id)arg1 key:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)generateAndCacheThumbnailWithURL:(id)arg1 request:(id)arg2 key:(id)arg3 completion:(/*^block*/id)arg4 ;
-(NSCache *)livePhotoStatusCache;
-(NSMutableSet *)keysWithInFlightLivePhotoStatus;
-(BOOL)_checkResultForLivePhotoComplement:(id)arg1 ;
-(NSCache *)videoDurationCache;
-(NSMutableSet *)keysWithInFlightVideoDurationCalculation;
-(SCD_Struct_CK17)_calculateDurationForVideoResult:(id)arg1 ;
-(void)_asyncLoadCachedDiskPreviewForKeyIfAvailable:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)generateAndCachePassWithURL:(id)arg1 forKey:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)_generateMapThumbnailForKey:(id)arg1 attributes:(id)arg2 traitCollection:(id)arg3 completion:(/*^block*/id)arg4 ;
-(NSCache *)mapHashesCache;
-(void)_markFileAsPurgeable:(id)arg1 ;
-(NSMutableSet *)keysWithInFlightLPLinkMetadataGeneration;
-(void)_prewarmLinkMetadata:(id)arg1 ;
-(NSCache *)lpLinkMetadataCache;
-(BOOL)queryResultHasLivePhoto:(id)arg1 ;
-(BOOL)queryResultIsVideo:(id)arg1 ;
-(SCD_Struct_CK17)durationForVideoResult:(id)arg1 ;
-(id)mapPlaceholderImageForTraitCollection:(id)arg1 ;
@end

