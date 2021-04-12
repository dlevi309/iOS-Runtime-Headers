/*
* Generated on Monday, March 1, 2021 at 2:31:46 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
*/


@class _SFActivityItemProvider, WKWebView, _SFPrintActivityItemProvider;

@interface _SFActivityItemProviderCollection : NSObject {

	BOOL _displayingDigitalHealthLockoutView;
	BOOL _displayingStandaloneImage;
	BOOL _displayingStandaloneMedia;
	_SFActivityItemProvider* _standaloneImageProvider;
	_SFActivityItemProvider* _webArchiveProvider;
	WKWebView* _webView;
	_SFActivityItemProvider* _linkProvider;
	_SFPrintActivityItemProvider* _printProvider;
	_SFActivityItemProvider* _javaScriptExtensionProvider;
	_SFActivityItemProvider* _downloadProvider;

}

@property (nonatomic,readonly) WKWebView * webView;                                              //@synthesize webView=_webView - In the implementation block
@property (nonatomic,readonly) _SFActivityItemProvider * standaloneImageProvider;                //@synthesize standaloneImageProvider=_standaloneImageProvider - In the implementation block
@property (nonatomic,readonly) _SFActivityItemProvider * webArchiveProvider;                     //@synthesize webArchiveProvider=_webArchiveProvider - In the implementation block
@property (assign,nonatomic) BOOL displayingDigitalHealthLockoutView;                            //@synthesize displayingDigitalHealthLockoutView=_displayingDigitalHealthLockoutView - In the implementation block
@property (assign,nonatomic) BOOL displayingStandaloneImage;                                     //@synthesize displayingStandaloneImage=_displayingStandaloneImage - In the implementation block
@property (assign,nonatomic) BOOL displayingStandaloneMedia;                                     //@synthesize displayingStandaloneMedia=_displayingStandaloneMedia - In the implementation block
@property (nonatomic,retain) _SFActivityItemProvider * linkProvider;                             //@synthesize linkProvider=_linkProvider - In the implementation block
@property (nonatomic,retain) _SFPrintActivityItemProvider * printProvider;                       //@synthesize printProvider=_printProvider - In the implementation block
@property (nonatomic,retain) _SFActivityItemProvider * javaScriptExtensionProvider;              //@synthesize javaScriptExtensionProvider=_javaScriptExtensionProvider - In the implementation block
@property (nonatomic,retain) _SFActivityItemProvider * downloadProvider;                         //@synthesize downloadProvider=_downloadProvider - In the implementation block
-(WKWebView *)webView;
-(id)initWithWebView:(id)arg1 ;
-(BOOL)displayingStandaloneImage;
-(void)setDisplayingStandaloneImage:(BOOL)arg1 ;
-(_SFActivityItemProvider *)linkProvider;
-(_SFActivityItemProvider *)javaScriptExtensionProvider;
-(_SFActivityItemProvider *)standaloneImageProvider;
-(_SFPrintActivityItemProvider *)printProvider;
-(_SFActivityItemProvider *)downloadProvider;
-(BOOL)displayingDigitalHealthLockoutView;
-(_SFActivityItemProvider *)webArchiveProvider;
-(id)activityItemProvidersWithCustomizationController:(id)arg1 ;
-(void)setDisplayingDigitalHealthLockoutView:(BOOL)arg1 ;
-(BOOL)displayingStandaloneMedia;
-(void)setDisplayingStandaloneMedia:(BOOL)arg1 ;
-(void)setLinkProvider:(_SFActivityItemProvider *)arg1 ;
-(void)setPrintProvider:(_SFPrintActivityItemProvider *)arg1 ;
-(void)setJavaScriptExtensionProvider:(_SFActivityItemProvider *)arg1 ;
-(void)setDownloadProvider:(_SFActivityItemProvider *)arg1 ;
@end

