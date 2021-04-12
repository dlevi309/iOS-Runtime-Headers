/*
* Generated on Thursday, January 14, 2021 at 2:21:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
*/

#import <CoreData/PFUbiquityBaselineRollOperation.h>

@interface PFUbiquityBaselineRollResponseOperation : PFUbiquityBaselineRollOperation

@property (assign) NSObject*<PFUbiquityBaselineRollResponseOperationDelegate> delegate; 
-(NSObject*<PFUbiquityBaselineRollResponseOperationDelegate>)delegate;
-(id)retainedDelegate;
-(void)setDelegate:(NSObject*<PFUbiquityBaselineRollResponseOperationDelegate>)arg1 ;
-(void)main;
-(BOOL)canAdoptBaseline:(id)arg1 byReplacingLocalStoreFile:(BOOL*)arg2 withStack:(id)arg3 withError:(id*)arg4 ;
@end

