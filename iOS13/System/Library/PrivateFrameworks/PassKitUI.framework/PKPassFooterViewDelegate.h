/*
* Generated on Monday, March 1, 2021 at 2:32:35 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
*/


@protocol PKPassFooterViewDelegate <NSObject>
@optional
-(void)passFooterViewDidChangePileSuppressionRequirement:(id)arg1;

@required
-(void)passFooterViewDidChangeUserIntentRequirement:(id)arg1;
-(void)passFooterViewDidChangeCoachingState:(id)arg1;
-(BOOL)isPassFooterViewInGroup:(id)arg1;
-(unsigned long long)suppressedContentForPassFooter:(id)arg1;

@end

