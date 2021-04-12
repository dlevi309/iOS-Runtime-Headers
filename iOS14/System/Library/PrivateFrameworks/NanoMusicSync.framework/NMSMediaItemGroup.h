/*
* Generated on Thursday, January 14, 2021 at 2:26:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoMusicSync.framework/NanoMusicSync
*/


@class NMSMediaContainerQuotaData;

@interface NMSMediaItemGroup : NSObject {

	BOOL _manuallyAdded;
	BOOL _downloadedItemsOnly;
	id _referenceObj;
	NMSMediaContainerQuotaData* _quotaData;
	unsigned long long _type;

}

@property (assign,nonatomic) unsigned long long type;                             //@synthesize type=_type - In the implementation block
@property (nonatomic,retain) id referenceObj;                                     //@synthesize referenceObj=_referenceObj - In the implementation block
@property (nonatomic,retain) NMSMediaContainerQuotaData * quotaData;              //@synthesize quotaData=_quotaData - In the implementation block
@property (assign,nonatomic) BOOL manuallyAdded;                                  //@synthesize manuallyAdded=_manuallyAdded - In the implementation block
@property (nonatomic,readonly) BOOL isEstimate; 
@property (assign,nonatomic) BOOL downloadedItemsOnly;                            //@synthesize downloadedItemsOnly=_downloadedItemsOnly - In the implementation block
+(id)itemGroupWithSyncedPlaylistID:(id)arg1 downloadedItemsOnly:(BOOL)arg2 ;
+(id)itemGroupWithSyncedAlbumID:(id)arg1 downloadedItemsOnly:(BOOL)arg2 ;
+(id)itemGroupWithRecommendation:(id)arg1 downloadedItemsOnly:(BOOL)arg2 ;
+(id)itemGroupWithPodcastStationUUID:(id)arg1 downloadedItemsOnly:(BOOL)arg2 ;
+(id)itemGroupWithPodcastFeedURL:(id)arg1 downloadOrder:(unsigned long long)arg2 episodeLimit:(unsigned long long)arg3 manuallyAdded:(BOOL)arg4 downloadedItemsOnly:(BOOL)arg5 ;
+(id)itemGroupWithAudiobookIdentifier:(id)arg1 downloadLimit:(unsigned long long)arg2 manuallyAdded:(BOOL)arg3 downloadedItemsOnly:(BOOL)arg4 ;
+(id)sharedLibraryRequestQueue;
+(id)_itemsForContainerClass:(Class)arg1 containerIDs:(id)arg2 includingNonLibraryContent:(BOOL)arg3 includingDownloadedContentOnly:(BOOL)arg4 manuallyAdded:(BOOL)arg5 ;
+(id)itemGroupWithQuotaRefObj:(id)arg1 ;
-(id)itemList;
-(id)identifiers;
-(void)setType:(unsigned long long)arg1 ;
-(id)description;
-(unsigned long long)type;
-(unsigned long long)hash;
-(BOOL)isEqualToContainer:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)isEstimate;
-(NMSMediaContainerQuotaData *)quotaData;
-(BOOL)manuallyAdded;
-(id)referenceObj;
-(id)identifiersForContainerType:(unsigned long long)arg1 ;
-(BOOL)downloadedItemsOnly;
-(id)initWithType:(unsigned long long)arg1 refObj:(id)arg2 manuallyAdded:(BOOL)arg3 quotaRefObj:(id)arg4 downloadedItemsOnly:(BOOL)arg5 ;
-(void)setReferenceObj:(id)arg1 ;
-(void)setQuotaData:(NMSMediaContainerQuotaData *)arg1 ;
-(void)setManuallyAdded:(BOOL)arg1 ;
-(void)setDownloadedItemsOnly:(BOOL)arg1 ;
@end

