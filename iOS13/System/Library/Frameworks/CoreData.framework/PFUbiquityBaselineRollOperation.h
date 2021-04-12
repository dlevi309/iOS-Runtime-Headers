/*
* Generated on Monday, March 1, 2021 at 2:30:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
*/

#import <CoreData/PFUbiquityBaselineOperation.h>

@class PFUbiquityBaselineHeuristics;

@interface PFUbiquityBaselineRollOperation : PFUbiquityBaselineOperation {

	PFUbiquityBaselineHeuristics* _heuristics;

}

@property (assign) NSObject*<PFUbiquityBaselineRollOperationDelegate> delegate; 
-(id)init;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(NSObject*<PFUbiquityBaselineRollOperationDelegate>)delegate;
-(void)setDelegate:(NSObject*<PFUbiquityBaselineRollOperationDelegate>)arg1 ;
-(void)main;
-(id)retainedDelegate;
-(BOOL)haveConsistentStateForBaselineRoll;
-(BOOL)rollBaselineWithError:(id*)arg1 ;
@end

