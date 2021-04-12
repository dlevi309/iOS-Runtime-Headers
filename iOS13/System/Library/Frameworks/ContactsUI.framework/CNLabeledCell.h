/*
* Generated on Monday, March 1, 2021 at 2:30:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
*/

#import <ContactsUI/CNContactCell.h>

@class NSDictionary, UIImageView, UIView, UILabel, NSString;

@interface CNLabeledCell : CNContactCell {

	NSDictionary* _labelTextAttributes;
	NSDictionary* _valueTextAttributes;
	BOOL _labelViewNeedsHuggingContent;
	BOOL _valueViewNeedsHuggingContent;
	UIImageView* _chevron;

}

@property (nonatomic,readonly) UIView*<ABText> labelView; 
@property (nonatomic,readonly) UIView*<ABText> valueView; 
@property (assign,nonatomic) BOOL labelViewNeedsHuggingContent;              //@synthesize labelViewNeedsHuggingContent=_labelViewNeedsHuggingContent - In the implementation block
@property (assign,nonatomic) BOOL valueViewNeedsHuggingContent;              //@synthesize valueViewNeedsHuggingContent=_valueViewNeedsHuggingContent - In the implementation block
@property (nonatomic,readonly) UIView * rightMostView; 
@property (nonatomic,readonly) UILabel * standardLabelView; 
@property (nonatomic,readonly) UILabel * standardValueView; 
@property (nonatomic,readonly) NSString * labelString; 
@property (nonatomic,readonly) NSString * valueString; 
@property (nonatomic,readonly) double valueViewBottomMargin; 
@property (nonatomic,copy) NSDictionary * labelTextAttributes; 
@property (nonatomic,copy) NSDictionary * valueTextAttributes; 
@property (nonatomic,readonly) double chevronWidth; 
@property (nonatomic,readonly) UIImageView * chevron;                        //@synthesize chevron=_chevron - In the implementation block
+(BOOL)wantsChevron;
+(BOOL)wantsHorizontalLayout;
+(BOOL)wantsStandardConstraints;
-(NSString *)valueString;
-(void)tintColorDidChange;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(UIView*<ABText>)labelView;
-(UIImageView *)chevron;
-(NSString *)labelString;
-(UIView*<ABText>)valueView;
-(id)variableConstraints;
-(double)minCellHeight;
-(UIView *)rightMostView;
-(void)setLabelTextAttributes:(NSDictionary *)arg1 ;
-(id)constantConstraints;
-(NSDictionary *)labelTextAttributes;
-(NSDictionary *)valueTextAttributes;
-(void)setValueTextAttributes:(NSDictionary *)arg1 ;
-(BOOL)allowsCellSelection;
-(BOOL)displaysCellSelectionState;
-(void)addChevron;
-(void)removeChevron;
-(double)chevronWidth;
-(double)valueViewBottomMargin;
-(id)constantConstraintsForStandardLayout;
-(id)variableConstraintsForStandardLayout;
-(id)constantConstraintsForVerticalLayout;
-(id)variableConstraintsForVerticalLayout;
-(id)constantConstraintsForHorizontalLayout;
-(id)variableConstraintsForHorizontalLayout;
-(UILabel *)standardLabelView;
-(UILabel *)standardValueView;
-(void)setLabelViewNeedsHuggingContent:(BOOL)arg1 ;
-(void)setValueViewNeedsHuggingContent:(BOOL)arg1 ;
-(BOOL)labelViewNeedsHuggingContent;
-(BOOL)valueViewNeedsHuggingContent;
@end

