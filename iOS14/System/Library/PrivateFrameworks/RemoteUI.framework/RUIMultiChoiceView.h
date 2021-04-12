/*
* Generated on Thursday, January 14, 2021 at 2:28:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/RemoteUI.framework/RemoteUI
*/

#import <RemoteUI/RemoteUI-Structs.h>
#import <UIKitCore/UIView.h>

@protocol RUIMultiChoiceActionHandler;
@class UIStackView, NSMutableArray, UIActivityIndicatorView, UIVisualEffectView, UIColor;

@interface RUIMultiChoiceView : UIView {

	UIStackView* _stackView;
	NSMutableArray* _choices;
	NSMutableArray* _choiceButtons;
	NSMutableArray* _buttonsWidthConstraint;
	UIActivityIndicatorView* _activityIndicatorView;
	UIVisualEffectView* _trayBackdrop;
	id<RUIMultiChoiceActionHandler> _target;
	UIColor* _backgroundColor;

}

@property (assign,nonatomic,__weak) id<RUIMultiChoiceActionHandler> target;              //@synthesize target=_target - In the implementation block
@property (nonatomic,retain) UIColor * backgroundColor;                                  //@synthesize backgroundColor=_backgroundColor - In the implementation block
-(void)setTarget:(id<RUIMultiChoiceActionHandler>)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setupStackView;
-(void)setBackgroundColor:(UIColor *)arg1 ;
-(UIColor *)backgroundColor;
-(void)layoutSubviews;
-(id<RUIMultiChoiceActionHandler>)target;
-(id)viewForElementIdentifier:(id)arg1 ;
-(void)addChoice:(id)arg1 ;
-(void)startActivityIndicatorForChoice:(id)arg1 ;
-(void)stopActivityIndicatorForChoice:(id)arg1 ;
-(void)didTapChoice:(id)arg1 ;
-(void)setupTrayBackdrop;
-(void)setChoiceHidden:(BOOL)arg1 atIndex:(unsigned long long)arg2 ;
@end

