/*
* Generated on Monday, March 1, 2021 at 2:33:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UserNotificationsUIKit.framework/UserNotificationsUIKit
*/

#import <UserNotificationsUIKit/UserNotificationsUIKit-Structs.h>
#import <UserNotificationsUIKit/NCAttachmentViewController.h>

@class NCAudioPlayerControlsViewController;

@interface NCAudioAttachmentViewController : NCAttachmentViewController {

	NCAudioPlayerControlsViewController* _playerViewController;

}

@property (nonatomic,retain) NCAudioPlayerControlsViewController * playerViewController;              //@synthesize playerViewController=_playerViewController - In the implementation block
-(void)dealloc;
-(CGSize)contentSize;
-(void)viewDidLoad;
-(BOOL)_canShowWhileLocked;
-(NCAudioPlayerControlsViewController *)playerViewController;
-(void)setPlayerViewController:(NCAudioPlayerControlsViewController *)arg1 ;
-(unsigned long long)customContentLocation;
-(id)initWithAttachment:(id)arg1 forNotificationRequest:(id)arg2 ;
@end

