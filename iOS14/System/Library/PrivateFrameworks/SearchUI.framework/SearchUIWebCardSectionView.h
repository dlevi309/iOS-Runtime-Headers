/*
* Generated on Thursday, January 14, 2021 at 2:24:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI
*/

#import <SearchUI/SearchUI-Structs.h>
#import <SearchUI/SearchUICardSectionView.h>
#import <libobjc.A.dylib/NUIContainerViewDelegate.h>
#import <libobjc.A.dylib/WKNavigationDelegate.h>
#import <libobjc.A.dylib/WKScriptMessageHandler.h>

@class WKWebView, NUIContainerBoxView, NSString;

@interface SearchUIWebCardSectionView : SearchUICardSectionView <NUIContainerViewDelegate, WKNavigationDelegate, WKScriptMessageHandler> {

	double _contentHeight;
	WKWebView* _webView;

}

@property (nonatomic,retain) NUIContainerBoxView * contentView; 
@property (assign,nonatomic) double contentHeight;                           //@synthesize contentHeight=_contentHeight - In the implementation block
@property (nonatomic,retain) WKWebView * webView;                            //@synthesize webView=_webView - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(WKWebView *)webView;
-(void)tlk_updateForAppearance:(id)arg1 ;
-(void)setContentHeight:(double)arg1 ;
-(CGSize)containerView:(id)arg1 systemLayoutSizeFittingSize:(CGSize)arg2 forArrangedSubview:(id)arg3 ;
-(void)userContentController:(id)arg1 didReceiveScriptMessage:(id)arg2 ;
-(id)replaceSemanticColor:(id)arg1 withColor:(id)arg2 inString:(id)arg3 ;
-(id)initWithRowModel:(id)arg1 feedbackDelegate:(id)arg2 ;
-(void)webView:(id)arg1 didFinishNavigation:(id)arg2 ;
-(id)setupContentView;
-(void)setWebView:(WKWebView *)arg1 ;
-(double)contentHeight;
@end

