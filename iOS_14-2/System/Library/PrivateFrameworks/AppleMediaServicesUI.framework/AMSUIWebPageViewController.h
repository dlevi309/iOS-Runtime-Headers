/*
* Generated on Thursday, January 14, 2021 at 2:24:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServicesUI.framework/AppleMediaServicesUI
*/

#import <AppleMediaServicesUI/AppleMediaServicesUI-Structs.h>
#import <AppleMediaServicesUI/AMSUICommonViewController.h>
#import <libobjc.A.dylib/AMSUIWebPagePresenter.h>

@protocol AMSUIWebPageViewControllerDelegate;
@class AMSUIWebView, NSURL, AMSUIWebAppearance, AMSUIWebClientContext, AMSUIWebPageModel, NSString;

@interface AMSUIWebPageViewController : AMSUICommonViewController <AMSUIWebPagePresenter> {

	BOOL _replacing;
	id<AMSUIWebPageViewControllerDelegate> _delegate;
	AMSUIWebView* _webView;
	NSURL* _URL;
	AMSUIWebAppearance* _appearance;
	AMSUIWebClientContext* _context;
	AMSUIWebPageModel* _model;
	CGSize _contentSize;

}

@property (nonatomic,readonly) AMSUIWebAppearance * appearance;                                   //@synthesize appearance=_appearance - In the implementation block
@property (nonatomic,__weak,readonly) AMSUIWebClientContext * context;                            //@synthesize context=_context - In the implementation block
@property (assign,nonatomic) CGSize contentSize;                                                  //@synthesize contentSize=_contentSize - In the implementation block
@property (nonatomic,retain) AMSUIWebPageModel * model;                                           //@synthesize model=_model - In the implementation block
@property (assign,nonatomic) BOOL replacing;                                                      //@synthesize replacing=_replacing - In the implementation block
@property (nonatomic,retain) NSURL * URL;                                                         //@synthesize URL=_URL - In the implementation block
@property (assign,nonatomic,__weak) id<AMSUIWebPageViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) AMSUIWebView * webView;                                            //@synthesize webView=_webView - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(AMSUIWebView *)webView;
-(void)setContentSize:(CGSize)arg1 ;
-(void)viewWillLayoutSubviews;
-(AMSUIWebPageModel *)model;
-(id<AMSUIWebPageViewControllerDelegate>)delegate;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)setURL:(NSURL *)arg1 ;
-(CGSize)contentSize;
-(AMSUIWebClientContext *)context;
-(void)setDelegate:(id<AMSUIWebPageViewControllerDelegate>)arg1 ;
-(void)setModel:(AMSUIWebPageModel *)arg1 ;
-(id)loadRequest:(id)arg1 ;
-(NSURL *)URL;
-(void)loadView;
-(AMSUIWebAppearance *)appearance;
-(void)_applyAppearance;
-(void)willPresentPageModel:(id)arg1 appearance:(id)arg2 ;
-(void)_willEncodeRequest:(id)arg1 ;
-(void)_didEncodeRequest:(id)arg1 ;
-(void)_downloadHTMLForRequest:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)initWithContext:(id)arg1 dataProvider:(id)arg2 ;
-(BOOL)replacing;
-(void)setReplacing:(BOOL)arg1 ;
@end

