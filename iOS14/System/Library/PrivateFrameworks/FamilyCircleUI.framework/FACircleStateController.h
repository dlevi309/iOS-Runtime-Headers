/*
* Generated on Thursday, January 14, 2021 at 2:25:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/FamilyCircleUI.framework/FamilyCircleUI
*/

#import <libobjc.A.dylib/FARemoteViewControllerDelegate.h>
#import <libobjc.A.dylib/FACirclePresenterDelegate.h>

@class FARequestConfigurator, UIViewController, RUIStyle, NSString;

@interface FACircleStateController : NSObject <FARemoteViewControllerDelegate, FACirclePresenterDelegate> {

	FARequestConfigurator* _requestConfigurator;
	/*^block*/id _performOperationCompletion;
	UIViewController* _presenter;
	/*^block*/id _presentationHandler;
	RUIStyle* _customRUIStyle;
	long long _modalPresentationStyle;

}

@property (assign,nonatomic,__weak) UIViewController * presenter;              //@synthesize presenter=_presenter - In the implementation block
@property (nonatomic,copy) id presentationHandler;                             //@synthesize presentationHandler=_presentationHandler - In the implementation block
@property (nonatomic,retain) RUIStyle * customRUIStyle;                        //@synthesize customRUIStyle=_customRUIStyle - In the implementation block
@property (assign,nonatomic) long long modalPresentationStyle;                 //@synthesize modalPresentationStyle=_modalPresentationStyle - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setPresenter:(UIViewController *)arg1 ;
-(id)init;
-(void)performWithContext:(id)arg1 completion:(/*^block*/id)arg2 ;
-(long long)modalPresentationStyle;
-(UIViewController *)presenter;
-(void)setModalPresentationStyle:(long long)arg1 ;
-(void)setPresentationHandler:(id)arg1 ;
-(id)presentationHandler;
-(id)initWithPresenter:(id)arg1 ;
-(void)dealloc;
-(void)performOperationWithContext:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_performOperationWithContext:(id)arg1 viewController:(id)arg2 completion:(/*^block*/id)arg3 ;
-(BOOL)_contextRequiresRemoteService:(id)arg1 ;
-(BOOL)_processRequiresSpringBoardServices;
-(void)_presentFlowUsingSpringBoardWithContext:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_presentViewServiceWithContext:(id)arg1 viewController:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)_ensurePresenterWithCompletion:(/*^block*/id)arg1 ;
-(id)_whitelistedInProcessClients;
-(void)setCustomRUIStyle:(RUIStyle *)arg1 ;
-(void)remoteViewControllerDidStartFlow:(id)arg1 ;
-(void)circlePresenterDidPresent:(id)arg1 ;
-(RUIStyle *)customRUIStyle;
@end

