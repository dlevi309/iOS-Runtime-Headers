/*
* Generated on Thursday, January 14, 2021 at 2:24:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PromotedContentUI.framework/PromotedContentUI
*/

#import <PromotedContentUI/PromotedContentUI-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/NewsTransparencyViewControllerDelegate.h>
#import <libobjc.A.dylib/WKNavigationDelegate.h>
#import <libobjc.A.dylib/APWebProcessDelegate.h>

@interface APPCPromotedContentView : UIView <NewsTransparencyViewControllerDelegate, WKNavigationDelegate, APWebProcessDelegate> {

	 webView;
	 privacyMarkerView;
	 dimmerView;
	 videoProgressMetricThresholds;
	 customPrivacyHandling;
	 outstreamVisibleThreshold;
	 nonOutstreamVisibleThreshold;
	 mraidActionTypes;
	 tapGestureRecognizer;
	 expandedAdTapGestureRecognizer;
	 expandedAdFrame;
	 videoProgressMetricStatus;
	 visiblePercentage;
	 unfairLock;
	 promotedContent;
	 lastPerformedAction;
	 shouldBlockNavigation;
	 tapWasRecognized;
	 nativeArticleOnDisplay;
	 interactionDelegate;
	 interactionPresentationDelegate;
	 readiness;
	 nativeView;
	 overriddenPrivacyMarkerPosition;

}

@property (assign,nonatomic) long long readiness; 
@property (assign,nonatomic) CGRect frame; 
-(id)initWithFrame:(CGRect)arg1 ;
-(void)webView:(id)arg1 decidePolicyForNavigationAction:(id)arg2 decisionHandler:(/*^block*/id)arg3 ;
-(CGRect)frame;
-(void)webProcessPlugInBrowserContextControllerGlobalObjectIsAvailableForFrame;
-(void)tapRecognized:(id)arg1 ;
-(void)layoutSubviews;
-(void)setFrame:(CGRect)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)webView:(id)arg1 didFailProvisionalNavigation:(id)arg2 withError:(id)arg3 ;
-(void)newsTransparencyViewControllerDidDismiss:(id)arg1 ;
-(void)webView:(id)arg1 didStartProvisionalNavigation:(id)arg2 ;
-(void)webView:(id)arg1 didFinishNavigation:(id)arg2 ;
-(void)webViewWebContentProcessDidTerminate:(id)arg1 ;
-(void)dealloc;
-(void)webView:(id)arg1 didFailNavigation:(id)arg2 withError:(id)arg3 ;
-(void)webProcessMRAIDJSODidCallClose;
-(void)webProcessMRAIDJSODidCallExpand:(id)arg1 withMaximumWidth:(double)arg2 andHeight:(double)arg3 ;
-(void)webProcessMRAIDJSODidCallCreateCalendarEvent:(id)arg1 ;
-(void)webProcessMRAIDJSODidCallOpen:(id)arg1 ;
-(void)webProcessVideoAdJSOGetVideoInfo:(/*^block*/id)arg1 ;
-(void)webProcessVideoAdJSOCreativeViewLoaded;
-(void)webProcessVideoAdJSODidCallPlayStarted:(float)arg1 volume:(float)arg2 ;
-(void)webProcessVideoAdJSODidCallPlayResumed:(float)arg1 volume:(float)arg2 ;
-(void)webProcessVideoAdJSODidCallPlayPaused:(float)arg1 volume:(float)arg2 ;
-(void)webProcessVideoAdJSODidCallPlayProgressed:(float)arg1 volume:(float)arg2 ;
-(void)webProcessVideoAdJSODidCallPlayCompletedWithVolume:(float)arg1 ;
-(void)webProcessVideoAdJSODidCallViewabilityChanged:(BOOL)arg1 playTime:(float)arg2 volume:(float)arg3 ;
-(void)webProcessVideoAdJSODidCallVolumeChanged:(float)arg1 playTime:(float)arg2 ;
-(void)webProcessVideoAdJSODidCallAudioMuted:(float)arg1 ;
-(void)webProcessVideoAdJSODidCallAudioUnmuted:(float)arg1 volume:(float)arg2 ;
-(void)webProcessVideoAdJSODidCallMoreInfoTapped:(float)arg1 volume:(float)arg2 ;
-(void)webProcessVideoAdJSODidCallVideoTapped:(float)arg1 volume:(float)arg2 ;
-(void)webProcessVideoAdJSODidCallSkipAdTapped:(float)arg1 volume:(float)arg2 ;
-(void)webProcessVideoAdJSODidCallFullScreenTapped:(float)arg1 volume:(float)arg2 ;
-(void)webProcessVideoAdJSODidCallExitFullScreenTapped:(float)arg1 volume:(float)arg2 ;
-(void)webProcessDiagnosticJSOStatusReported:(id)arg1 status:(id)arg2 ;
-(long long)readiness;
-(void)setReadiness:(long long)arg1 ;
-(void)sizeCategoryChanged:(id)arg1 ;
-(void)tappedPrivacyMarker:(id)arg1 ;
@end

