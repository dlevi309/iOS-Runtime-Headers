/*
* Generated on Thursday, January 14, 2021 at 2:28:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ScreenTimeSettingsUI.framework/ScreenTimeSettingsUI
*/


@class NSString, STIntroductionModel, UINavigationController, UIViewController;

@interface STIntroductionController : NSObject {

	BOOL _allowParentalControls;
	BOOL _forceParentalControls;
	BOOL _askForRecoveryAppleID;
	BOOL _childOrNotSignedIntoiCloud;
	BOOL _skipWelcome;
	BOOL _isModalPresentation;
	NSString* _childName;
	NSString* _altDSID;
	/*^block*/id _completionBlock;
	STIntroductionModel* _introductionModel;
	UINavigationController* _navigationController;

}

@property (readonly) STIntroductionModel * introductionModel;                                 //@synthesize introductionModel=_introductionModel - In the implementation block
@property (assign,nonatomic) BOOL isModalPresentation;                                        //@synthesize isModalPresentation=_isModalPresentation - In the implementation block
@property (retain) UINavigationController * navigationController;                             //@synthesize navigationController=_navigationController - In the implementation block
@property (assign) BOOL allowParentalControls;                                                //@synthesize allowParentalControls=_allowParentalControls - In the implementation block
@property (assign) BOOL forceParentalControls;                                                //@synthesize forceParentalControls=_forceParentalControls - In the implementation block
@property (assign) BOOL askForRecoveryAppleID;                                                //@synthesize askForRecoveryAppleID=_askForRecoveryAppleID - In the implementation block
@property (getter=isChildOrNotSignedIntoiCloud) BOOL childOrNotSignedIntoiCloud;              //@synthesize childOrNotSignedIntoiCloud=_childOrNotSignedIntoiCloud - In the implementation block
@property (copy) NSString * childName;                                                        //@synthesize childName=_childName - In the implementation block
@property (copy) NSString * altDSID;                                                          //@synthesize altDSID=_altDSID - In the implementation block
@property (assign) BOOL skipWelcome;                                                          //@synthesize skipWelcome=_skipWelcome - In the implementation block
@property (copy) id completionBlock;                                                          //@synthesize completionBlock=_completionBlock - In the implementation block
@property (readonly) UIViewController * initialViewController; 
-(id)completionBlock;
-(void)setCompletionBlock:(id)arg1 ;
-(id)init;
-(UIViewController *)initialViewController;
-(void)setNavigationController:(UINavigationController *)arg1 ;
-(NSString *)altDSID;
-(void)setAltDSID:(NSString *)arg1 ;
-(void)_cancel:(id)arg1 ;
-(BOOL)forceParentalControls;
-(UINavigationController *)navigationController;
-(NSString *)childName;
-(void)setChildName:(NSString *)arg1 ;
-(void)presentOverViewController:(id)arg1 ;
-(void)setForceParentalControls:(BOOL)arg1 ;
-(void)setSkipWelcome:(BOOL)arg1 ;
-(void)setAllowParentalControls:(BOOL)arg1 ;
-(void)setAskForRecoveryAppleID:(BOOL)arg1 ;
-(void)setChildOrNotSignedIntoiCloud:(BOOL)arg1 ;
-(void)setIsModalPresentation:(BOOL)arg1 ;
-(id)_viewControllerFollowingViewController:(id)arg1 ;
-(BOOL)isModalPresentation;
-(STIntroductionModel *)introductionModel;
-(void)_viewControllerCompleted:(id)arg1 ;
-(BOOL)skipWelcome;
-(BOOL)allowParentalControls;
-(BOOL)askForRecoveryAppleID;
-(BOOL)isChildOrNotSignedIntoiCloud;
@end

