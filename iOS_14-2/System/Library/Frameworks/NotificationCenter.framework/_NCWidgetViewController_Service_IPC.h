/*
* Generated on Thursday, January 14, 2021 at 2:26:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/NotificationCenter.framework/NotificationCenter
*/


@protocol _NCWidgetViewController_Service_IPC
@optional
-(void)__setMaximumSize:(CGSize)arg1 forDisplayMode:(long long)arg2;
-(void)__setActiveDisplayMode:(long long)arg1;

@required
-(void)__updateVisibilityState:(long long)arg1;
-(void)__updateLayoutMargins:(id)arg1;
-(void)__performUpdateWithReplyHandler:(/*^block*/id)arg1;
-(void)__updateVisibleFrame:(CGRect)arg1 withReplyHandler:(/*^block*/id)arg2;
-(void)__requestEncodedLayerTreeToURL:(id)arg1 withCodingImageFormat:(id)arg2 withReplyHandler:(/*^block*/id)arg3;
-(void)__openTransactionForAppearanceCallWithState:(int)arg1 withIdentifier:(id)arg2;

@end

