/*
* Generated on Monday, March 1, 2021 at 2:31:43 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/RemoteUI.framework/RemoteUI
*/

#import <RemoteUI/RemoteUI-Structs.h>
#import <UIKitCore/UIView.h>

@protocol RUIMultiChoiceActionHandler;
@class UIStackView, NSMutableArray, UIColor;

@interface RUIMultiChoiceView : UIView {

	UIStackView* _stackView;
	NSMutableArray* _choices;
	NSMutableArray* _choiceButtons;
	NSMutableArray* _buttonsWidthConstraint;
	id<RUIMultiChoiceActionHandler> _target;
	UIColor* _backgroundColor;

}

@property (assign,nonatomic,__weak) id<RUIMultiChoiceActionHandler> target;              //@synthesize target=_target - In the implementation block
@property (nonatomic,retain) UIColor * backgroundColor;                                  //@synthesize backgroundColor=_backgroundColor - In the implementation block
-(void)setTarget:(id<RUIMultiChoiceActionHandler>)arg1 ;
-(id<RUIMultiChoiceActionHandler>)target;
-(UIColor *)backgroundColor;
-(void)setBackgroundColor:(UIColor *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)addChoice:(id)arg1 ;
-(double)estimatedHeight;
-(void)didTapChoice:(id)arg1 ;
-(void)setupStackView;
-(void)setChoiceHidden:(BOOL)arg1 atIndex:(unsigned long long)arg2 ;
@end

