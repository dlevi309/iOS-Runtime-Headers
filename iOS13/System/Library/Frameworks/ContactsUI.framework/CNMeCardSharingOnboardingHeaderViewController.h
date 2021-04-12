/*
* Generated on Monday, March 1, 2021 at 2:30:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
*/

#import <ContactsUI/ContactsUI-Structs.h>
#import <UIKitCore/UIViewController.h>

@class NSString, CNMeCardSharingOnboardingAvatarCarouselViewController, CNMeCardSharingPickerLayoutAttributes, UILabel;

@interface CNMeCardSharingOnboardingHeaderViewController : UIViewController {

	NSString* _headerTitle;
	CNMeCardSharingOnboardingAvatarCarouselViewController* _avatarCarouselController;
	unsigned long long _mode;
	CNMeCardSharingPickerLayoutAttributes* _layoutAttributes;
	UILabel* _headerLabel;

}

@property (nonatomic,retain) NSString * headerTitle;                                                                        //@synthesize headerTitle=_headerTitle - In the implementation block
@property (nonatomic,retain) CNMeCardSharingOnboardingAvatarCarouselViewController * avatarCarouselController;              //@synthesize avatarCarouselController=_avatarCarouselController - In the implementation block
@property (assign,nonatomic) unsigned long long mode;                                                                       //@synthesize mode=_mode - In the implementation block
@property (nonatomic,retain) CNMeCardSharingPickerLayoutAttributes * layoutAttributes;                                      //@synthesize layoutAttributes=_layoutAttributes - In the implementation block
@property (nonatomic,retain) UILabel * headerLabel;                                                                         //@synthesize headerLabel=_headerLabel - In the implementation block
+(double)heightForHeaderWithContainerSize:(CGSize)arg1 withTitle:(id)arg2 layoutAttributes:(id)arg3 hasAvatar:(BOOL)arg4 ;
-(void)setMode:(unsigned long long)arg1 ;
-(unsigned long long)mode;
-(void)viewDidLoad;
-(void)viewWillLayoutSubviews;
-(CNMeCardSharingPickerLayoutAttributes *)layoutAttributes;
-(void)setLayoutAttributes:(CNMeCardSharingPickerLayoutAttributes *)arg1 ;
-(NSString *)headerTitle;
-(void)setHeaderTitle:(NSString *)arg1 ;
-(void)setHeaderLabel:(UILabel *)arg1 ;
-(UILabel *)headerLabel;
-(id)initWithAvatarCarouselViewController:(id)arg1 headerTitle:(id)arg2 layoutAttributes:(id)arg3 ;
-(CNMeCardSharingOnboardingAvatarCarouselViewController *)avatarCarouselController;
-(void)setAvatarCarouselController:(CNMeCardSharingOnboardingAvatarCarouselViewController *)arg1 ;
@end

