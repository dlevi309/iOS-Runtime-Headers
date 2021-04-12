/*
* Generated on Monday, March 1, 2021 at 2:30:46 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/WebKit.framework/WebKit
*/


@protocol WebAllowDenyPolicyListener <NSObject>
@required
-(void)allow;
-(void)deny;
-(BOOL)shouldClearCache;
-(void)denyOnlyThisRequest;

@end

