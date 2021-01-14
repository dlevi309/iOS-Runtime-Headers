/*
* Generated on Thursday, January 14, 2021 at 2:23:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
*/

#import <UIKitCore/UINavigationController.h>

@protocol GKFriendRequestComposeViewControllerDelegate;
@class NSString, UIAlertController;

@interface GKFriendRequestComposeViewController : UINavigationController {

	unsigned _rid;
	id<GKFriendRequestComposeViewControllerDelegate> _composeViewDelegate;
	NSString* _message;
	unsigned long long _recipientCount;
	UIAlertController* _alertController;

}

@property (nonatomic,copy) NSString * message;                                                                         //@synthesize message=_message - In the implementation block
@property (assign,nonatomic) unsigned long long recipientCount;                                                        //@synthesize recipientCount=_recipientCount - In the implementation block
@property (assign,nonatomic) unsigned rid;                                                                             //@synthesize rid=_rid - In the implementation block
@property (nonatomic,retain) UIAlertController * alertController;                                                      //@synthesize alertController=_alertController - In the implementation block
@property (assign,nonatomic,__weak) id<GKFriendRequestComposeViewControllerDelegate> composeViewDelegate;              //@synthesize composeViewDelegate=_composeViewDelegate - In the implementation block
+(BOOL)_preventsAppearanceProxyCustomization;
+(unsigned long long)maxNumberOfRecipients;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)setMessage:(NSString *)arg1 ;
-(unsigned)rid;
-(NSString *)message;
-(BOOL)automaticallyForwardAppearanceAndRotationMethodsToChildViewControllers;
-(id<GKFriendRequestComposeViewControllerDelegate>)composeViewDelegate;
-(BOOL)shouldAutomaticallyForwardRotationMethods;
-(id)init;
-(void)setComposeViewDelegate:(id<GKFriendRequestComposeViewControllerDelegate>)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(unsigned long long)supportedInterfaceOrientations;
-(BOOL)shouldAutomaticallyForwardAppearanceMethods;
-(UIAlertController *)alertController;
-(void)setRid:(unsigned)arg1 ;
-(void)_setupChildViewController;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)setAlertController:(UIAlertController *)arg1 ;
-(void)setRecipientCount:(unsigned long long)arg1 ;
-(void)sendFinishedMessageToDelegateCancelled:(BOOL)arg1 ;
-(void)prepareForNewRecipients:(id)arg1 ;
-(void)_addRecipientInternals:(id)arg1 ;
-(void)addRecipientPlayers:(id)arg1 ;
-(void)addRecipientsWithPlayerIDs:(id)arg1 ;
-(void)addRecipientsWithEmailAddresses:(id)arg1 ;
-(unsigned long long)recipientCount;
@end

