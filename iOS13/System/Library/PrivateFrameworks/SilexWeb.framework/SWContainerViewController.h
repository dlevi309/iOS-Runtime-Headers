/*
* Generated on Monday, March 1, 2021 at 2:35:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SilexWeb.framework/SilexWeb
*/

#import <UIKitCore/UIViewController.h>

@protocol SWInteractionProvider, SWErrorProvider, SWConfigurationManager, SWPresentationManager;
@class SWDeveloperSettings, SWViewController;

@interface SWContainerViewController : UIViewController {

	id<SWInteractionProvider> _interactionProvider;
	id<SWErrorProvider> _errorProvider;
	id<SWConfigurationManager> _configurationManager;
	id<SWPresentationManager> _presentationManager;
	SWDeveloperSettings* _developerSettings;
	SWViewController* _webContentViewController;

}

@property (nonatomic,readonly) SWViewController * webContentViewController;                  //@synthesize webContentViewController=_webContentViewController - In the implementation block
@property (nonatomic,readonly) id<SWInteractionProvider> interactionProvider;                //@synthesize interactionProvider=_interactionProvider - In the implementation block
@property (nonatomic,readonly) id<SWErrorProvider> errorProvider;                            //@synthesize errorProvider=_errorProvider - In the implementation block
@property (nonatomic,readonly) id<SWConfigurationManager> configurationManager;              //@synthesize configurationManager=_configurationManager - In the implementation block
@property (nonatomic,readonly) id<SWPresentationManager> presentationManager;                //@synthesize presentationManager=_presentationManager - In the implementation block
@property (nonatomic,retain) SWDeveloperSettings * developerSettings;                        //@synthesize developerSettings=_developerSettings - In the implementation block
-(void)viewDidLoad;
-(void)viewDidLayoutSubviews;
-(void)loadHTMLString:(id)arg1 baseURL:(id)arg2 ;
-(void)loadURL:(id)arg1 ;
-(id<SWConfigurationManager>)configurationManager;
-(SWDeveloperSettings *)developerSettings;
-(id<SWInteractionProvider>)interactionProvider;
-(id<SWPresentationManager>)presentationManager;
-(id<SWErrorProvider>)errorProvider;
-(void)setDeveloperSettings:(SWDeveloperSettings *)arg1 ;
-(SWViewController *)webContentViewController;
-(BOOL)allowUserInteractionForInteractionType:(unsigned long long)arg1 ;
-(id)initWithWebContentViewController:(id)arg1 interactionProvider:(id)arg2 errorProvider:(id)arg3 configurationManager:(id)arg4 presentationManager:(id)arg5 ;
@end

