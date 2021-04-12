/*
* Generated on Thursday, January 14, 2021 at 2:21:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
*/

#import <CoreData/PFUbiquityBaselineOperation.h>

@class PFUbiquityBaselineHeuristics;

@interface PFUbiquityBaselineRollOperation : PFUbiquityBaselineOperation {

	PFUbiquityBaselineHeuristics* _heuristics;

}

@property (assign) NSObject*<PFUbiquityBaselineRollOperationDelegate> delegate; 
-(id)init;
-(NSObject*<PFUbiquityBaselineRollOperationDelegate>)delegate;
-(id)retainedDelegate;
-(void)setDelegate:(NSObject*<PFUbiquityBaselineRollOperationDelegate>)arg1 ;
-(void)main;
-(BOOL)haveConsistentStateForBaselineRoll;
-(BOOL)rollBaselineWithError:(id*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
@end

