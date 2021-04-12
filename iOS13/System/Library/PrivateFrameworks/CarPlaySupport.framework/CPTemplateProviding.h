/*
* Generated on Monday, March 1, 2021 at 2:34:42 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CarPlaySupport.framework/CarPlaySupport
*/


@protocol CPTemplateProviding <NSObject>
@required
-(void)setHostPrefersDarkUserInterfaceStyle:(BOOL)arg1;
-(void)popToRootTemplateAnimated:(id)arg1;
-(void)popTemplateAnimated:(id)arg1;
-(void)popToTemplate:(id)arg1 animated:(id)arg2;
-(void)containsTemplate:(id)arg1 reply:(/*^block*/id)arg2;
-(void)dismissTemplateAnimated:(id)arg1;
-(void)getPresentedTemplateWithReply:(/*^block*/id)arg1;
-(void)getTopTemplateWithReply:(/*^block*/id)arg1;
-(void)getTemplatesWithReply:(/*^block*/id)arg1;
-(void)presentVoiceTemplate:(id)arg1 withProxyDelegate:(id)arg2 animated:(id)arg3 reply:(/*^block*/id)arg4;
-(void)pushGridTemplate:(id)arg1 withProxyDelegate:(id)arg2 animated:(id)arg3 presentationStyle:(unsigned long long)arg4 reply:(/*^block*/id)arg5;
-(void)pushMapTemplate:(id)arg1 withProxyDelegate:(id)arg2 animated:(id)arg3 presentationStyle:(unsigned long long)arg4 reply:(/*^block*/id)arg5;
-(void)requestBannerProviderWithReply:(/*^block*/id)arg1;
-(void)requestNavigationProviderForMapTemplate:(id)arg1 withReply:(/*^block*/id)arg2;
-(void)pushListTemplate:(id)arg1 withProxyDelegate:(id)arg2 animated:(id)arg3 presentationStyle:(unsigned long long)arg4 reply:(/*^block*/id)arg5;
-(void)pushSearchTemplate:(id)arg1 withProxyDelegate:(id)arg2 animated:(id)arg3 presentationStyle:(unsigned long long)arg4 reply:(/*^block*/id)arg5;
-(void)presentActionSheetTemplate:(id)arg1 withProxyDelegate:(id)arg2 animated:(id)arg3;
-(void)presentAlertTemplate:(id)arg1 withProxyDelegate:(id)arg2;
-(void)dismissAlertAnimated:(BOOL)arg1;

@end

