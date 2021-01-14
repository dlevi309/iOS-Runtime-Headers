/*
* Generated on Thursday, January 14, 2021 at 2:21:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
*/


@class NSMutableDictionary;

@interface CKOperationFlowControlManager : NSObject {

	NSMutableDictionary* _flowControlledOperationKeys;

}

@property (readonly) NSMutableDictionary * flowControlledOperationKeys;              //@synthesize flowControlledOperationKeys=_flowControlledOperationKeys - In the implementation block
-(id)init;
-(BOOL)isOperationLimited:(id)arg1 outLimitError:(id*)arg2 ;
-(void)unlimitAllOperations;
-(void)limitOperation:(id)arg1 retryAfter:(id)arg2 error:(id)arg3 ;
-(id)CKStatusReportArray;
-(NSMutableDictionary *)flowControlledOperationKeys;
-(double)secondsUntilUnlimited:(id)arg1 ;
@end

