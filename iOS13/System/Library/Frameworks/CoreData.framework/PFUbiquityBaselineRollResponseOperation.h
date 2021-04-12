/*
* Generated on Monday, March 1, 2021 at 2:30:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
*/

#import <CoreData/PFUbiquityBaselineRollOperation.h>

@interface PFUbiquityBaselineRollResponseOperation : PFUbiquityBaselineRollOperation

@property (assign) NSObject*<PFUbiquityBaselineRollResponseOperationDelegate> delegate; 
-(NSObject*<PFUbiquityBaselineRollResponseOperationDelegate>)delegate;
-(void)setDelegate:(NSObject*<PFUbiquityBaselineRollResponseOperationDelegate>)arg1 ;
-(void)main;
-(id)retainedDelegate;
-(BOOL)canAdoptBaseline:(id)arg1 byReplacingLocalStoreFile:(BOOL*)arg2 withStack:(id)arg3 withError:(id*)arg4 ;
@end

