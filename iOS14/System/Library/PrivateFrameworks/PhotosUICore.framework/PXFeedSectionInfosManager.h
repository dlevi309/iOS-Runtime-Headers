/*
* Generated on Thursday, January 14, 2021 at 2:22:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <libobjc.A.dylib/PLCloudFeedEntriesObserver.h>
#import <libobjc.A.dylib/PLCloudCommentsChangeObserver.h>
#import <libobjc.A.dylib/PLAssetChangeObserver.h>
#import <libobjc.A.dylib/PLPhotoLibraryShouldReloadObserver.h>
#import <libobjc.A.dylib/PXConfigurableFeedSectionInfosManager.h>

@protocol PXFeedSectionInfosManagerDelegate;
@class NSDate, PLPhotoLibrary, NSMutableArray, NSMutableDictionary;

@interface PXFeedSectionInfosManager : NSObject <PLCloudFeedEntriesObserver, PLCloudCommentsChangeObserver, PLAssetChangeObserver, PLPhotoLibraryShouldReloadObserver, PXConfigurableFeedSectionInfosManager> {

	PLPhotoLibrary* _photoLibrary;
	NSMutableArray* _sectionInfos;
	NSMutableDictionary* _sectionInfosByCloudFeedEntry;
	NSMutableArray* _pendingFeedEntriesChangeNotifications;
	NSMutableArray* _pendingCommentsChangeNotifications;
	NSMutableArray* _pendingAssetsChangeNotifications;
	long long _entryFilter;
	NSDate* _earliestDate;
	unsigned long long _fetchLimit;
	id<PXFeedSectionInfosManagerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<PXFeedSectionInfosManagerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) long long entryFilter;                                              //@synthesize entryFilter=_entryFilter - In the implementation block
@property (nonatomic,retain) NSDate * earliestDate;                                              //@synthesize earliestDate=_earliestDate - In the implementation block
@property (assign,nonatomic) unsigned long long fetchLimit;                                      //@synthesize fetchLimit=_fetchLimit - In the implementation block
+(id)mostRecentCreationDate;
-(unsigned long long)fetchLimit;
-(long long)indexOfSectionInfoForCloudFeedEntry:(id)arg1 ;
-(long long)entryFilter;
-(void)reconfigure:(/*^block*/id)arg1 ;
-(long long)indexOfSectionInfo:(id)arg1 ;
-(id)sectionInfoAtIndex:(long long)arg1 ;
-(BOOL)reconfigureToIncludeCloudFeedEntry:(id)arg1 ;
-(id)sectionInfoWithIdentifier:(id)arg1 ;
-(id<PXFeedSectionInfosManagerDelegate>)delegate;
-(long long)numberOfSectionInfos;
-(long long)numberOfInvitationsReceived;
-(void)loadSectionInfosAtIndexes:(id)arg1 ;
-(id)indexesOfUnloadedSectionInfosAtIndexes:(id)arg1 ;
-(void)setEntryFilter:(long long)arg1 ;
-(BOOL)hasEnoughCloudFeedAssetEntriesToDisplay;
-(id)indexesOfInvitationsReceivedSectionInfos;
-(id)sectionInfosAtIndexes:(id)arg1 ;
-(id)initWithPhotoLibrary:(id)arg1 configurationBlock:(/*^block*/id)arg2 ;
-(void)setEarliestDate:(NSDate *)arg1 ;
-(void)_rebuildSectionInfos;
-(void)_getEarliestDate:(out id*)arg1 mostRecentEntries:(out id*)arg2 forBatchWithLatestDate:(id)arg3 ;
-(BOOL)_shouldPerformFullReloadForFeedEntriesChangeNotifications:(id)arg1 commentsChangeNotifications:(id)arg2 ;
-(/*^block*/id)_sectionInfoSortingComparator;
-(id)initWithPhotoLibraryForTesting:(id)arg1 filter:(long long)arg2 ;
-(void)_updateSectionInfosForFeedEntriesChangeNotifications:(id)arg1 commentsChangeNotifications:(id)arg2 assetsChangeNotifications:(id)arg3 ;
-(void)setDelegate:(id<PXFeedSectionInfosManagerDelegate>)arg1 ;
-(void)setFetchLimit:(unsigned long long)arg1 ;
-(void)shouldReload:(id)arg1 ;
-(void)_didFinishPostingNotifications:(id)arg1 ;
-(void)assetsDidChange:(id)arg1 ;
-(void)cloudFeedEntriesDidChange:(id)arg1 ;
-(void)cloudCommentsDidChange:(id)arg1 ;
-(NSDate *)earliestDate;
-(void)dealloc;
@end

