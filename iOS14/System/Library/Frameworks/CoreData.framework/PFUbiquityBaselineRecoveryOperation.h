/*
* Generated on Thursday, January 14, 2021 at 2:21:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
*/

#import <CoreData/PFUbiquityBaselineOperation.h>

@interface PFUbiquityBaselineRecoveryOperation : PFUbiquityBaselineOperation

@property (assign) NSObject*<PFUbiquityBaselineRecoveryOperationDelegate> delegate; 
-(NSObject*<PFUbiquityBaselineRecoveryOperationDelegate>)delegate;
-(id)retainedDelegate;
-(void)setDelegate:(NSObject*<PFUbiquityBaselineRecoveryOperationDelegate>)arg1 ;
-(void)main;
-(BOOL)electBaselineURLFromVersions:(id)arg1 withBaseline:(id)arg2 error:(id*)arg3 ;
-(BOOL)hasCurrentBaseline;
-(BOOL)conflictsExistForBaseline:(id)arg1 ;
-(BOOL)resolveConflictsForBaseline:(id)arg1 withError:(id*)arg2 ;
-(BOOL)shouldReplaceLocalStoreWithBaseline:(id)arg1 ;
-(BOOL)replaceLocalStoreWithBaseline:(id)arg1 error:(id*)arg2 ;
-(id)electAncestorBaselineForConflictedBaselines:(id)arg1 dissentingBaselines:(id*)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
@end

