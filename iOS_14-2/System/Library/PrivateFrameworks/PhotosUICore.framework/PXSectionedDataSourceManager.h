/*
* Generated on Thursday, January 14, 2021 at 2:22:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PXObservable.h>

@class NSMutableArray, PXSectionedDataSource, PXSectionedChangeDetailsRepository;

@interface PXSectionedDataSourceManager : PXObservable {

	NSMutableArray* _waitingConditions;
	PXSectionedDataSource* _dataSource;
	PXSectionedChangeDetailsRepository* _changeHistory;

}

@property (nonatomic,readonly) PXSectionedDataSource * dataSource; 
@property (nonatomic,readonly) PXSectionedChangeDetailsRepository * changeHistory;              //@synthesize changeHistory=_changeHistory - In the implementation block
-(id)createInitialDataSource;
-(id)init;
-(PXSectionedDataSource *)dataSource;
-(void)_setDataSource:(id)arg1 ;
-(void)registerChangeObserver:(id)arg1 context:(void*)arg2 ;
-(PXSectionedChangeDetailsRepository *)changeHistory;
-(void)unregisterChangeObserver:(id)arg1 context:(void*)arg2 ;
-(id)changeDetailsFromDataSource:(id)arg1 toDataSource:(id)arg2 ;
-(void)setDataSource:(id)arg1 changeDetails:(id)arg2 ;
-(void)setDataSource:(id)arg1 changeDetailsArray:(id)arg2 ;
-(id)mutableChangeObject;
-(void)didPublishChanges;
-(id)allChangeDetailsFromDataSource:(id)arg1 toDataSource:(id)arg2 ;
-(void)waitForCondition:(/*^block*/id)arg1 timeout:(double)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)_reevaluateWaitingConditions;
-(void)_waitingConditionDidTimeout:(id)arg1 ;
-(id)queryObserversInterestingObjectReferences;
@end

