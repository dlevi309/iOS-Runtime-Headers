/*
* Generated on Thursday, January 14, 2021 at 2:24:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
*/

#import <VideosUI/VideosUI-Structs.h>
#import <UIKitCore/UINavigationController.h>
#import <VideosUI/VideosExtrasLoadingViewDelegate.h>
#import <libobjc.A.dylib/IKAppNavigationController.h>

@class VideosExtrasLoadingView, UIViewController, VideosExtrasContext, VideosExtrasMainTemplateViewController, NSString;

@interface VideosExtrasNavigationController : UINavigationController <VideosExtrasLoadingViewDelegate, IKAppNavigationController> {

	VideosExtrasLoadingView* _loadingView;
	UIViewController* _emptyViewController;
	VideosExtrasContext* _context;
	BOOL _clearStackOnPush;
	BOOL _showsBuiltInNavControls;

}

@property (nonatomic,__weak,readonly) VideosExtrasContext * context;                                   //@synthesize context=_context - In the implementation block
@property (readonly) VideosExtrasMainTemplateViewController * mainTemplateViewController; 
@property (assign,nonatomic) BOOL showsBuiltInNavControls;                                             //@synthesize showsBuiltInNavControls=_showsBuiltInNavControls - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithContext:(id)arg1 ;
-(VideosExtrasContext *)context;
-(id)documents;
-(void)viewDidLoad;
-(void)pushViewController:(id)arg1 animated:(BOOL)arg2 ;
-(id)childViewControllerForHomeIndicatorAutoHidden;
-(void)willShowViewController:(id)arg1 animated:(BOOL)arg2 ;
-(void)removeDocument:(id)arg1 ;
-(void)setViewControllers:(id)arg1 animated:(BOOL)arg2 ;
-(void)_dismissViewController:(id)arg1 ;
-(VideosExtrasMainTemplateViewController *)mainTemplateViewController;
-(void)loadingView:(id)arg1 documentDidUpdate:(id)arg2 options:(id)arg3 ;
-(void)setClearsStackOnNextPush;
-(void)setShowsBuiltInNavControls:(BOOL)arg1 ;
-(void)_installDoneButtonOnNavigationItem:(id)arg1 ;
-(void)_presentDialogTemplate:(id)arg1 ;
-(void)popToDocument:(id)arg1 ;
-(id)_viewControllerForDocument:(id)arg1 index:(long long*)arg2 ;
-(void)pushDocument:(id)arg1 options:(id)arg2 ;
-(void)_installBackButtonOnNavigationItem:(id)arg1 withTitle:(id)arg2 ;
-(void)_popViewControllerFromBackButton;
-(void)insertDocument:(id)arg1 beforeDocument:(id)arg2 options:(id)arg3 ;
-(void)replaceDocument:(id)arg1 withDocument:(id)arg2 options:(id)arg3 ;
-(void)popDocument;
-(void)popToRootDocument;
-(void)applyMainTemplateOffset:(CGPoint)arg1 animated:(BOOL)arg2 ;
-(void)finalizeMainTemplateOffset:(BOOL)arg1 ;
-(BOOL)showsBuiltInNavControls;
@end

