/*
* Generated on Thursday, January 14, 2021 at 2:24:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
*/

#import <PassKitUI/PassKitUI-Structs.h>
#import <UIKitCore/UIView.h>

@class UILabel, UIImageView, UIColor, NSString, UIImage, CNAvatarView, NSAttributedString;

@interface PKPaymentTransactionView : UIView {

	UILabel* _primaryLabel;
	UILabel* _secondaryLabel;
	UILabel* _tertiaryLabel;
	UILabel* _rewardsAmountLabel;
	UILabel* _transactionValueLabel;
	UIImageView* _primaryImageView;
	UIImageView* _disclosureView;
	BOOL _isTemplateLayout;
	BOOL _hideRewardsBackground;
	BOOL _showsAvatarView;
	BOOL _showsDisclosureView;
	BOOL _allowPrimaryStringExpansion;
	BOOL _strokeImage;
	UIColor* _primaryColor;
	UIColor* _secondaryColor;
	NSString* _primaryString;
	NSString* _secondaryString;
	NSString* _tertiaryString;
	UIImage* _primaryImage;
	CNAvatarView* _avatarView;

}

@property (nonatomic,retain) UIColor * primaryColor;                                           //@synthesize primaryColor=_primaryColor - In the implementation block
@property (nonatomic,retain) UIColor * secondaryColor;                                         //@synthesize secondaryColor=_secondaryColor - In the implementation block
@property (nonatomic,retain) NSString * primaryString;                                         //@synthesize primaryString=_primaryString - In the implementation block
@property (nonatomic,retain) NSString * secondaryString;                                       //@synthesize secondaryString=_secondaryString - In the implementation block
@property (nonatomic,retain) NSString * tertiaryString;                                        //@synthesize tertiaryString=_tertiaryString - In the implementation block
@property (nonatomic,retain) NSAttributedString * transactionValueAttributedText; 
@property (nonatomic,retain) NSString * rewardsValueString; 
@property (assign,nonatomic) BOOL hideRewardsBackground;                                       //@synthesize hideRewardsBackground=_hideRewardsBackground - In the implementation block
@property (assign,nonatomic) BOOL showsAvatarView;                                             //@synthesize showsAvatarView=_showsAvatarView - In the implementation block
@property (assign,nonatomic) BOOL showsDisclosureView;                                         //@synthesize showsDisclosureView=_showsDisclosureView - In the implementation block
@property (assign,nonatomic) BOOL allowPrimaryStringExpansion;                                 //@synthesize allowPrimaryStringExpansion=_allowPrimaryStringExpansion - In the implementation block
@property (nonatomic,retain) UIImage * primaryImage;                                           //@synthesize primaryImage=_primaryImage - In the implementation block
@property (assign,nonatomic) BOOL strokeImage;                                                 //@synthesize strokeImage=_strokeImage - In the implementation block
@property (nonatomic,readonly) CNAvatarView * avatarView;                                      //@synthesize avatarView=_avatarView - In the implementation block
+(id)defaultTertiaryLabelFont;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)_disclosureView;
-(void)setPrimaryImage:(id)arg1 animated:(BOOL)arg2 ;
-(void)setTransactionValueAttributedText:(NSAttributedString *)arg1 ;
-(void)setShowsDisclosureView:(BOOL)arg1 ;
-(void)_dynamicUserInterfaceTraitDidChange;
-(void)setAllowPrimaryStringExpansion:(BOOL)arg1 ;
-(UIColor *)secondaryColor;
-(void)setTertiaryString:(NSString *)arg1 ;
-(void)setPrimaryColor:(UIColor *)arg1 ;
-(void)_updateImageViewDynamicColors;
-(void)setStrokeImage:(BOOL)arg1 ;
-(CNAvatarView *)avatarView;
-(BOOL)_shouldUseStackedLayout;
-(double)_defaultLayoutHeight;
-(void)_updatePrimaryLabelString;
-(void)setHideRewardsBackground:(BOOL)arg1 ;
-(NSString *)rewardsValueString;
-(NSAttributedString *)transactionValueAttributedText;
-(BOOL)shouldShowTransactionPreviewForTouchAtPoint:(CGPoint)arg1 inView:(id)arg2 ;
-(BOOL)hideRewardsBackground;
-(BOOL)showsDisclosureView;
-(BOOL)allowPrimaryStringExpansion;
-(BOOL)strokeImage;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)_updateAvatarView;
-(NSString *)primaryString;
-(void)setShowsAvatarView:(BOOL)arg1 ;
-(BOOL)showsAvatarView;
-(id)defaultPrimaryColor;
-(void)resetFonts;
-(id)defaultSecondaryColor;
-(void)createSubviews;
-(void)setPrimaryImage:(UIImage *)arg1 ;
-(UIImage *)primaryImage;
-(CGSize)_layoutWithBounds:(CGRect)arg1 ;
-(NSString *)secondaryString;
-(void)traitCollectionDidChange:(id)arg1 ;
-(UIColor *)primaryColor;
-(NSString *)tertiaryString;
-(void)setPrimaryString:(NSString *)arg1 ;
-(void)setRewardsValueString:(NSString *)arg1 ;
-(void)setSecondaryColor:(UIColor *)arg1 ;
-(void)setSecondaryString:(NSString *)arg1 ;
@end

