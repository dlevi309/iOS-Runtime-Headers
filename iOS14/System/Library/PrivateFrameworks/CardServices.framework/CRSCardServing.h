/*
* Generated on Thursday, January 14, 2021 at 2:27:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CardServices.framework/CardServices
*/


@protocol CRSCardServing <CRSServing>
@required
-(BOOL)canSatisfyCardRequest:(id)arg1;
-(unsigned long long)servicePriorityForRequest:(id)arg1;
-(void)requestCard:(id)arg1 reply:(/*^block*/id)arg2;

@end

