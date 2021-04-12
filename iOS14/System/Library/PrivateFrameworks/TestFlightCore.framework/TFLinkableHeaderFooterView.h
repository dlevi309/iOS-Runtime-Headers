/*
* Generated on Thursday, January 14, 2021 at 2:28:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TestFlightCore.framework/TestFlightCore
*/

#import <TestFlightCore/TestFlightCore-Structs.h>
#import <UIKitCore/UITableViewHeaderFooterView.h>

@class UITextView;

@interface TFLinkableHeaderFooterView : UITableViewHeaderFooterView {

	BOOL _isHeader;
	UITextView* _textView;

}

@property (nonatomic,readonly) UITextView * textView;              //@synthesize textView=_textView - In the implementation block
@property (assign,nonatomic) BOOL isHeader;                        //@synthesize isHeader=_isHeader - In the implementation block
+(id)reuseIdentifier;
+(CGSize)itemSizeWithText:(id)arg1 isHeader:(BOOL)arg2 fittingSize:(CGSize)arg3 inTraitEnvironment:(id)arg4 ;
+(double)_heightForTextViewWithText:(id)arg1 font:(id)arg2 isHeader:(BOOL)arg3 fittingWidth:(double)arg4 inTraitEnvironment:(id)arg5 ;
-(UITextView *)textView;
-(id)init;
-(BOOL)isHeader;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)setIsHeader:(BOOL)arg1 ;
-(id)initWithReuseIdentifier:(id)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)_prepareForDisplayWithTraitCollection:(id)arg1 ;
-(void)_updateTextViewWithLinkMap:(id)arg1 ;
-(void)applyText:(id)arg1 withTextLinkMap:(id)arg2 isHeader:(BOOL)arg3 ;
@end

