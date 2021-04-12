/*
* Generated on Thursday, January 14, 2021 at 2:22:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AuthKit.framework/AuthKit
*/


@protocol AKAuthHandler <NSObject>
@required
-(void)reauthenticateWithContext:(id)arg1 completionWithResults:(/*^block*/id)arg2;
-(id)buildReauthenticationContextFromContext:(id)arg1 error:(id*)arg2;
-(void)reauthenticateWithContext:(id)arg1 completion:(/*^block*/id)arg2;

@end

