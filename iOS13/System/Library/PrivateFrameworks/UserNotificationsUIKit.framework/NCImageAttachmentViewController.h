/*
* Generated on Monday, March 1, 2021 at 2:33:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UserNotificationsUIKit.framework/UserNotificationsUIKit
*/

#import <UserNotificationsUIKit/UserNotificationsUIKit-Structs.h>
#import <UserNotificationsUIKit/NCAttachmentViewController.h>

@class UIView, ISAnimatedImagePlayer;

@interface NCImageAttachmentViewController : NCAttachmentViewController {

	UIView* _imageView;
	ISAnimatedImagePlayer* _animatedImagePlayer;
	CGSize _contentSize;
	CGSize _imageSize;

}

@property (assign,nonatomic) CGSize imageSize;                                         //@synthesize imageSize=_imageSize - In the implementation block
@property (nonatomic,retain) UIView * imageView;                                       //@synthesize imageView=_imageView - In the implementation block
@property (nonatomic,retain) ISAnimatedImagePlayer * animatedImagePlayer;              //@synthesize animatedImagePlayer=_animatedImagePlayer - In the implementation block
-(void)dealloc;
-(CGSize)contentSize;
-(void)loadView;
-(UIView *)imageView;
-(void)viewWillAppear:(BOOL)arg1 ;
-(BOOL)_canShowWhileLocked;
-(CGSize)imageSize;
-(void)setImageView:(UIView *)arg1 ;
-(void)setImageSize:(CGSize)arg1 ;
-(ISAnimatedImagePlayer *)animatedImagePlayer;
-(id)initWithAttachment:(id)arg1 forNotificationRequest:(id)arg2 ;
-(void)setAnimatedImagePlayer:(ISAnimatedImagePlayer *)arg1 ;
@end

