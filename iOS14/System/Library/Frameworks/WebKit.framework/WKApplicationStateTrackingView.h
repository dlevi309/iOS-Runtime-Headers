/*
* Generated on Thursday, January 14, 2021 at 2:21:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(BOOL)isBackground;
-(void)_applicationDidEnterBackground;
-(UIView *)_contentView;
-(void)didMoveToWindow;
-(void)_applicationDidFinishSnapshottingAfterEnteringBackground;
-(void)_willBeginSnapshotSequence;
-(void)_didCompleteSnapshotSequence;
-(void)willMoveToWindow:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 webView:(id)arg2 ;
-(void)_applicationWillEnterForeground;
@end

