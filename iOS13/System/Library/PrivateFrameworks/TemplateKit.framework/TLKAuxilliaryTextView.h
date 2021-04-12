/*
* Generated on Monday, March 1, 2021 at 2:32:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TemplateKit.framework/TemplateKit
*/

#import <TemplateKit/TemplateKit-Structs.h>
#import <TemplateKit/TLKView.h>
#import <libobjc.A.dylib/NUIContainerViewDelegate.h>

@class TLKFormattedText, TLKLabel, TLKTextAreaView, TLKStackView, NSString;

@interface TLKAuxilliaryTextView : TLKView <NUIContainerViewDelegate> {

	TLKFormattedText* _topText;
	TLKFormattedText* _middleText;
	TLKFormattedText* _bottomText;
	TLKLabel* _topLabel;
	TLKLabel* _middleLabel;
	TLKLabel* _bottomLabel;
	TLKTextAreaView* _textAreaViewForAlignment;

}

@property (nonatomic,retain) TLKLabel * topLabel;                                     //@synthesize topLabel=_topLabel - In the implementation block
@property (nonatomic,retain) TLKLabel * middleLabel;                                  //@synthesize middleLabel=_middleLabel - In the implementation block
@property (nonatomic,retain) TLKLabel * bottomLabel;                                  //@synthesize bottomLabel=_bottomLabel - In the implementation block
@property (nonatomic,retain) TLKTextAreaView * textAreaViewForAlignment;              //@synthesize textAreaViewForAlignment=_textAreaViewForAlignment - In the implementation block
@property (nonatomic,retain) TLKStackView * contentView; 
@property (nonatomic,retain) TLKFormattedText * topText;                              //@synthesize topText=_topText - In the implementation block
@property (nonatomic,retain) TLKFormattedText * middleText;                           //@synthesize middleText=_middleText - In the implementation block
@property (nonatomic,retain) TLKFormattedText * bottomText;                           //@synthesize bottomText=_bottomText - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)formattedTextHasTextContent:(id)arg1 ;
+(id)largeMiddleTextFont;
-(void)containerViewDidLayoutArrangedSubviews:(id)arg1 ;
-(TLKLabel *)topLabel;
-(void)setTopLabel:(TLKLabel *)arg1 ;
-(id)setupContentView;
-(void)observedPropertiesChanged;
-(void)setMiddleLabel:(TLKLabel *)arg1 ;
-(void)setBottomLabel:(TLKLabel *)arg1 ;
-(TLKFormattedText *)topText;
-(TLKFormattedText *)middleText;
-(TLKLabel *)middleLabel;
-(TLKFormattedText *)bottomText;
-(TLKLabel *)bottomLabel;
-(void)generateAndSizeTextAreaViewIfNeeded;
-(TLKTextAreaView *)textAreaViewForAlignment;
-(void)matchBaselineOfLabel:(id)arg1 toView:(id)arg2 ;
-(void)setTextAreaViewForAlignment:(TLKTextAreaView *)arg1 ;
-(void)setTopText:(TLKFormattedText *)arg1 ;
-(void)setMiddleText:(TLKFormattedText *)arg1 ;
-(void)setBottomText:(TLKFormattedText *)arg1 ;
-(id)middleLabelFont;
-(id)bottomLabelFont;
-(id)topLabelString;
-(id)middleLabelString;
-(id)bottomLabelString;
@end

