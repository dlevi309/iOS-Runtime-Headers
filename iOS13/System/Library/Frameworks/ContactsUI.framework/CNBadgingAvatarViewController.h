/*
* Generated on Monday, March 1, 2021 at 2:30:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
*/

#import <libobjc.A.dylib/CNUIObjectViewControllerDelegate.h>
#import <libobjc.A.dylib/CNUIObjectViewController.h>

@protocol CNUIObjectViewControllerDelegate;
@class UIView, CNAvatarViewController, UIImageView, NSArray, UIImage, NSString;

@interface CNBadgingAvatarViewController : NSObject <CNUIObjectViewControllerDelegate, CNUIObjectViewController> {

	id<CNUIObjectViewControllerDelegate> objectViewControllerDelegate;
	CNAvatarViewController* _avatarViewController;
	UIView* _containerView;
	UIImageView* _badgeImageView;

}

@property (nonatomic,retain) CNAvatarViewController * avatarViewController;                                         //@synthesize avatarViewController=_avatarViewController - In the implementation block
@property (nonatomic,retain) UIView * containerView;                                                                //@synthesize containerView=_containerView - In the implementation block
@property (nonatomic,retain) UIImageView * badgeImageView;                                                          //@synthesize badgeImageView=_badgeImageView - In the implementation block
@property (nonatomic,copy) NSArray * contacts; 
@property (nonatomic,retain) UIImage * badgeImage; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) UIView * view; 
@property (assign,nonatomic,__weak) id<CNUIObjectViewControllerDelegate> objectViewControllerDelegate; 
-(id)init;
-(id)initWithSettings:(id)arg1 ;
-(NSArray *)contacts;
-(UIView *)view;
-(UIView *)containerView;
-(void)setContainerView:(UIView *)arg1 ;
-(id)descriptorForRequiredKeys;
-(void)setContacts:(NSArray *)arg1 ;
-(CNAvatarViewController *)avatarViewController;
-(void)setAvatarViewController:(CNAvatarViewController *)arg1 ;
-(id)hostingViewControllerForController:(id)arg1 ;
-(id<CNUIObjectViewControllerDelegate>)objectViewControllerDelegate;
-(void)setObjectViewControllerDelegate:(id<CNUIObjectViewControllerDelegate>)arg1 ;
-(void)setupContainerViewIfNeeded;
-(void)setBadgeImage:(UIImage *)arg1 ;
-(UIImage *)badgeImage;
-(UIImageView *)badgeImageView;
-(void)setBadgeImageView:(UIImageView *)arg1 ;
@end

