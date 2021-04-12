/*
* Generated on Monday, March 1, 2021 at 2:31:46 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
*/

#import <SafariServices/SafariServices-Structs.h>
#import <UIKitCore/UIView.h>

@protocol SFBrowserViewDelegate;
@class UIView, _SFToolbar, _SFNavigationBar, WKWebView, _SFLinkPreviewHeader, _SFCrashBanner, SFNanoDomainContainerView;

@interface _SFBrowserView : UIView {

	BOOL _contentReadyForDisplay;
	BOOL _shouldUseScrollToTopView;
	BOOL _hasReceivedTouchEvents;
	UIView* _contentContainerView;
	_SFToolbar* _toolbar;
	_SFNavigationBar* _navigationBar;
	double _bottomBarOffset;
	double _topBarHeight;
	WKWebView* _currentWebView;
	unsigned long long _navigationBarBehavior;
	_SFLinkPreviewHeader* _previewHeader;
	UIView* _statusBarBackgroundView;
	UIView* _scrollToTopView;
	_SFCrashBanner* _crashBanner;
	double _crashBannerOffset;
	UIView* _quickLookDocumentView;
	double _minimalUITopOffset;
	id<SFBrowserViewDelegate> _delegate;
	SFNanoDomainContainerView* _nanoDomainContainerView;

}

@property (nonatomic,retain) SFNanoDomainContainerView * nanoDomainContainerView;              //@synthesize nanoDomainContainerView=_nanoDomainContainerView - In the implementation block
@property (nonatomic,readonly) UIView * contentContainerView;                                  //@synthesize contentContainerView=_contentContainerView - In the implementation block
@property (nonatomic,retain) _SFToolbar * toolbar;                                             //@synthesize toolbar=_toolbar - In the implementation block
@property (nonatomic,retain) _SFNavigationBar * navigationBar;                                 //@synthesize navigationBar=_navigationBar - In the implementation block
@property (assign,nonatomic) double bottomBarOffset;                                           //@synthesize bottomBarOffset=_bottomBarOffset - In the implementation block
@property (assign,nonatomic) double topBarHeight;                                              //@synthesize topBarHeight=_topBarHeight - In the implementation block
@property (nonatomic,__weak,readonly) WKWebView * currentWebView;                              //@synthesize currentWebView=_currentWebView - In the implementation block
@property (assign,nonatomic) unsigned long long navigationBarBehavior;                         //@synthesize navigationBarBehavior=_navigationBarBehavior - In the implementation block
@property (nonatomic,retain) _SFLinkPreviewHeader * previewHeader;                             //@synthesize previewHeader=_previewHeader - In the implementation block
@property (nonatomic,retain) UIView * statusBarBackgroundView;                                 //@synthesize statusBarBackgroundView=_statusBarBackgroundView - In the implementation block
@property (nonatomic,readonly) UIView * scrollToTopView;                                       //@synthesize scrollToTopView=_scrollToTopView - In the implementation block
@property (assign,nonatomic) BOOL shouldUseScrollToTopView;                                    //@synthesize shouldUseScrollToTopView=_shouldUseScrollToTopView - In the implementation block
@property (nonatomic,retain) _SFCrashBanner * crashBanner;                                     //@synthesize crashBanner=_crashBanner - In the implementation block
@property (assign,nonatomic) double crashBannerOffset;                                         //@synthesize crashBannerOffset=_crashBannerOffset - In the implementation block
@property (nonatomic,readonly) BOOL hasReceivedTouchEvents;                                    //@synthesize hasReceivedTouchEvents=_hasReceivedTouchEvents - In the implementation block
@property (nonatomic,retain) UIView * quickLookDocumentView;                                   //@synthesize quickLookDocumentView=_quickLookDocumentView - In the implementation block
@property (assign,nonatomic) double minimalUITopOffset;                                        //@synthesize minimalUITopOffset=_minimalUITopOffset - In the implementation block
@property (assign,nonatomic,__weak) id<SFBrowserViewDelegate> delegate;                        //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) BOOL isContentReadyForDisplay;                                  //@synthesize contentReadyForDisplay=_contentReadyForDisplay - In the implementation block
-(id<SFBrowserViewDelegate>)delegate;
-(void)setDelegate:(id<SFBrowserViewDelegate>)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)layoutSubviews;
-(_SFNavigationBar *)navigationBar;
-(void)setNavigationBar:(_SFNavigationBar *)arg1 ;
-(_SFToolbar *)toolbar;
-(void)setToolbar:(_SFToolbar *)arg1 ;
-(UIView *)contentContainerView;
-(_SFLinkPreviewHeader *)previewHeader;
-(void)setContentReadyForDisplay;
-(void)setPreviewHeader:(_SFLinkPreviewHeader *)arg1 ;
-(void)setStatusBarBackgroundView:(UIView *)arg1 ;
-(void)updateDismissButtonStyle:(long long)arg1 ;
-(void)setBottomBarOffset:(double)arg1 ;
-(void)setTopBarHeight:(double)arg1 ;
-(void)addWebView:(id)arg1 ;
-(void)updatePreviewHeader;
-(void)setShouldUseScrollToTopView:(BOOL)arg1 ;
-(void)setCrashBanner:(_SFCrashBanner *)arg1 ;
-(void)setCrashBannerOffset:(double)arg1 ;
-(void)setQuickLookDocumentView:(UIView *)arg1 ;
-(void)setMinimalUITopOffset:(double)arg1 ;
-(void)setNanoDomainContainerView:(SFNanoDomainContainerView *)arg1 ;
-(BOOL)isContentReadyForDisplay;
-(double)bottomBarOffset;
-(double)topBarHeight;
-(WKWebView *)currentWebView;
-(unsigned long long)navigationBarBehavior;
-(void)setNavigationBarBehavior:(unsigned long long)arg1 ;
-(UIView *)statusBarBackgroundView;
-(UIView *)scrollToTopView;
-(BOOL)shouldUseScrollToTopView;
-(_SFCrashBanner *)crashBanner;
-(double)crashBannerOffset;
-(BOOL)hasReceivedTouchEvents;
-(UIView *)quickLookDocumentView;
-(double)minimalUITopOffset;
-(SFNanoDomainContainerView *)nanoDomainContainerView;
@end

