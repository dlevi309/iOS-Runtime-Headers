/*
* Generated on Thursday, January 14, 2021 at 2:23:01 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
*/

#import <AvatarUI/AvatarUI-Structs.h>
#import <UIKitCore/UIView.h>

@class UIColor, UIVisualEffectView, UILabel, NSArray, NSString;

@interface AVTUserInfoView : UIView {

	BOOL _isRegisteredForCategorySizeChange;
	UIColor* _containerBackgroundColor;
	UIVisualEffectView* _userInfoEffectView;
	UILabel* _userInfoLabel;
	NSArray* _activeConstraints;
	NSDirectionalEdgeInsets _textInsets;

}

@property (assign,nonatomic) BOOL isRegisteredForCategorySizeChange;               //@synthesize isRegisteredForCategorySizeChange=_isRegisteredForCategorySizeChange - In the implementation block
@property (nonatomic,retain) UIVisualEffectView * userInfoEffectView;              //@synthesize userInfoEffectView=_userInfoEffectView - In the implementation block
@property (nonatomic,retain) UILabel * userInfoLabel;                              //@synthesize userInfoLabel=_userInfoLabel - In the implementation block
@property (nonatomic,retain) NSArray * activeConstraints;                          //@synthesize activeConstraints=_activeConstraints - In the implementation block
@property (nonatomic,retain) NSString * text; 
@property (assign,nonatomic) NSDirectionalEdgeInsets textInsets;                   //@synthesize textInsets=_textInsets - In the implementation block
@property (assign,nonatomic) UIColor * containerBackgroundColor;                   //@synthesize containerBackgroundColor=_containerBackgroundColor - In the implementation block
+(double)textVerticalPadding;
-(void)_configure;
-(void)contentSizeCategoryDidChange:(id)arg1 ;
-(void)setTextInsets:(NSDirectionalEdgeInsets)arg1 ;
-(void)setText:(NSString *)arg1 ;
-(void)layoutSubviews;
-(void)updateConstraints;
-(void)didMoveToWindow;
-(NSArray *)activeConstraints;
-(void)setActiveConstraints:(NSArray *)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(NSString *)text;
-(void)setContainerBackgroundColor:(UIColor *)arg1 ;
-(NSDirectionalEdgeInsets)textInsets;
-(UIVisualEffectView *)userInfoEffectView;
-(BOOL)isRegisteredForCategorySizeChange;
-(void)setIsRegisteredForCategorySizeChange:(BOOL)arg1 ;
-(UIColor *)containerBackgroundColor;
-(UILabel *)userInfoLabel;
-(void)setUserInfoEffectView:(UIVisualEffectView *)arg1 ;
-(void)setUserInfoLabel:(UILabel *)arg1 ;
@end

