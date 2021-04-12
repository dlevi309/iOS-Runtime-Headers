/*
* Generated on Thursday, January 14, 2021 at 2:25:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
*/

#import <iTunesStoreUI/iTunesStoreUI-Structs.h>
#import <UIKitCore/UIButton.h>

@class NSString;

@interface SUItemOfferButton : UIButton {

	long long _animationHorizontalAlignment;
	NSString* _buttonStyle;
	NSString* _confirmationTitle;
	BOOL _isShowingConfirmation;
	NSString* _offerTitle;
	BOOL _shouldShowConfirmation;

}

@property (assign,nonatomic) long long animationHorizontalAlignment;                             //@synthesize animationHorizontalAlignment=_animationHorizontalAlignment - In the implementation block
@property (nonatomic,copy) NSString * confirmationTitle;                                         //@synthesize confirmationTitle=_confirmationTitle - In the implementation block
@property (nonatomic,copy) NSString * itemOfferButtonStyle;                                      //@synthesize buttonStyle=_buttonStyle - In the implementation block
@property (nonatomic,copy) NSString * offerTitle;                                                //@synthesize offerTitle=_offerTitle - In the implementation block
@property (assign,nonatomic) BOOL shouldShowConfirmation;                                        //@synthesize shouldShowConfirmation=_shouldShowConfirmation - In the implementation block
@property (assign,getter=isShowingConfirmation,nonatomic) BOOL showingConfirmation;              //@synthesize isShowingConfirmation=_isShowingConfirmation - In the implementation block
+(double)defaultAnimationDuration;
+(id)itemOfferButtonStyleForItem:(id)arg1 offer:(id)arg2 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(BOOL)shouldShowConfirmation;
-(void)setConfirmationTitle:(NSString *)arg1 ;
-(NSString *)confirmationTitle;
-(void)layoutSubviews;
-(void)_reloadButton;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)_applyConfiguration:(SCD_Struct_SU18)arg1 ;
-(void)dealloc;
-(BOOL)isShowingConfirmation;
-(void)setShowingConfirmation:(BOOL)arg1 ;
-(void)setShowingConfirmation:(BOOL)arg1 duration:(double)arg2 ;
-(BOOL)configureForItem:(id)arg1 offer:(id)arg2 ;
-(void)setAnimationHorizontalAlignment:(long long)arg1 ;
-(void)setItemOfferButtonStyle:(NSString *)arg1 ;
-(void)setOfferTitle:(NSString *)arg1 ;
-(void)setShouldShowConfirmation:(BOOL)arg1 ;
-(SCD_Struct_SU18)_configurationForStyle:(id)arg1 ;
-(long long)animationHorizontalAlignment;
-(NSString *)offerTitle;
-(NSString *)itemOfferButtonStyle;
@end

