/*
* Generated on Thursday, January 14, 2021 at 2:28:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WorkflowUICore.framework/WorkflowUICore
*/

#import <libobjc.A.dylib/WFIntentViewControllerDelegate.h>
#import <libobjc.A.dylib/WFUIKitUserInterface.h>
#import <libobjc.A.dylib/WFUIKitUserInterfaceImpl.h>

@protocol WFRemoteUserInterface;
@class UIViewController, UIView, WFAlert, WFIntentPlatterViewController, NSString;

@interface WFConcreteUIKitUserInterface : NSObject <WFIntentViewControllerDelegate, WFUIKitUserInterface, WFUIKitUserInterfaceImpl> {

	UIView* _view;
	UIViewController* _viewController;
	WFAlert* _presentedAlert;
	WFIntentPlatterViewController* _intentViewController;
	/*^block*/id _confirmationCompletionHandler;
	/*^block*/id _handleCompletionHandler;
	id<WFRemoteUserInterface> _actionUserInterface;

}

@property (assign,nonatomic,__weak) WFAlert * presentedAlert;                                          //@synthesize presentedAlert=_presentedAlert - In the implementation block
@property (assign,nonatomic,__weak) WFIntentPlatterViewController * intentViewController;              //@synthesize intentViewController=_intentViewController - In the implementation block
@property (nonatomic,copy) id confirmationCompletionHandler;                                           //@synthesize confirmationCompletionHandler=_confirmationCompletionHandler - In the implementation block
@property (nonatomic,copy) id handleCompletionHandler;                                                 //@synthesize handleCompletionHandler=_handleCompletionHandler - In the implementation block
@property (nonatomic,retain) id<WFRemoteUserInterface> actionUserInterface;                            //@synthesize actionUserInterface=_actionUserInterface - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) UIViewController * viewController;                                      //@synthesize viewController=_viewController - In the implementation block
@property (nonatomic,readonly) UIView * view;                                                          //@synthesize view=_view - In the implementation block
@property (nonatomic,readonly) NSString * userInterfaceType; 
-(void)dismissPresentedContentWithCompletionHandler:(/*^block*/id)arg1 ;
-(UIView *)view;
-(UIViewController *)viewController;
-(void)presentAlert:(id)arg1 ;
-(NSString *)userInterfaceType;
-(void)showHandleInteraction:(id)arg1 prompt:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)requestActionInterfacePresentationForActionClassName:(id)arg1 classNamesByType:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id<WFRemoteUserInterface>)actionUserInterface;
-(void)setActionUserInterface:(id<WFRemoteUserInterface>)arg1 ;
-(id)initWithView:(id)arg1 viewController:(id)arg2 ;
-(WFAlert *)presentedAlert;
-(void)setPresentedAlert:(WFAlert *)arg1 ;
-(void)intentViewControllerWasTapped:(id)arg1 ;
-(void)intentViewControllerDidConfirmIntent:(id)arg1 ;
-(void)intentViewControllerDidDismissPlatter:(id)arg1 ;
-(void)showConfirmInteraction:(id)arg1 requireAuthentication:(BOOL)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)showPlatterWithInteraction:(id)arg1 requiresConfirmation:(BOOL)arg2 ;
-(WFIntentPlatterViewController *)intentViewController;
-(void)setIntentViewController:(WFIntentPlatterViewController *)arg1 ;
-(id)confirmationCompletionHandler;
-(void)setConfirmationCompletionHandler:(id)arg1 ;
-(id)handleCompletionHandler;
-(void)setHandleCompletionHandler:(id)arg1 ;
@end

