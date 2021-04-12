/*
* Generated on Monday, March 1, 2021 at 2:32:36 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
@property (nonatomic,retain) UIImage * primaryImage;                                           //@synthesize primaryImage=_primaryImage - In the implementation block
@property (assign,nonatomic) BOOL strokeImage;                                                 //@synthesize strokeImage=_strokeImage - In the implementation block
@property (nonatomic,readonly) CNAvatarView * avatarView;                                      //@synthesize avatarView=_avatarView - In the implementation block
+(id)defaultTertiaryLabelFont;
-(void)setPrimaryImage:(UIImage *)arg1 ;
-(UIImage *)primaryImage;
-(NSString *)primaryString;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)layoutSubviews;
-(void)_dynamicUserInterfaceTraitDidChange;
-(void)setPrimaryColor:(UIColor *)arg1 ;
-(void)setSecondaryColor:(UIColor *)arg1 ;
-(UIColor *)primaryColor;
-(UIColor *)secondaryColor;
-(id)_disclosureView;
-(CNAvatarView *)avatarView;
-(void)_updateAvatarView;
-(void)setStrokeImage:(BOOL)arg1 ;
-(BOOL)strokeImage;
-(void)setPrimaryString:(NSString *)arg1 ;
-(void)setTertiaryString:(NSString *)arg1 ;
-(void)setSecondaryString:(NSString *)arg1 ;
-(void)setPrimaryImage:(id)arg1 animated:(BOOL)arg2 ;
-(void)setTransactionValueAttributedText:(NSAttributedString *)arg1 ;
-(void)setShowsDisclosureView:(BOOL)arg1 ;
-(CGSize)_layoutWithBounds:(CGRect)arg1 ;
-(void)resetFonts;
-(void)setRewardsValueString:(NSString *)arg1 ;
-(void)setShowsAvatarView:(BOOL)arg1 ;
-(id)defaultPrimaryColor;
-(id)defaultSecondaryColor;
-(NSString *)secondaryString;
-(NSString *)tertiaryString;
-(void)_updateImageViewDynamicColors;
-(void)createSubviews;
-(BOOL)_shouldUseStackedLayout;
-(double)_defaultLayoutHeight;
-(void)setHideRewardsBackground:(BOOL)arg1 ;
-(NSString *)rewardsValueString;
-(NSAttributedString *)transactionValueAttributedText;
-(BOOL)shouldShowTransactionPreviewForTouchAtPoint:(CGPoint)arg1 inView:(id)arg2 ;
-(BOOL)hideRewardsBackground;
-(BOOL)showsAvatarView;
-(BOOL)showsDisclosureView;
@end

