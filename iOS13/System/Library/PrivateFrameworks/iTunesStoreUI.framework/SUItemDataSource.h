/*
* Generated on Monday, March 1, 2021 at 2:32:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
*/


@interface SUItemDataSource : NSObject
+(id)sharedDataSource;
+(void)setSharedDataSource:(id)arg1 ;
-(id)newItemWithItemDictionary:(id)arg1 ;
-(id)newExternalDownloadWithItem:(id)arg1 storeOffer:(id)arg2 ;
-(id)newPurchaseWithItem:(id)arg1 storeOffer:(id)arg2 ;
-(long long)itemTypeForTypeString:(id)arg1 ;
-(id)_newDownloadForDocumentItem:(id)arg1 storeOffer:(id)arg2 ;
-(id)_newDownloadForPodcastEpisode:(id)arg1 storeOffer:(id)arg2 ;
-(long long)itemTypeForItem:(id)arg1 ;
-(id)_thumbnailImageForItem:(id)arg1 ;
-(id)_newTonePurchaseWithPurchase:(id)arg1 ;
-(id)_newDownloadMetadataForPodcastEpisode:(id)arg1 storeOffer:(id)arg2 ;
-(long long)estimatedDiskSpaceNeededForItem:(id)arg1 storeOffer:(id)arg2 ;
-(id)newDisplayItemValidationTestsForItem:(id)arg1 ;
-(id)typeStringForItemType:(long long)arg1 ;
@end

