/*
* Generated on Thursday, January 14, 2021 at 2:24:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
*/

@class HKHealthStore;


@protocol HKDataMetadataViewControllerDelegate <NSObject>
@property (readonly,nonatomic) HKHealthStore * healthStore; 
@optional
-(id)unitController;
-(id)displayTypeController;
-(id)defaultPredicateForSampleType:(id)arg1;
-(id)defaultPredicateForSampleType:(id)arg1;
-(id)viewControllerForSampleType:(id)arg1 subSamplePredicate:(id)arg2 title:(id)arg3;
-(id)viewControllerForSampleType:(id)arg1 subSamplePredicate:(id)arg2 title:(id)arg3;
-(id)accessViewControllerForSample:(id)arg1 healthStore:(id)arg2;
-(id)accessViewControllerForSample:(id)arg1 healthStore:(id)arg2;
-(BOOL)shareDocumentUsingSample:(id)arg1;
-(BOOL)shareDocumentUsingSample:(id)arg1;

@required
-(HKHealthStore *)healthStore;

@end

