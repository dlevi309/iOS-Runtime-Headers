/*
* Generated on Thursday, January 14, 2021 at 2:20:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(BOOL)_contentInsetAdjustmentBehaviorWasExternallyOverridden;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)delegate;
-(void)setBouncesHorizontally:(BOOL)arg1 ;
-(void)setBouncesVertically:(BOOL)arg1 ;
-(void)_setWebView:(id)arg1 ;
-(void)_weaklySetBouncesHorizontally:(BOOL)arg1 ;
-(void)setDelegate:(id)arg1 ;
-(void)_setContentInsetAdjustmentBehaviorInternal:(long long)arg1 ;
-(void)setBounces:(BOOL)arg1 ;
-(void)setContentInsetAdjustmentBehavior:(long long)arg1 ;
-(void)dealloc;
@end

