/*
* Generated on Monday, March 1, 2021 at 2:32:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
*/

#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/AVTSplashScreenViewControllerDelegate.h>
#import <libobjc.A.dylib/AVTAvatarAttributeEditorViewControllerDelegate.h>
#import <UIKit/UIAdaptivePresentationControllerDelegate.h>

@protocol AVTAvatarEditorViewControllerDelegate, AVTAvatarStoreInternal, AVTUILogger;
@class AVTAvatarRecord, AVTViewSessionProvider, AVTUIEnvironment, UIBarButtonItem, AVTSplashScreenViewController, AVTAvatarAttributeEditorViewController, NSString;

@interface AVTAvatarEditorViewController : UIViewController <AVTSplashScreenViewControllerDelegate, AVTAvatarAttributeEditorViewControllerDelegate, UIAdaptivePresentationControllerDelegate> {

	BOOL _isCreating;
	BOOL _hasChanges;
	id<AVTAvatarEditorViewControllerDelegate> _delegate;
	AVTAvatarRecord* _initialAvatarRecord;
	id<AVTAvatarStoreInternal> _store;
	AVTViewSessionProvider* _avtViewSessionProvider;
	AVTUIEnvironment* _environment;
	id<AVTUILogger> _logger;
	UIBarButtonItem* _cancelButtonItem;
	UIBarButtonItem* _doneButtonItem;
	AVTSplashScreenViewController* _splashScreenViewController;
	AVTAvatarAttributeEditorViewController* _attributeEditorViewController;

}

@property (nonatomic,retain) AVTAvatarRecord * initialAvatarRecord;                                                 //@synthesize initialAvatarRecord=_initialAvatarRecord - In the implementation block
@property (nonatomic,readonly) id<AVTAvatarStoreInternal> store;                                                    //@synthesize store=_store - In the implementation block
@property (nonatomic,readonly) AVTViewSessionProvider * avtViewSessionProvider;                                     //@synthesize avtViewSessionProvider=_avtViewSessionProvider - In the implementation block
@property (nonatomic,readonly) AVTUIEnvironment * environment;                                                      //@synthesize environment=_environment - In the implementation block
@property (nonatomic,readonly) id<AVTUILogger> logger;                                                              //@synthesize logger=_logger - In the implementation block
@property (nonatomic,readonly) BOOL isCreating;                                                                     //@synthesize isCreating=_isCreating - In the implementation block
@property (nonatomic,retain) UIBarButtonItem * cancelButtonItem;                                                    //@synthesize cancelButtonItem=_cancelButtonItem - In the implementation block
@property (nonatomic,retain) UIBarButtonItem * doneButtonItem;                                                      //@synthesize doneButtonItem=_doneButtonItem - In the implementation block
@property (assign,nonatomic) BOOL hasChanges;                                                                       //@synthesize hasChanges=_hasChanges - In the implementation block
@property (nonatomic,readonly) AVTSplashScreenViewController * splashScreenViewController;                          //@synthesize splashScreenViewController=_splashScreenViewController - In the implementation block
@property (nonatomic,readonly) AVTAvatarAttributeEditorViewController * attributeEditorViewController;              //@synthesize attributeEditorViewController=_attributeEditorViewController - In the implementation block
@property (assign,nonatomic,__weak) id<AVTAvatarEditorViewControllerDelegate> delegate;                             //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)viewControllerForCreatingAvatarInStore:(id)arg1 ;
+(id)defaultSessionProvider;
+(id)viewControllerForEditingAvatar:(id)arg1 avtViewSessionProvider:(id)arg2 store:(id)arg3 ;
+(id)viewControllerForCreatingAvatarInStore:(id)arg1 avtViewSessionProvider:(id)arg2 ;
+(BOOL)shouldShowSplashScreen;
+(id)viewControllerForEditingAvatar:(id)arg1 store:(id)arg2 ;
-(id<AVTAvatarEditorViewControllerDelegate>)delegate;
-(void)setDelegate:(id<AVTAvatarEditorViewControllerDelegate>)arg1 ;
-(AVTUIEnvironment *)environment;
-(BOOL)hasChanges;
-(id<AVTAvatarStoreInternal>)store;
-(id<AVTUILogger>)logger;
-(void)finish:(id)arg1 ;
-(void)viewDidLoad;
-(BOOL)presentationControllerShouldDismiss:(id)arg1 ;
-(void)presentationControllerDidAttemptToDismiss:(id)arg1 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(BOOL)isModalInPresentation;
-(void)cancel:(id)arg1 ;
-(void)applyLayout:(id)arg1 ;
-(void)setHasChanges:(BOOL)arg1 ;
-(UIBarButtonItem *)cancelButtonItem;
-(void)setCancelButtonItem:(UIBarButtonItem *)arg1 ;
-(void)splashScreenViewControllerDidFinish:(id)arg1 ;
-(void)setDisableAvatarSnapshotting:(BOOL)arg1 ;
-(void)prepareForAnimatedTransitionWithLayout:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(id)initWithAvatarRecord:(id)arg1 avtViewSessionProvider:(id)arg2 store:(id)arg3 enviroment:(id)arg4 isCreating:(BOOL)arg5 ;
-(void)setupInitialViewState;
-(id)appropriatePresentationController;
-(AVTAvatarAttributeEditorViewController *)attributeEditorViewController;
-(BOOL)disableAvatarSnapshotting;
-(id)visibleLayout;
-(void)loadSplashScreen;
-(AVTAvatarRecord *)initialAvatarRecord;
-(void)loadAttributeEditorViewWithAvatarRecord:(id)arg1 ;
-(AVTViewSessionProvider *)avtViewSessionProvider;
-(BOOL)isCreating;
-(void)configureNavigationItems;
-(void)setDoneButtonItem:(UIBarButtonItem *)arg1 ;
-(UIBarButtonItem *)doneButtonItem;
-(void)confirmCancel;
-(AVTSplashScreenViewController *)splashScreenViewController;
-(void)handleDiscardAttempt;
-(void)attributeEditorDidMakeFirstSelection:(id)arg1 ;
-(void)controllerPresentationWillObstructView:(id)arg1 ;
-(void)setInitialAvatarRecord:(AVTAvatarRecord *)arg1 ;
-(void)prepareForPresetsScrollTestOnCategory:(id)arg1 readyHandler:(/*^block*/id)arg2 ;
-(void)configurePPTMemoji;
@end

