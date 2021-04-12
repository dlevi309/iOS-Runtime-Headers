/*
* Generated on Monday, March 1, 2021 at 2:30:46 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/WebKit.framework/WebKit
*/

#import <WebKit/WebKit-Structs.h>
#import <UIKitCore/UIView.h>

@class UIView;

@interface WKApplicationStateTrackingView : UIView {

	WeakObjCPtr<WKWebView> _webViewToTrack;
	unique_ptr<WebKit::ApplicationStateTracker, std::__1::default_delete<WebKit::ApplicationStateTracker> >* _applicationStateTracker;

}

@property (nonatomic,readonly) BOOL isBackground; 
@property (nonatomic,readonly) UIView * _contentView; 
-(UIView *)_contentView;
-(void)didMoveToWindow;
-(void)willMoveToWindow:(id)arg1 ;
-(void)_applicationDidEnterBackground;
-(BOOL)isBackground;
-(id)initWithFrame:(CGRect)arg1 webView:(id)arg2 ;
-(void)_applicationDidFinishSnapshottingAfterEnteringBackground;
-(void)_applicationWillEnterForeground;
@end

