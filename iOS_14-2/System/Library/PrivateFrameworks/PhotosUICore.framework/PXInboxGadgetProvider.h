/*
* Generated on Thursday, January 14, 2021 at 2:22:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PXGadgetProvider.h>
#import <libobjc.A.dylib/PXChangeObserver.h>
#import <libobjc.A.dylib/PXSectionedDataSourceManagerObserver.h>

@class PXInboxAggregateDataSourceManager, NSString;

@interface PXInboxGadgetProvider : PXGadgetProvider <PXChangeObserver, PXSectionedDataSourceManagerObserver> {

	PXInboxAggregateDataSourceManager* _dataSourceManager;

}

@property (nonatomic,readonly) PXInboxAggregateDataSourceManager * dataSourceManager;              //@synthesize dataSourceManager=_dataSourceManager - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)generateGadgets;
-(id)initWithDataSourceManager:(id)arg1 ;
-(void)_updateDataSourceRangesOfCurrentGadgets;
-(void)_updateLastSeenDateOfCurrentGadgets;
-(void)_contentSizeCategoryDidChangeNotification:(id)arg1 ;
-(void)loadDataForGadgets;
-(unsigned long long)estimatedNumberOfGadgets;
-(PXInboxAggregateDataSourceManager *)dataSourceManager;
-(void)_updateGadgets;
-(void)_lastExitedForYouDateDidChange:(id)arg1 ;
-(void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3 ;
@end

