/*
* Generated on Thursday, January 14, 2021 at 2:21:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

