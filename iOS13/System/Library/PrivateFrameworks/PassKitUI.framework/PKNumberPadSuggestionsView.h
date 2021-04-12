/*
* Generated on Monday, March 1, 2021 at 2:32:36 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
*/

#import <PassKitUI/PassKitUI-Structs.h>
#import <UIKitCore/UIStackView.h>

@protocol PKNumberPadSuggestionsViewDelegate;
@class NSArray, UIColor;

@interface PKNumberPadSuggestionsView : UIStackView {

	NSArray* _suggestionButtons;
	id<PKNumberPadSuggestionsViewDelegate> _delegate;
	NSArray* _suggestions;
	UIColor* _buttonTextColor;
	UIColor* _buttonBackgroundColor;

}

@property (assign,nonatomic,__weak) id<PKNumberPadSuggestionsViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy) NSArray * suggestions;                                                 //@synthesize suggestions=_suggestions - In the implementation block
@property (nonatomic,copy) UIColor * buttonTextColor;                                             //@synthesize buttonTextColor=_buttonTextColor - In the implementation block
@property (nonatomic,copy) UIColor * buttonBackgroundColor;                                       //@synthesize buttonBackgroundColor=_buttonBackgroundColor - In the implementation block
+(CGSize)defaultSize;
-(id<PKNumberPadSuggestionsViewDelegate>)delegate;
-(void)setDelegate:(id<PKNumberPadSuggestionsViewDelegate>)arg1 ;
-(NSArray *)suggestions;
-(void)setSuggestions:(NSArray *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(UIColor *)buttonTextColor;
-(void)setButtonTextColor:(UIColor *)arg1 ;
-(void)setButtonBackgroundColor:(UIColor *)arg1 ;
-(id)initWithDefaultFrame;
-(UIColor *)buttonBackgroundColor;
-(void)_selectedSuggestion:(id)arg1 ;
@end

