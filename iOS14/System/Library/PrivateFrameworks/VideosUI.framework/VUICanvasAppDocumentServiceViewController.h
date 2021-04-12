/*
* Generated on Thursday, January 14, 2021 at 2:24:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
*/

#import <VideosUI/VUIAppDocumentServiceViewController.h>

@class VUIInAppMessagingMessageTargetHandler, _TVStackTemplateController, UIVisualEffectView;

@interface VUICanvasAppDocumentServiceViewController : VUIAppDocumentServiceViewController {

	VUIInAppMessagingMessageTargetHandler* _iamMessageTarget;
	BOOL _iamBannerEnabled;
	BOOL _navBarHidden;
	_TVStackTemplateController* _stackTemplate;
	UIVisualEffectView* _statusBarGradientView;

}

@property (assign,nonatomic,__weak) _TVStackTemplateController * stackTemplate;              //@synthesize stackTemplate=_stackTemplate - In the implementation block
@property (nonatomic,retain) UIVisualEffectView * statusBarGradientView;                     //@synthesize statusBarGradientView=_statusBarGradientView - In the implementation block
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(UIVisualEffectView *)statusBarGradientView;
-(void)viewDidLoad;
-(void)setStatusBarGradientView:(UIVisualEffectView *)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)viewDidLayoutSubviews;
-(void)dealloc;
-(void)documentDidUpdate:(id)arg1 ;
-(id)initWithDocumentServiceRequest:(id)arg1 loadImmediately:(BOOL)arg2 documentRef:(id)arg3 viewControllerIdentifier:(id)arg4 viewControllerDocumentIdentifier:(id)arg5 ;
-(void)_updateNavigationBarWithDocument:(id)arg1 ;
-(void)didCompleteDocumentCreationWithStatus:(long long)arg1 errorDictionary:(id)arg2 ;
-(void)didHostTemplateViewController:(id)arg1 usedTransitions:(BOOL)arg2 ;
-(_TVStackTemplateController *)stackTemplate;
-(void)setStackTemplate:(_TVStackTemplateController *)arg1 ;
@end

