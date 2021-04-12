/*
* Generated on Monday, March 1, 2021 at 2:32:19 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/NotificationCenter.framework/NotificationCenter
*/


@protocol _NCWidgetViewController_Service_IPC
@optional
-(void)__setActiveDisplayMode:(long long)arg1;
-(void)__setMaximumSize:(CGSize)arg1 forDisplayMode:(long long)arg2;

@required
-(void)__requestEncodedLayerTreeToURL:(id)arg1 withCodingImageFormat:(id)arg2 withReplyHandler:(/*^block*/id)arg3;
-(void)__performUpdateWithReplyHandler:(/*^block*/id)arg1;
-(void)__openTransactionForAppearanceCallWithState:(int)arg1 withIdentifier:(id)arg2;
-(void)__updateVisibilityState:(long long)arg1;
-(void)__updateVisibleFrame:(CGRect)arg1 withReplyHandler:(/*^block*/id)arg2;
-(void)__updateLayoutMargins:(id)arg1;

@end

