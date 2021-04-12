/*
* Generated on Monday, March 1, 2021 at 2:30:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
*/

#import <ContactsUI/ContactsUI-Structs.h>
#import <UIKitCore/UIView.h>

@class CNGeminiResult, UIColor, NSDictionary, UILayoutGuide, CNGeminiBadge, UILabel, UIImageView, NSArray;

@interface CNContactGeminiView : UIView {

	BOOL _allowsPickerActions;
	BOOL _highlighted;
	BOOL _didCalculateLayout;
	BOOL _isUsingTwoLineLayout;
	CNGeminiResult* _geminiResult;
	UIColor* _highlightedColor;
	NSDictionary* _ab_textAttributes;
	UILayoutGuide* _layoutGuide;
	UILayoutGuide* _geminiLabelLayoutGuide;
	CNGeminiBadge* _geminiBadge;
	UILabel* _typeLabel;
	UILabel* _geminiLabel;
	UIImageView* _chevronView;
	NSArray* _activatedConstraints;

}

@property (nonatomic,retain) UILayoutGuide * layoutGuide;                         //@synthesize layoutGuide=_layoutGuide - In the implementation block
@property (nonatomic,retain) UILayoutGuide * geminiLabelLayoutGuide;              //@synthesize geminiLabelLayoutGuide=_geminiLabelLayoutGuide - In the implementation block
@property (nonatomic,retain) CNGeminiBadge * geminiBadge;                         //@synthesize geminiBadge=_geminiBadge - In the implementation block
@property (nonatomic,retain) UILabel * typeLabel;                                 //@synthesize typeLabel=_typeLabel - In the implementation block
@property (nonatomic,retain) UILabel * geminiLabel;                               //@synthesize geminiLabel=_geminiLabel - In the implementation block
@property (nonatomic,retain) UIImageView * chevronView;                           //@synthesize chevronView=_chevronView - In the implementation block
@property (nonatomic,retain) NSArray * activatedConstraints;                      //@synthesize activatedConstraints=_activatedConstraints - In the implementation block
@property (assign,nonatomic) BOOL didCalculateLayout;                             //@synthesize didCalculateLayout=_didCalculateLayout - In the implementation block
@property (assign,nonatomic) BOOL isUsingTwoLineLayout;                           //@synthesize isUsingTwoLineLayout=_isUsingTwoLineLayout - In the implementation block
@property (assign,nonatomic) BOOL allowsPickerActions;                            //@synthesize allowsPickerActions=_allowsPickerActions - In the implementation block
@property (nonatomic,retain) CNGeminiResult * geminiResult;                       //@synthesize geminiResult=_geminiResult - In the implementation block
@property (assign,getter=isHighlighted,nonatomic) BOOL highlighted;               //@synthesize highlighted=_highlighted - In the implementation block
@property (nonatomic,retain) UIColor * highlightedColor;                          //@synthesize highlightedColor=_highlightedColor - In the implementation block
@property (nonatomic,copy) NSDictionary * ab_textAttributes;                      //@synthesize ab_textAttributes=_ab_textAttributes - In the implementation block
+(BOOL)requiresConstraintBasedLayout;
-(id)initWithFrame:(CGRect)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)layoutSubviews;
-(BOOL)isHighlighted;
-(void)setHighlighted:(BOOL)arg1 ;
-(void)updateConstraints;
-(UILayoutGuide *)layoutGuide;
-(void)setLayoutGuide:(UILayoutGuide *)arg1 ;
-(void)setTypeLabel:(UILabel *)arg1 ;
-(UILabel *)typeLabel;
-(void)setHighlightedColor:(UIColor *)arg1 ;
-(UIColor *)highlightedColor;
-(void)setGeminiResult:(CNGeminiResult *)arg1 ;
-(NSArray *)activatedConstraints;
-(void)setActivatedConstraints:(NSArray *)arg1 ;
-(BOOL)allowsPickerActions;
-(void)setAllowsPickerActions:(BOOL)arg1 ;
-(CNGeminiResult *)geminiResult;
-(NSDictionary *)ab_textAttributes;
-(void)setAb_textAttributes:(NSDictionary *)arg1 ;
-(CGSize)sizeForSingleLineLayoutFittingSize:(CGSize)arg1 ;
-(CGSize)sizeForTwoLineLayoutFittingSize:(CGSize)arg1 ;
-(BOOL)shouldDisplayBadge;
-(BOOL)shouldDisplayChevron;
-(void)setNeedsCalculateLayout;
-(void)calculateLayoutIfNeeded;
-(BOOL)doesLayoutRequireTwoLines;
-(id)singleLineLayoutConstraints;
-(id)twoLineLayoutConstraints;
-(id)localizedChannelUsageFromGeminiResult:(id)arg1 ;
-(id)localizedLabelFromGeminiResult:(id)arg1 ;
-(UILayoutGuide *)geminiLabelLayoutGuide;
-(void)setGeminiLabelLayoutGuide:(UILayoutGuide *)arg1 ;
-(CNGeminiBadge *)geminiBadge;
-(void)setGeminiBadge:(CNGeminiBadge *)arg1 ;
-(UILabel *)geminiLabel;
-(void)setGeminiLabel:(UILabel *)arg1 ;
-(UIImageView *)chevronView;
-(void)setChevronView:(UIImageView *)arg1 ;
-(BOOL)didCalculateLayout;
-(void)setDidCalculateLayout:(BOOL)arg1 ;
-(BOOL)isUsingTwoLineLayout;
-(void)setIsUsingTwoLineLayout:(BOOL)arg1 ;
@end

