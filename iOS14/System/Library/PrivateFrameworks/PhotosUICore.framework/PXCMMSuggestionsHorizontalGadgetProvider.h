/*
* Generated on Thursday, January 14, 2021 at 2:22:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PXGadgetProvider.h>
#import <libobjc.A.dylib/PXSettingsKeyObserver.h>
#import <libobjc.A.dylib/PXChangeObserver.h>
#import <libobjc.A.dylib/PXSectionedDataSourceManagerObserver.h>
#import <libobjc.A.dylib/PXForYouRankable.h>

@protocol PXCMMWorkflowPresenting;
@class PXCMMSuggestionsDataSourceManager, PXCPLStatusProvider, NSDate, NSString;

@interface PXCMMSuggestionsHorizontalGadgetProvider : PXGadgetProvider <PXSettingsKeyObserver, PXChangeObserver, PXSectionedDataSourceManagerObserver, PXForYouRankable> {

	PXCMMSuggestionsDataSourceManager* _dataSourceManager;
	BOOL _didGenerateGadgets;
	PXCPLStatusProvider* _cplStatusProvider;
	BOOL _cmmIsAvailable;
	id<PXCMMWorkflowPresenting> _workflowPresenter;
	NSDate* _cachedPriorityDate;

}

@property (nonatomic,retain) NSDate * cachedPriorityDate;                                  //@synthesize cachedPriorityDate=_cachedPriorityDate - In the implementation block
@property (nonatomic,readonly) id<PXCMMWorkflowPresenting> workflowPresenter;              //@synthesize workflowPresenter=_workflowPresenter - In the implementation block
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
-(void)loadDataForGadgets;
-(void)_configureDataSourceManager;
-(NSDate *)priorityDate;
-(void)resetPriorityDate;
-(long long)defaultPriority;
-(long long)priorityType;
-(NSDate *)cachedPriorityDate;
-(void)setCachedPriorityDate:(NSDate *)arg1 ;
-(unsigned long long)estimatedNumberOfGadgets;
-(BOOL)supportsDynamicRanking;
-(void)settings:(id)arg1 changedValueForKey:(id)arg2 ;
-(void)_updateGadgets;
-(id<PXCMMWorkflowPresenting>)workflowPresenter;
-(id)initWithIdentifier:(id)arg1 ;
-(id)initWithWorkflowPresenter:(id)arg1 ;
-(void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3 ;
@end

