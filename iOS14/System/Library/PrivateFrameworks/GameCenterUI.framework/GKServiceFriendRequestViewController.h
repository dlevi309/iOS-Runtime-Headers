/*
* Generated on Thursday, January 14, 2021 at 2:23:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
*/

#import <GameCenterUI/GKServiceViewController.h>
#import <libobjc.A.dylib/MFMessageComposeViewControllerInternalDelegate.h>

@class MFMessageComposeViewController, NSString, NSArray;

@interface GKServiceFriendRequestViewController : GKServiceViewController <MFMessageComposeViewControllerInternalDelegate> {

	BOOL _messageComposeSent;
	MFMessageComposeViewController* _composeController;
	NSString* _friendCode;
	NSString* _friendSupportPageURL;
	NSArray* _recipients;

}

@property (nonatomic,retain) MFMessageComposeViewController * composeController;              //@synthesize composeController=_composeController - In the implementation block
@property (nonatomic,retain) NSString * friendCode;                                           //@synthesize friendCode=_friendCode - In the implementation block
@property (nonatomic,retain) NSString * friendSupportPageURL;                                 //@synthesize friendSupportPageURL=_friendSupportPageURL - In the implementation block
@property (nonatomic,retain) NSArray * recipients;                                            //@synthesize recipients=_recipients - In the implementation block
@property (assign,nonatomic) BOOL messageComposeSent;                                         //@synthesize messageComposeSent=_messageComposeSent - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSArray *)recipients;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)messageComposeViewController:(id)arg1 shouldSendMessage:(id)arg2 toRecipients:(id)arg3 completion:(/*^block*/id)arg4 ;
-(BOOL)_useBackdropViewForWindowBackground;
-(BOOL)shouldAnimatePresentationForPrivateViewController:(id)arg1 ;
-(id)init;
-(void)setRecipients:(NSArray *)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(NSString *)friendCode;
-(NSString *)friendSupportPageURL;
-(void)setInitialState:(id)arg1 withReply:(/*^block*/id)arg2 ;
-(MFMessageComposeViewController *)composeController;
-(void)setComposeController:(MFMessageComposeViewController *)arg1 ;
-(void)messageComposeViewController:(id)arg1 didFinishWithResult:(long long)arg2 ;
-(void)setFriendCode:(NSString *)arg1 ;
-(void)setFriendSupportPageURL:(NSString *)arg1 ;
-(void)setMessageComposeSent:(BOOL)arg1 ;
-(void)constructPrivateViewController;
-(BOOL)messageComposeSent;
-(void)displayAlertWithTitle:(id)arg1 andMessage:(id)arg2 ;
@end

