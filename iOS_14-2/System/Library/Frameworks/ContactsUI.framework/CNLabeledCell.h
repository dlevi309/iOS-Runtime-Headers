/*
* Generated on Thursday, January 14, 2021 at 2:20:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)addChevron;
-(UIView*<ABText>)labelView;
-(NSString *)labelString;
-(UIImageView *)chevron;
-(double)chevronWidth;
-(void)removeChevron;
-(BOOL)displaysCellSelectionState;
-(double)valueViewBottomMargin;
-(UILabel *)standardLabelView;
-(id)constantConstraintsForStandardLayout;
-(id)variableConstraintsForStandardLayout;
-(id)constantConstraintsForVerticalLayout;
-(id)variableConstraintsForVerticalLayout;
-(id)constantConstraintsForHorizontalLayout;
-(id)variableConstraintsForHorizontalLayout;
-(UILabel *)standardValueView;
-(void)setLabelViewNeedsHuggingContent:(BOOL)arg1 ;
-(void)setValueViewNeedsHuggingContent:(BOOL)arg1 ;
-(BOOL)labelViewNeedsHuggingContent;
-(BOOL)valueViewNeedsHuggingContent;
-(UIView*<ABText>)valueView;
-(double)minCellHeight;
-(UIView *)rightMostView;
-(void)setLabelTextAttributes:(NSDictionary *)arg1 ;
-(id)constantConstraints;
-(id)variableConstraints;
-(BOOL)allowsCellSelection;
-(NSDictionary *)labelTextAttributes;
-(NSDictionary *)valueTextAttributes;
-(void)setValueTextAttributes:(NSDictionary *)arg1 ;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
@end

