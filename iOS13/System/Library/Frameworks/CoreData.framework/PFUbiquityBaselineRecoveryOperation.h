/*
* Generated on Monday, March 1, 2021 at 2:30:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
*/

#import <CoreData/PFUbiquityBaselineOperation.h>

@interface PFUbiquityBaselineRecoveryOperation : PFUbiquityBaselineOperation

@property (assign) NSObject*<PFUbiquityBaselineRecoveryOperationDelegate> delegate; 
-(BOOL)isEqual:(id)arg1 ;
-(NSObject*<PFUbiquityBaselineRecoveryOperationDelegate>)delegate;
-(void)setDelegate:(NSObject*<PFUbiquityBaselineRecoveryOperationDelegate>)arg1 ;
-(void)main;
-(id)retainedDelegate;
-(BOOL)electBaselineURLFromVersions:(id)arg1 withBaseline:(id)arg2 error:(id*)arg3 ;
-(BOOL)hasCurrentBaseline;
-(BOOL)conflictsExistForBaseline:(id)arg1 ;
-(BOOL)resolveConflictsForBaseline:(id)arg1 withError:(id*)arg2 ;
-(BOOL)shouldReplaceLocalStoreWithBaseline:(id)arg1 ;
-(BOOL)replaceLocalStoreWithBaseline:(id)arg1 error:(id*)arg2 ;
-(id)electAncestorBaselineForConflictedBaselines:(id)arg1 dissentingBaselines:(id*)arg2 ;
@end

