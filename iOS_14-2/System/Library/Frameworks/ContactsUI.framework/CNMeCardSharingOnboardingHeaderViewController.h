/*
* Generated on Thursday, January 14, 2021 at 2:20:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)viewWillLayoutSubviews;
-(unsigned long long)mode;
-(NSString *)headerTitle;
-(void)setLayoutAttributes:(CNMeCardSharingPickerLayoutAttributes *)arg1 ;
-(CNMeCardSharingPickerLayoutAttributes *)layoutAttributes;
-(void)setMode:(unsigned long long)arg1 ;
-(void)viewDidLoad;
-(UILabel *)headerLabel;
-(CNMeCardSharingOnboardingAvatarCarouselViewController *)avatarCarouselController;
-(id)initWithAvatarCarouselViewController:(id)arg1 headerTitle:(id)arg2 layoutAttributes:(id)arg3 ;
-(void)setHeaderLabel:(UILabel *)arg1 ;
-(void)setAvatarCarouselController:(CNMeCardSharingOnboardingAvatarCarouselViewController *)arg1 ;
-(void)setHeaderTitle:(NSString *)arg1 ;
@end

