/*
* Generated on Monday, March 1, 2021 at 2:31:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/


@protocol PKPaymentValidating <NSObject>
@optional
+(id)validatorWithObject:(id)arg1;
+(Class)validatedClass;
-(BOOL)isValidWithAPIType:(unsigned long long)arg1 withError:(id*)arg2;

@required
-(BOOL)isValidWithError:(id*)arg1;

@end

