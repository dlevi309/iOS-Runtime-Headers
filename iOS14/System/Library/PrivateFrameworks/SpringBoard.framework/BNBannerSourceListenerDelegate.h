/*
* Generated on Thursday, January 14, 2021 at 2:25:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/


@protocol BNBannerSourceListenerDelegate <NSObject>
@optional
-(void)bannerSourceListener:(id)arg1 presentationSize:(out CGSize*)arg2 containerSize:(out CGSize*)arg3 error:(id*)arg4;
-(id)sceneSpecificationForBannerSourceListener:(id)arg1;
-(BOOL)bannerSourceListener:(id)arg1 requestsRevokingPresentableWithRequestIdentifier:(id)arg2 requesterIdentifier:(id)arg3 animated:(BOOL)arg4 reason:(id)arg5 userInfo:(id)arg6 error:(id*)arg7;
-(BOOL)bannerSourceListener:(id)arg1 requestsRevokingAllPresentablesForRequesterWithIdentifier:(id)arg2 reason:(id)arg3 userInfo:(id)arg4 error:(id*)arg5;

@required
-(BOOL)bannerSourceListener:(id)arg1 requestsPostingPresentable:(id)arg2 options:(unsigned long long)arg3 userInfo:(id)arg4 error:(id*)arg5;
-(id)bannerSourceListener:(id)arg1 layoutDescriptionWithError:(id*)arg2;
-(BOOL)bannerSourceListener:(id)arg1 recommendsSuspending:(BOOL)arg2 forReason:(id)arg3 revokingCurrent:(BOOL)arg4 error:(id*)arg5;
-(id)bannerSourceListener:(id)arg1 requestsRevokingPresentablesWithIdentification:(id)arg2 reason:(id)arg3 animated:(BOOL)arg4 userInfo:(id)arg5 error:(id*)arg6;

@end

