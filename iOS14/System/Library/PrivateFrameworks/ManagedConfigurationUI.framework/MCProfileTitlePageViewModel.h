/*
* Generated on Thursday, January 14, 2021 at 2:26:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ManagedConfigurationUI.framework/ManagedConfigurationUI
*/

#import <libobjc.A.dylib/MCInteractionDelegate.h>

@protocol MCProfileTitlePageViewModelDelegate, OS_dispatch_queue;
@class UIViewController, MCProfile, NSData, NSString, NSObject, MCUIProfile;

@interface MCProfileTitlePageViewModel : NSObject <MCInteractionDelegate> {

	BOOL _isInstallingProfile;
	int _installState;
	UIViewController*<MCProfileTitlePageViewModelDelegate> _delegate;
	MCProfile* _profile;
	NSData* _profileData;
	NSString* _pin;
	NSObject*<OS_dispatch_queue> _serialQueue;
	MCUIProfile* _UIProfile;
	NSString* _personaID;
	/*^block*/id _cleanupTask;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> serialQueue;                                            //@synthesize serialQueue=_serialQueue - In the implementation block
@property (assign,nonatomic) int installState;                                                                    //@synthesize installState=_installState - In the implementation block
@property (nonatomic,retain) MCProfile * profile;                                                                 //@synthesize profile=_profile - In the implementation block
@property (nonatomic,retain) NSData * profileData;                                                                //@synthesize profileData=_profileData - In the implementation block
@property (assign,nonatomic) BOOL isInstallingProfile;                                                            //@synthesize isInstallingProfile=_isInstallingProfile - In the implementation block
@property (nonatomic,retain) MCUIProfile * UIProfile;                                                             //@synthesize UIProfile=_UIProfile - In the implementation block
@property (nonatomic,copy) NSString * pin;                                                                        //@synthesize pin=_pin - In the implementation block
@property (nonatomic,copy) NSString * personaID;                                                                  //@synthesize personaID=_personaID - In the implementation block
@property (nonatomic,copy) id cleanupTask;                                                                        //@synthesize cleanupTask=_cleanupTask - In the implementation block
@property (assign,nonatomic,__weak) UIViewController*<MCProfileTitlePageViewModelDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) NSString * accountIdentifier; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)pin;
-(void)setProfile:(MCProfile *)arg1 ;
-(int)installState;
-(void)setInstallState:(int)arg1 ;
-(void)setPersonaID:(NSString *)arg1 ;
-(void)_setup;
-(id)init;
-(NSObject*<OS_dispatch_queue>)serialQueue;
-(UIViewController*<MCProfileTitlePageViewModelDelegate>)delegate;
-(NSString *)accountIdentifier;
-(NSString *)personaID;
-(void)setPin:(NSString *)arg1 ;
-(void)profileConnection:(id)arg1 didFinishInstallationWithIdentifier:(id)arg2 error:(id)arg3 ;
-(void)setSerialQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)profileConnectionDidRequestCurrentPasscode:(id)arg1 ;
-(void)profileConnection:(id)arg1 didRequestUserInput:(id)arg2 ;
-(void)profileConnection:(id)arg1 didRequestMAIDSignIn:(id)arg2 personaID:(id)arg3 ;
-(void)profileConnection:(id)arg1 didShowUserWarnings:(id)arg2 ;
-(void)profileConnection:(id)arg1 didFinishPreflightWithError:(id)arg2 ;
-(void)setDelegate:(UIViewController*<MCProfileTitlePageViewModelDelegate>)arg1 ;
-(MCProfile *)profile;
-(void)dealloc;
-(NSData *)profileData;
-(void)setProfileData:(NSData *)arg1 ;
-(MCUIProfile *)UIProfile;
-(void)_installFinishedWithIdentifier:(id)arg1 error:(id)arg2 ;
-(BOOL)_installErrorIsUserCancelledError:(id)arg1 ;
-(void)terminateProfileInstallationFlow;
-(void)setIsInstallingProfile:(BOOL)arg1 ;
-(BOOL)isInstallingProfile;
-(id)cleanupTask;
-(void)setCleanupTask:(id)arg1 ;
-(void)_respondToUserInputRequest:(id)arg1 cancelled:(BOOL)arg2 ;
-(id)_createAuthenticationContext:(id)arg1 presentingViewController:(id)arg2 ;
-(void)_respondToMAIDAuthenticationRequestIfNeeded:(id)arg1 successful:(BOOL)arg2 error:(id)arg3 isCancelled:(BOOL)arg4 ;
-(void)_signInMAID:(id)arg1 authenticationResult:(id)arg2 personaID:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)_continueInstallAfterPresentingWarnings;
-(void)_handleMAIDSignInRequestWithAccountID:(id)arg1 personaID:(id)arg2 connection:(id)arg3 ;
-(void)_handleUserInputRequest:(id)arg1 ;
-(id)initWithProfile:(id)arg1 profileData:(id)arg2 ;
-(void)startProfileInstallationFlow;
-(void)terminateProfileInstallationFlowAndDeleteProfile;
-(void)setUIProfile:(MCUIProfile *)arg1 ;
@end

