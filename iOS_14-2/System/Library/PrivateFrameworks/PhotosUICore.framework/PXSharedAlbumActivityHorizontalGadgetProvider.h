/*
* Generated on Thursday, January 14, 2021 at 2:22:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PXGadgetProvider.h>
#import <libobjc.A.dylib/PXFeedSectionInfosManagerDelegate.h>
#import <libobjc.A.dylib/PXForYouRankable.h>

@class PXFeedSectionInfosManager, PXInboxAggregateDataSourceManager, NSDate, NSString;

@interface PXSharedAlbumActivityHorizontalGadgetProvider : PXGadgetProvider <PXFeedSectionInfosManagerDelegate, PXForYouRankable> {

	PXFeedSectionInfosManager* _feedSectionInfosManager;
	PXInboxAggregateDataSourceManager* _inboxDataSourceManager;
	NSDate* _cachedPriorityDate;

}

@property (nonatomic,retain) PXFeedSectionInfosManager * feedSectionInfosManager;                     //@synthesize feedSectionInfosManager=_feedSectionInfosManager - In the implementation block
@property (nonatomic,retain) PXInboxAggregateDataSourceManager * inboxDataSourceManager;              //@synthesize inboxDataSourceManager=_inboxDataSourceManager - In the implementation block
@property (nonatomic,retain) NSDate * cachedPriorityDate;                                             //@synthesize cachedPriorityDate=_cachedPriorityDate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSDate * priorityDate; 
@property (nonatomic,readonly) long long defaultPriority; 
@property (nonatomic,readonly) long long priorityType; 
@property (nonatomic,readonly) unsigned long long gadgetType; 
-(void)generateGadgets;
-(unsigned long long)gadgetType;
-(id)init;
-(NSDate *)priorityDate;
-(void)resetPriorityDate;
-(long long)defaultPriority;
-(long long)priorityType;
-(NSDate *)cachedPriorityDate;
-(void)setCachedPriorityDate:(NSDate *)arg1 ;
-(unsigned long long)estimatedNumberOfGadgets;
-(id)_gadgetTitle;
-(BOOL)supportsDynamicRanking;
-(void)_updateGadgetTitle;
-(void)_navigateToSharedAlbumActivityFeed:(id)arg1 ;
-(long long)_countOfSectionInfosToDisplay:(unsigned long long)arg1 ;
-(id)_currentGadgetOfType:(unsigned long long)arg1 ;
-(PXFeedSectionInfosManager *)feedSectionInfosManager;
-(void)setFeedSectionInfosManager:(PXFeedSectionInfosManager *)arg1 ;
-(PXInboxAggregateDataSourceManager *)inboxDataSourceManager;
-(void)setInboxDataSourceManager:(PXInboxAggregateDataSourceManager *)arg1 ;
-(void)_updateGadgets;
-(void)feedSectionInfosManager:(id)arg1 sectionInfosDidChange:(id)arg2 ;
-(void)dealloc;
@end

