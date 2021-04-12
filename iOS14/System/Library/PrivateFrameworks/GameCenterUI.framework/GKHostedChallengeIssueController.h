/*
* Generated on Thursday, January 14, 2021 at 2:23:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
*/

#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/GKExtensionParentViewControllerProtocol.h>

@class GKChallengeIssueHostViewController, NSArray, NSString, GKChallenge;

@interface GKHostedChallengeIssueController : UIViewController <GKExtensionParentViewControllerProtocol> {

	BOOL _forcePicker;
	GKChallengeIssueHostViewController* _remoteViewController;
	NSArray* _players;
	NSString* _defaultMessage;
	GKChallenge* _challenge;
	/*^block*/id _completionHandler;
	/*^block*/id _receivedRemoteHandler;
	/*^block*/id _dismissCompletionHandler;

}

@property (nonatomic,retain) NSArray * players;                                                      //@synthesize players=_players - In the implementation block
@property (nonatomic,copy) NSString * defaultMessage;                                                //@synthesize defaultMessage=_defaultMessage - In the implementation block
@property (nonatomic,retain) GKChallenge * challenge;                                                //@synthesize challenge=_challenge - In the implementation block
@property (assign,nonatomic) BOOL forcePicker;                                                       //@synthesize forcePicker=_forcePicker - In the implementation block
@property (nonatomic,copy) id completionHandler;                                                     //@synthesize completionHandler=_completionHandler - In the implementation block
@property (nonatomic,retain) GKChallengeIssueHostViewController * remoteViewController;              //@synthesize remoteViewController=_remoteViewController - In the implementation block
@property (nonatomic,copy) id receivedRemoteHandler;                                                 //@synthesize receivedRemoteHandler=_receivedRemoteHandler - In the implementation block
@property (nonatomic,copy) id dismissCompletionHandler;                                              //@synthesize dismissCompletionHandler=_dismissCompletionHandler - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)hostedIssueControllerWithChallenge:(id)arg1 players:(id)arg2 defaultMessage:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
+(void)presentHostedIssueControllerWithChallenge:(id)arg1 players:(id)arg2 defaultMessage:(id)arg3 ;
+(id)presentationQueue;
+(BOOL)_preventsAppearanceProxyCustomization;
-(BOOL)automaticallyForwardAppearanceAndRotationMethodsToChildViewControllers;
-(GKChallengeIssueHostViewController *)remoteViewController;
-(BOOL)shouldAutomaticallyForwardRotationMethods;
-(NSArray *)players;
-(void)setCompletionHandler:(id)arg1 ;
-(id)initWithChallenge:(id)arg1 players:(id)arg2 defaultMessage:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)setForcePicker:(BOOL)arg1 ;
-(void)setReceivedRemoteHandler:(id)arg1 ;
-(id)receivedRemoteHandler;
-(void)doneWithPlayers:(id)arg1 message:(id)arg2 ;
-(id)completionHandler;
-(BOOL)shouldAutomaticallyForwardAppearanceMethods;
-(void)setChallenge:(GKChallenge *)arg1 ;
-(void)setRemoteViewController:(GKChallengeIssueHostViewController *)arg1 ;
-(void)setPlayers:(NSArray *)arg1 ;
-(void)_setupRemoteViewController;
-(void)_setupChildViewController;
-(void)extensionDidFinishWithError:(id)arg1 ;
-(NSString *)defaultMessage;
-(void)setDefaultMessage:(NSString *)arg1 ;
-(GKChallenge *)challenge;
-(id)dismissCompletionHandler;
-(void)setDismissCompletionHandler:(id)arg1 ;
-(BOOL)forcePicker;
-(void)dealloc;
@end

