/*
* Generated on Thursday, January 14, 2021 at 2:21:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/WebKit.framework/WebKit
*/


@protocol WebAllowDenyPolicyListener <NSObject>
@required
-(void)deny;
-(void)allow;
-(BOOL)shouldClearCache;
-(void)denyOnlyThisRequest;

@end

