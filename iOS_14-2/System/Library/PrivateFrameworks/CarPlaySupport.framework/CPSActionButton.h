/*
* Generated on Thursday, January 14, 2021 at 2:27:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CarPlaySupport.framework/CarPlaySupport
*/

#import <CarPlaySupport/CarPlaySupport-Structs.h>
#import <CarPlaySupport/CPSButton.h>

@protocol CPSActionButtonLayoutDelegate;
@class UIImage, NSString, NSDictionary, UILabel, UIImageView, NSArray, NSMutableDictionary;

@interface CPSActionButton : CPSButton {

	BOOL _disabledButtonFocused;
	id<CPSActionButtonLayoutDelegate> _layoutDelegate;
	UIImage* _buttonImage;
	NSString* _buttonText;
	NSDictionary* _buttonAttributes;
	UILabel* _buttonLabel;
	UIImageView* _buttonImageView;
	NSArray* _layoutConstraints;
	NSMutableDictionary* _tintColors;

}

@property (nonatomic,retain) UILabel * buttonLabel;                                                //@synthesize buttonLabel=_buttonLabel - In the implementation block
@property (nonatomic,retain) UIImageView * buttonImageView;                                        //@synthesize buttonImageView=_buttonImageView - In the implementation block
@property (nonatomic,retain) NSArray * layoutConstraints;                                          //@synthesize layoutConstraints=_layoutConstraints - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * tintColors;                                     //@synthesize tintColors=_tintColors - In the implementation block
@property (assign,nonatomic,__weak) id<CPSActionButtonLayoutDelegate> layoutDelegate;              //@synthesize layoutDelegate=_layoutDelegate - In the implementation block
@property (nonatomic,retain) UIImage * buttonImage;                                                //@synthesize buttonImage=_buttonImage - In the implementation block
@property (nonatomic,retain) NSString * buttonText;                                                //@synthesize buttonText=_buttonText - In the implementation block
@property (assign,nonatomic) BOOL disabledButtonFocused;                                           //@synthesize disabledButtonFocused=_disabledButtonFocused - In the implementation block
@property (nonatomic,retain) NSDictionary * buttonAttributes;                                      //@synthesize buttonAttributes=_buttonAttributes - In the implementation block
-(BOOL)canBecomeFocused;
-(id<CPSActionButtonLayoutDelegate>)layoutDelegate;
-(void)setLayoutDelegate:(id<CPSActionButtonLayoutDelegate>)arg1 ;
-(void)_updateLayout;
-(void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2 ;
-(CGSize)intrinsicContentSize;
-(id)initWithFrame:(CGRect)arg1 ;
-(NSString *)buttonText;
-(void)setButtonImage:(UIImage *)arg1 ;
-(void)setButtonLabel:(UILabel *)arg1 ;
-(void)setEnabled:(BOOL)arg1 ;
-(void)setSelected:(BOOL)arg1 ;
-(void)resetLayoutConstraints;
-(void)setupLayoutConstraints;
-(NSArray *)layoutConstraints;
-(void)setLayoutConstraints:(NSArray *)arg1 ;
-(void)setButtonText:(NSString *)arg1 ;
-(UILabel *)buttonLabel;
-(void)setTintColor:(id)arg1 forState:(unsigned long long)arg2 ;
-(void)layoutSubviews;
-(void)updateConstraints;
-(UIImage *)buttonImage;
-(void)setupViews;
-(void)updateViews;
-(void)stateUpdated;
-(BOOL)disabledButtonFocused;
-(void)setDisabledButtonFocused:(BOOL)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)setHighlighted:(BOOL)arg1 ;
-(NSDictionary *)buttonAttributes;
-(void)setButtonImageView:(UIImageView *)arg1 ;
-(UIImageView *)buttonImageView;
-(NSMutableDictionary *)tintColors;
-(void)setTintColors:(NSMutableDictionary *)arg1 ;
-(void)setButtonAttributes:(NSDictionary *)arg1 ;
@end

