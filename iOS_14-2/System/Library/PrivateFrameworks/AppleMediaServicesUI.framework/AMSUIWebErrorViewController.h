/*
* Generated on Thursday, January 14, 2021 at 2:24:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServicesUI.framework/AppleMediaServicesUI
*/

#import <AppleMediaServicesUI/AMSUICommonViewController.h>
#import <libobjc.A.dylib/AMSUIWebPagePresenter.h>

@class AMSUIWebAppearance, AMSUIWebClientContext, AMSUIErrorView, AMSUIWebErrorPageModel, NSString;

@interface AMSUIWebErrorViewController : AMSUICommonViewController <AMSUIWebPagePresenter> {

	BOOL _showingCancelButton;
	AMSUIWebAppearance* _appearance;
	AMSUIWebClientContext* _context;
	AMSUIErrorView* _errorView;
	AMSUIWebErrorPageModel* _model;

}

@property (nonatomic,retain) AMSUIWebAppearance * appearance;              //@synthesize appearance=_appearance - In the implementation block
@property (nonatomic,retain) AMSUIWebClientContext * context;              //@synthesize context=_context - In the implementation block
@property (nonatomic,retain) AMSUIErrorView * errorView;                   //@synthesize errorView=_errorView - In the implementation block
@property (nonatomic,retain) AMSUIWebErrorPageModel * model;               //@synthesize model=_model - In the implementation block
@property (assign,nonatomic) BOOL showingCancelButton;                     //@synthesize showingCancelButton=_showingCancelButton - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)viewWillLayoutSubviews;
-(AMSUIWebErrorPageModel *)model;
-(void)viewWillAppear:(BOOL)arg1 ;
-(id)initWithContext:(id)arg1 ;
-(void)setAppearance:(AMSUIWebAppearance *)arg1 ;
-(AMSUIWebClientContext *)context;
-(void)setModel:(AMSUIWebErrorPageModel *)arg1 ;
-(AMSUIErrorView *)errorView;
-(void)loadView;
-(AMSUIWebAppearance *)appearance;
-(void)setContext:(AMSUIWebClientContext *)arg1 ;
-(void)setErrorView:(AMSUIErrorView *)arg1 ;
-(void)_applyAppearance;
-(void)willPresentPageModel:(id)arg1 appearance:(id)arg2 ;
-(void)_showCancelButtonIfNeeded;
-(BOOL)showingCancelButton;
-(void)setShowingCancelButton:(BOOL)arg1 ;
@end

