/*
* Generated on Thursday, January 14, 2021 at 2:23:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
*/

#import <GameCenterUI/GameCenterUI-Structs.h>
#import <UIKitCore/UIControl.h>

@class NSArray, NSString, UIView, NSMutableDictionary;

@interface GKContactSkipControl : UIControl {

	NSArray* _values;
	NSString* _lastSelectedValue;
	NSArray* _buttons;
	UIView* _buttonView;
	UIView* _centeringView;
	NSMutableDictionary* _buttonsToTitles;

}

@property (nonatomic,retain) NSString * lastSelectedValue;                       //@synthesize lastSelectedValue=_lastSelectedValue - In the implementation block
@property (nonatomic,retain) NSArray * buttons;                                  //@synthesize buttons=_buttons - In the implementation block
@property (nonatomic,retain) UIView * buttonView;                                //@synthesize buttonView=_buttonView - In the implementation block
@property (nonatomic,retain) UIView * centeringView;                             //@synthesize centeringView=_centeringView - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * buttonsToTitles;              //@synthesize buttonsToTitles=_buttonsToTitles - In the implementation block
@property (nonatomic,retain) NSArray * values;                                   //@synthesize values=_values - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(NSArray *)values;
-(NSArray *)buttons;
-(UIView *)centeringView;
-(void)setCenteringView:(UIView *)arg1 ;
-(void)setValues:(NSArray *)arg1 ;
-(void)setButtonView:(UIView *)arg1 ;
-(void)awakeFromNib;
-(void)setupButtonView;
-(void)setupValueButtons;
-(void)determineButtonFromGesture:(id)arg1 ;
-(void)setButtonsToTitles:(NSMutableDictionary *)arg1 ;
-(long long)valueButtonCountThatFitsHeight:(double)arg1 ;
-(id)compactPhoneValues:(long long)arg1 ;
-(id)nextTitleFollowingValue:(id)arg1 ;
-(UIView *)buttonView;
-(void)valueSelected:(id)arg1 ;
-(NSString *)lastSelectedValue;
-(void)setLastSelectedValue:(NSString *)arg1 ;
-(void)adjustForTraitCollection:(id)arg1 ;
-(NSMutableDictionary *)buttonsToTitles;
-(void)setButtons:(NSArray *)arg1 ;
@end

