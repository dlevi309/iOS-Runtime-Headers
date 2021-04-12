/*
* Generated on Thursday, January 14, 2021 at 2:24:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
*/


@protocol PKPassFooterContentViewDelegate <NSObject>
@required
-(void)passFooterContentView:(id)arg1 didAuthorizeAndRetrieveDecryptedBarcode:(id)arg2;
-(void)passFooterContentViewDidInvalidateAuthorizedBarcode:(id)arg1;
-(void)passFooterContentViewDidChangePhysicalButtonRequirement:(id)arg1;
-(void)passFooterContentViewDidChangeCoachingState:(id)arg1;
-(void)passFooterContentViewDidChangePileSuppressionRequirement:(id)arg1;
-(unsigned long long)suppressedContentForContentView:(id)arg1;
-(BOOL)isPassFooterContentViewInGroup:(id)arg1;
-(void)passFooterContentViewRequestsSessionSuppression:(id)arg1;
-(void)passFooterContentViewDidAuthorizeTransaction:(id)arg1;
-(void)passFooterContentViewDidAuthenticate:(id)arg1;

@end

