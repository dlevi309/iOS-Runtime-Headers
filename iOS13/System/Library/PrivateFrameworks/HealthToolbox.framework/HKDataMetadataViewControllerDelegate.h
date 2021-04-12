/*
* Generated on Monday, March 1, 2021 at 2:34:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthToolbox.framework/HealthToolbox
*/

@class HKHealthStore;


@protocol HKDataMetadataViewControllerDelegate <NSObject>
@property (nonatomic,readonly) HKHealthStore * healthStore; 
@optional
-(id)unitController;
-(id)displayTypeController;
-(id)defaultPredicateForSampleType:(id)arg1;
-(id)viewControllerForSampleType:(id)arg1 subSamplePredicate:(id)arg2 title:(id)arg3;
-(id)accessViewControllerForSample:(id)arg1 healthStore:(id)arg2;
-(BOOL)shareDocumentUsingSample:(id)arg1;

@required
-(HKHealthStore *)healthStore;

@end

