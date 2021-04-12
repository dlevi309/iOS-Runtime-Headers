/*
* Generated on Thursday, January 14, 2021 at 2:28:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SilexWeb.framework/SilexWeb
*/

#import <UIKitCore/UIViewController.h>

@protocol SWInteractionProvider, SWErrorProvider, SWConfigurationManager, SWPresentationManager, SWScaleManager, SWSnapshotManager;
@class SWDeveloperSettings, SWViewController;

@interface SWContainerViewController : UIViewController {

	id<SWInteractionProvider> _interactionProvider;
	id<SWErrorProvider> _errorProvider;
	id<SWConfigurationManager> _configurationManager;
	id<SWPresentationManager> _presentationManager;
	SWDeveloperSettings* _developerSettings;
	id<SWScaleManager> _scaleManager;
	id<SWSnapshotManager> _snapshotManager;
	SWViewController* _webContentViewController;

}

@property (nonatomic,readonly) SWViewController * webContentViewController;                  //@synthesize webContentViewController=_webContentViewController - In the implementation block
@property (nonatomic,readonly) id<SWInteractionProvider> interactionProvider;                //@synthesize interactionProvider=_interactionProvider - In the implementation block
@property (nonatomic,readonly) id<SWErrorProvider> errorProvider;                            //@synthesize errorProvider=_errorProvider - In the implementation block
@property (nonatomic,readonly) id<SWConfigurationManager> configurationManager;              //@synthesize configurationManager=_configurationManager - In the implementation block
@property (nonatomic,readonly) id<SWPresentationManager> presentationManager;                //@synthesize presentationManager=_presentationManager - In the implementation block
@property (nonatomic,retain) SWDeveloperSettings * developerSettings;                        //@synthesize developerSettings=_developerSettings - In the implementation block
@property (nonatomic,readonly) id<SWScaleManager> scaleManager;                              //@synthesize scaleManager=_scaleManager - In the implementation block
@property (nonatomic,readonly) id<SWSnapshotManager> snapshotManager;                        //@synthesize snapshotManager=_snapshotManager - In the implementation block
-(id<SWConfigurationManager>)configurationManager;
-(id<SWSnapshotManager>)snapshotManager;
-(id)accessibilityElements;
-(id<SWPresentationManager>)presentationManager;
-(void)viewDidLoad;
-(void)loadHTMLString:(id)arg1 baseURL:(id)arg2 ;
-(void)loadURL:(id)arg1 ;
-(void)viewDidLayoutSubviews;
-(id<SWErrorProvider>)errorProvider;
-(SWDeveloperSettings *)developerSettings;
-(id<SWInteractionProvider>)interactionProvider;
-(id<SWScaleManager>)scaleManager;
-(void)setDeveloperSettings:(SWDeveloperSettings *)arg1 ;
-(SWViewController *)webContentViewController;
-(BOOL)allowUserInteractionForInteractionType:(unsigned long long)arg1 ;
-(id)initWithWebContentViewController:(id)arg1 interactionProvider:(id)arg2 errorProvider:(id)arg3 configurationManager:(id)arg4 presentationManager:(id)arg5 scaleManager:(id)arg6 snapshotManager:(id)arg7 ;
@end

