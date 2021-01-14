/*
* Generated on Thursday, January 14, 2021 at 2:23:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
*/

#import <GameCenterUI/GKHostedViewController.h>

@protocol GKFriendRequestViewControllerDelegate;
@class NSObject, NSString, NSArray, UIViewController;

@interface GKFriendRequestViewController : GKHostedViewController {

	NSObject*<GKFriendRequestViewControllerDelegate> _delegate;
	NSString* _friendCode;
	NSString* _friendSupportPageURL;
	NSArray* _recipients;
	UIViewController* _requestingViewController;

}

@property (assign,nonatomic,__weak) UIViewController * requestingViewController;                            //@synthesize requestingViewController=_requestingViewController - In the implementation block
@property (assign,nonatomic,__weak) NSObject*<GKFriendRequestViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) NSString * friendCode;                                                         //@synthesize friendCode=_friendCode - In the implementation block
@property (nonatomic,retain) NSString * friendSupportPageURL;                                               //@synthesize friendSupportPageURL=_friendSupportPageURL - In the implementation block
@property (nonatomic,retain) NSArray * recipients;                                                          //@synthesize recipients=_recipients - In the implementation block
+(void)presentAlertControllerOn:(id)arg1 withMessage:(id)arg2 andTitle:(id)arg3 ;
+(void)addFriends:(id)arg1 ;
+(void)presentFriendRequestOn:(id)arg1 withFriendCode:(id)arg2 andFriendSupportPageURL:(id)arg3 ;
-(NSArray *)recipients;
-(id)serviceSideViewControllerClassName;
-(void)setRequestingViewController:(UIViewController *)arg1 ;
-(UIViewController *)requestingViewController;
-(id)init;
-(void)setRecipients:(NSArray *)arg1 ;
-(NSObject*<GKFriendRequestViewControllerDelegate>)delegate;
-(NSString *)friendCode;
-(NSString *)friendSupportPageURL;
-(id)_presentingViewController;
-(void)setDelegate:(NSObject*<GKFriendRequestViewControllerDelegate>)arg1 ;
-(void)setFriendCode:(NSString *)arg1 ;
-(void)notifyDelegateOnWillFinish;
-(void)setFriendSupportPageURL:(NSString *)arg1 ;
@end

