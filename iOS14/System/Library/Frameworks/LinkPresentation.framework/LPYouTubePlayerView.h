/*
* Generated on Thursday, January 14, 2021 at 2:22:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/LinkPresentation.framework/LinkPresentation
*/

#import <LinkPresentation/LinkPresentation-Structs.h>
#import <UIKitCore/UIView.h>
#import <UIKit/UIScrollViewDelegate.h>
#import <libobjc.A.dylib/WKNavigationDelegate.h>

@protocol LPYouTubePlayerDelegate;
@class WKWebView, NSString, LPYouTubePlayerScriptMessageHandler, NSMutableArray;

@interface LPYouTubePlayerView : UIView <UIScrollViewDelegate, WKNavigationDelegate> {

	WKWebView* _webView;
	NSString* _videoID;
	long long _state;
	LPYouTubePlayerScriptMessageHandler* _scriptMessageHandler;
	BOOL _ready;
	NSMutableArray* _commandsPendingPlayerReadiness;
	BOOL _startsPlayingAutomatically;
	BOOL _showsControls;
	BOOL _muted;
	id<LPYouTubePlayerDelegate> _delegate;
	double _startTime;
	double _endTime;

}

@property (assign,nonatomic,__weak) id<LPYouTubePlayerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL startsPlayingAutomatically;                          //@synthesize startsPlayingAutomatically=_startsPlayingAutomatically - In the implementation block
@property (assign,nonatomic) BOOL showsControls;                                       //@synthesize showsControls=_showsControls - In the implementation block
@property (assign,nonatomic) double startTime;                                         //@synthesize startTime=_startTime - In the implementation block
@property (assign,nonatomic) double endTime;                                           //@synthesize endTime=_endTime - In the implementation block
@property (assign,getter=isMuted,nonatomic) BOOL muted;                                //@synthesize muted=_muted - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithFrame:(CGRect)arg1 ;
-(void)createVideoPlayerView;
-(id<LPYouTubePlayerDelegate>)delegate;
-(void)pause;
-(void)setStartTime:(double)arg1 ;
-(void)_webView:(id)arg1 navigation:(id)arg2 didFailProvisionalLoadInSubframe:(id)arg3 withError:(id)arg4 ;
-(void)seekTo:(double)arg1 ;
-(void)setShowsControls:(BOOL)arg1 ;
-(void)loadVideoWithID:(id)arg1 ;
-(void)play;
-(void)setDelegate:(id<LPYouTubePlayerDelegate>)arg1 ;
-(void)layoutSubviews;
-(void)exitFullScreen;
-(void)enterFullScreen;
-(void)setMuted:(BOOL)arg1 ;
-(void)didReceiveScriptMessage:(id)arg1 ;
-(void)dispatchErrorWithCode:(long long)arg1 ;
-(void)_evaluatePlayerCommand:(id)arg1 ;
-(id)_parameterScript;
-(void)loadVideoWithURL:(id)arg1 ;
-(void)loadVideoWithEmbedURL:(id)arg1 ;
-(BOOL)startsPlayingAutomatically;
-(BOOL)showsControls;
-(void)setStartsPlayingAutomatically:(BOOL)arg1 ;
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)webView:(id)arg1 didFailProvisionalNavigation:(id)arg2 withError:(id)arg3 ;
-(void)setEndTime:(double)arg1 ;
-(double)endTime;
-(BOOL)isMuted;
-(double)startTime;
-(void)dealloc;
-(void)webView:(id)arg1 didFailNavigation:(id)arg2 withError:(id)arg3 ;
@end

