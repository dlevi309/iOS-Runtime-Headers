/*
* Generated on Monday, March 1, 2021 at 2:32:37 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
*/


@protocol PKPassFooterContentViewDelegate <NSObject>
@required
-(void)passFooterContentViewRequestsSessionSuppression:(id)arg1;
-(void)passFooterContentViewDidAuthenticate:(id)arg1;
-(BOOL)isPassFooterContentViewInGroup:(id)arg1;
-(void)passFooterContentViewDidChangeUserIntentRequirement:(id)arg1;
-(void)passFooterContentViewDidChangeCoachingState:(id)arg1;
-(void)passFooterContentViewDidChangePileSuppressionRequirement:(id)arg1;
-(unsigned long long)suppressedContentForContentView:(id)arg1;

@end

