/*
* Generated on Monday, March 1, 2021 at 2:34:38 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServicesUI.framework/AppleMediaServicesUI
*/

#import <AppleMediaServicesUI/AppleMediaServicesUI-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/AMSUIWebPagePresenter.h>

@class AMSUIWebView, NSURL, AMSUIWebClientContext, AMSUIWebBrowserPageModel, NSString;

@interface AMSUIWebPageViewController : UIViewController <AMSUIWebPagePresenter> {

	BOOL _replacing;
	AMSUIWebView* _webView;
	NSURL* _URL;
	AMSUIWebClientContext* _context;
	AMSUIWebBrowserPageModel* _model;
	CGSize _contentSize;

}

@property (nonatomic,readonly) AMSUIWebClientContext * context;              //@synthesize context=_context - In the implementation block
@property (assign,nonatomic) CGSize contentSize;                             //@synthesize contentSize=_contentSize - In the implementation block
@property (nonatomic,retain) AMSUIWebBrowserPageModel * model;               //@synthesize model=_model - In the implementation block
@property (assign,nonatomic) BOOL replacing;                                 //@synthesize replacing=_replacing - In the implementation block
@property (nonatomic,retain) NSURL * URL;                                    //@synthesize URL=_URL - In the implementation block
@property (nonatomic,readonly) AMSUIWebView * webView;                       //@synthesize webView=_webView - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setURL:(NSURL *)arg1 ;
-(AMSUIWebClientContext *)context;
-(NSURL *)URL;
-(AMSUIWebBrowserPageModel *)model;
-(void)setModel:(AMSUIWebBrowserPageModel *)arg1 ;
-(CGSize)contentSize;
-(void)setContentSize:(CGSize)arg1 ;
-(void)loadView;
-(AMSUIWebView *)webView;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewWillLayoutSubviews;
-(id)loadRequest:(id)arg1 ;
-(void)_applyAppearance;
-(void)applyPageModel:(id)arg1 ;
-(id)_downloadHTMLForRequest:(id)arg1 ;
-(id)initWithContext:(id)arg1 dataProvider:(id)arg2 ;
-(BOOL)replacing;
-(void)setReplacing:(BOOL)arg1 ;
@end

