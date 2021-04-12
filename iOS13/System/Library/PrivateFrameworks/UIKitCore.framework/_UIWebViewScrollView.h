/*
* Generated on Monday, March 1, 2021 at 2:30:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIWebScrollView.h>

@class _UIWebViewScrollViewDelegateForwarder, UIWebBrowserView;

@interface _UIWebViewScrollView : UIWebScrollView {

	_UIWebViewScrollViewDelegateForwarder* _forwarder;
	BOOL _bouncesSetExplicitly;
	BOOL _contentInsetAdjustmentBehaviorWasExternallyOverridden;
	UIWebBrowserView* _browserView;

}
-(void)dealloc;
-(id)delegate;
-(void)setDelegate:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setContentInsetAdjustmentBehavior:(long long)arg1 ;
-(void)setBounces:(BOOL)arg1 ;
-(void)setBouncesHorizontally:(BOOL)arg1 ;
-(void)setBouncesVertically:(BOOL)arg1 ;
-(void)_weaklySetBouncesHorizontally:(BOOL)arg1 ;
-(void)_setWebView:(id)arg1 ;
-(BOOL)_contentInsetAdjustmentBehaviorWasExternallyOverridden;
-(void)_setContentInsetAdjustmentBehaviorInternal:(long long)arg1 ;
@end

