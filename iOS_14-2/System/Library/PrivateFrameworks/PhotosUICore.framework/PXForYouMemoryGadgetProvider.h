/*
* Generated on Thursday, January 14, 2021 at 2:22:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PXGadgetProvider.h>
#import <libobjc.A.dylib/PXSectionedDataSourceManagerObserver.h>
#import <libobjc.A.dylib/PXForYouRankable.h>

@class PXMemoriesFeedWidgetDataSourceManager, NSDate, NSString;

@interface PXForYouMemoryGadgetProvider : PXGadgetProvider <PXSectionedDataSourceManagerObserver, PXForYouRankable> {

	BOOL _hasGeneratedGadgets;
	PXMemoriesFeedWidgetDataSourceManager* _dataSourceManager;
	NSDate* _cachedPriorityDate;

}

@property (nonatomic,retain) PXMemoriesFeedWidgetDataSourceManager * dataSourceManager;              //@synthesize dataSourceManager=_dataSourceManager - In the implementation block
@property (assign,nonatomic) BOOL hasGeneratedGadgets;                                               //@synthesize hasGeneratedGadgets=_hasGeneratedGadgets - In the implementation block
@property (nonatomic,retain) NSDate * cachedPriorityDate;                                            //@synthesize cachedPriorityDate=_cachedPriorityDate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSDate * priorityDate; 
@property (nonatomic,readonly) long long defaultPriority; 
@property (nonatomic,readonly) long long priorityType; 
@property (nonatomic,readonly) unsigned long long gadgetType; 
+(unsigned long long)maxMemoriesToFetch;
-(void)generateGadgets;
-(unsigned long long)gadgetType;
-(void)setHasGeneratedGadgets:(BOOL)arg1 ;
-(void)loadDataForGadgets;
-(NSDate *)priorityDate;
-(void)setDataSourceManager:(PXMemoriesFeedWidgetDataSourceManager *)arg1 ;
-(void)resetPriorityDate;
-(long long)defaultPriority;
-(long long)priorityType;
-(NSDate *)cachedPriorityDate;
-(void)setCachedPriorityDate:(NSDate *)arg1 ;
-(unsigned long long)estimatedNumberOfGadgets;
-(PXMemoriesFeedWidgetDataSourceManager *)dataSourceManager;
-(BOOL)supportsDynamicRanking;
-(BOOL)hasGeneratedGadgets;
-(void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3 ;
@end

