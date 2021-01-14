/*
* Generated on Thursday, January 14, 2021 at 2:20:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
*/

#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/CNMeCardSharingAvatarViewControllerDelegate.h>

@protocol CNMeCardSharingSettingsHeaderViewControllerDelegate, CNMeCardSharingAvatarProvider;
@class CNMeCardSharingAvatarViewController, UIButton, UIView, NSString;

@interface CNMeCardSharingSettingsHeaderViewController : UIViewController <CNMeCardSharingAvatarViewControllerDelegate> {

	id<CNMeCardSharingSettingsHeaderViewControllerDelegate> _delegate;
	id<CNMeCardSharingAvatarProvider> _avatarProvider;
	CNMeCardSharingAvatarViewController* _avatarViewController;
	UIButton* _labelButton;
	UIView* _separatorView;

}

@property (nonatomic,retain) id<CNMeCardSharingAvatarProvider> avatarProvider;                                     //@synthesize avatarProvider=_avatarProvider - In the implementation block
@property (nonatomic,retain) CNMeCardSharingAvatarViewController * avatarViewController;                           //@synthesize avatarViewController=_avatarViewController - In the implementation block
@property (nonatomic,retain) UIButton * labelButton;                                                               //@synthesize labelButton=_labelButton - In the implementation block
@property (nonatomic,retain) UIView * separatorView;                                                               //@synthesize separatorView=_separatorView - In the implementation block
@property (assign,nonatomic,__weak) id<CNMeCardSharingSettingsHeaderViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) double separatorHeight; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(double)avatarEdgeLengthForTraitCollection:(id)arg1 ;
-(double)separatorHeight;
-(UIView *)separatorView;
-(id<CNMeCardSharingSettingsHeaderViewControllerDelegate>)delegate;
-(CNMeCardSharingAvatarViewController *)avatarViewController;
-(void)setAvatarViewController:(CNMeCardSharingAvatarViewController *)arg1 ;
-(void)setAvatarProvider:(id<CNMeCardSharingAvatarProvider>)arg1 ;
-(void)setDelegate:(id<CNMeCardSharingSettingsHeaderViewControllerDelegate>)arg1 ;
-(void)viewDidLoad;
-(void)reload;
-(id<CNMeCardSharingAvatarProvider>)avatarProvider;
-(UIButton *)labelButton;
-(void)labelButtonTapped:(id)arg1 ;
-(void)avatarViewControllerDidUpdateImage:(id)arg1 ;
-(void)avatarViewControllerWasTapped:(id)arg1 ;
-(void)setLabelButton:(UIButton *)arg1 ;
-(id)initWithAvatarProvider:(id)arg1 ;
-(double)desiredHeightForTraitCollection:(id)arg1 ;
-(void)updateWithAvatarProvider:(id)arg1 ;
-(void)updateForChangedImage;
-(void)viewDidLayoutSubviews;
-(void)setSeparatorView:(UIView *)arg1 ;
@end

