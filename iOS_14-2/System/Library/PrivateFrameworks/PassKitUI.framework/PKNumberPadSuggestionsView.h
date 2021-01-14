/*
* Generated on Thursday, January 14, 2021 at 2:24:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSArray *)suggestions;
-(void)setSuggestions:(NSArray *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(id<PKNumberPadSuggestionsViewDelegate>)delegate;
-(UIColor *)buttonTextColor;
-(void)_selectedSuggestion:(id)arg1 ;
-(void)setButtonBackgroundColor:(UIColor *)arg1 ;
-(void)setDelegate:(id<PKNumberPadSuggestionsViewDelegate>)arg1 ;
-(id)initWithDefaultFrame;
-(void)setButtonTextColor:(UIColor *)arg1 ;
-(UIColor *)buttonBackgroundColor;
@end

