/*
* Generated on Thursday, January 14, 2021 at 2:24:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
*/


@protocol PKPassFooterViewDelegate <NSObject>
@optional
-(void)passFooterViewDidChangePileSuppressionRequirement:(id)arg1;
-(void)passFooterViewDidSucceedAtAuthorization:(id)arg1;
-(void)passFooterViewDidEndAuthorization:(id)arg1;

@required
-(void)passFooterViewDidChangePhysicalButtonRequirement:(id)arg1;
-(void)passFooterViewDidChangeCoachingState:(id)arg1;
-(BOOL)isPassFooterViewInGroup:(id)arg1;
-(unsigned long long)suppressedContentForPassFooter:(id)arg1;

@end

