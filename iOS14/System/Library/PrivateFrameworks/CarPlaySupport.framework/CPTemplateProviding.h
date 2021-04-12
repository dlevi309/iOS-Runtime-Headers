/*
* Generated on Thursday, January 14, 2021 at 2:27:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CarPlaySupport.framework/CarPlaySupport
*/


@protocol CPTemplateProviding <NSObject>
@required
-(void)setHostPrefersDarkUserInterfaceStyle:(BOOL)arg1;
-(void)popToRootTemplateAnimated:(id)arg1 reply:(/*^block*/id)arg2;
-(void)popTemplateAnimated:(id)arg1 reply:(/*^block*/id)arg2;
-(void)popToTemplate:(id)arg1 animated:(id)arg2 reply:(/*^block*/id)arg3;
-(void)containsTemplate:(id)arg1 reply:(/*^block*/id)arg2;
-(void)dismissTemplateAnimated:(id)arg1 reply:(/*^block*/id)arg2;
-(void)getPresentedTemplateWithReply:(/*^block*/id)arg1;
-(void)getTopTemplateWithReply:(/*^block*/id)arg1;
-(void)getTemplatesWithReply:(/*^block*/id)arg1;
-(void)presentVoiceTemplate:(id)arg1 withProxyDelegate:(id)arg2 animated:(id)arg3 reply:(/*^block*/id)arg4;
-(void)pushGridTemplate:(id)arg1 withProxyDelegate:(id)arg2 animated:(id)arg3 presentationStyle:(unsigned long long)arg4 reply:(/*^block*/id)arg5;
-(void)pushInformationTemplate:(id)arg1 withProxyDelegate:(id)arg2 animated:(id)arg3 presentationStyle:(unsigned long long)arg4 reply:(/*^block*/id)arg5;
-(void)pushMapTemplate:(id)arg1 withProxyDelegate:(id)arg2 animated:(id)arg3 presentationStyle:(unsigned long long)arg4 reply:(/*^block*/id)arg5;
-(void)requestBannerProviderWithReply:(/*^block*/id)arg1;
-(void)requestNavigationProviderForMapTemplate:(id)arg1 withReply:(/*^block*/id)arg2;
-(void)pushListTemplate:(id)arg1 withProxyDelegate:(id)arg2 animated:(id)arg3 presentationStyle:(unsigned long long)arg4 reply:(/*^block*/id)arg5;
-(void)pushSearchTemplate:(id)arg1 withProxyDelegate:(id)arg2 animated:(id)arg3 presentationStyle:(unsigned long long)arg4 reply:(/*^block*/id)arg5;
-(void)pushNowPlayingTemplate:(id)arg1 withProxyDelegate:(id)arg2 animated:(id)arg3 presentationStyle:(unsigned long long)arg4 reply:(/*^block*/id)arg5;
-(void)setTabBarTemplate:(id)arg1 withProxyDelegate:(id)arg2 reply:(/*^block*/id)arg3 animated:(id)arg4;
-(void)pushEntityTemplate:(id)arg1 withProxyDelegate:(id)arg2 animated:(id)arg3 presentationStyle:(unsigned long long)arg4 reply:(/*^block*/id)arg5;
-(void)updateTabBarTemplate:(id)arg1;
-(void)presentActionSheetTemplate:(id)arg1 withProxyDelegate:(id)arg2 animated:(id)arg3 reply:(/*^block*/id)arg4;
-(void)presentAlertTemplate:(id)arg1 withProxyDelegate:(id)arg2 reply:(/*^block*/id)arg3;
-(void)clientRequestNowPlayingTemplateAnimated:(BOOL)arg1;
-(void)pushTabBarTemplate:(id)arg1 animated:(id)arg2;

@end

