/*
* Generated on Thursday, January 14, 2021 at 2:23:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TemplateKit.framework/TemplateKit
*/

#import <TemplateKit/TemplateKit-Structs.h>
#import <TemplateKit/TLKView.h>
#import <libobjc.A.dylib/NUIContainerViewDelegate.h>

@class TLKFormattedText, TLKLabel, TLKStackView, NSString;

@interface TLKAuxilliaryTextView : TLKView <NUIContainerViewDelegate> {

	BOOL _useCompactMode;
	TLKFormattedText* _topText;
	TLKFormattedText* _middleText;
	TLKFormattedText* _bottomText;
	TLKLabel* _topLabel;
	TLKLabel* _middleLabel;
	TLKLabel* _bottomLabel;

}

@property (nonatomic,retain) TLKLabel * topLabel;                        //@synthesize topLabel=_topLabel - In the implementation block
@property (nonatomic,retain) TLKLabel * middleLabel;                     //@synthesize middleLabel=_middleLabel - In the implementation block
@property (nonatomic,retain) TLKLabel * bottomLabel;                     //@synthesize bottomLabel=_bottomLabel - In the implementation block
@property (nonatomic,retain) TLKStackView * contentView; 
@property (assign,nonatomic) BOOL useCompactMode;                        //@synthesize useCompactMode=_useCompactMode - In the implementation block
@property (nonatomic,retain) TLKFormattedText * topText;                 //@synthesize topText=_topText - In the implementation block
@property (nonatomic,retain) TLKFormattedText * middleText;              //@synthesize middleText=_middleText - In the implementation block
@property (nonatomic,retain) TLKFormattedText * bottomText;              //@synthesize bottomText=_bottomText - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(TLKLabel *)bottomLabel;
-(TLKFormattedText *)topText;
-(void)setTopLabel:(TLKLabel *)arg1 ;
-(TLKLabel *)topLabel;
-(void)setBottomLabel:(TLKLabel *)arg1 ;
-(void)setMiddleLabel:(TLKLabel *)arg1 ;
-(TLKFormattedText *)middleText;
-(TLKLabel *)middleLabel;
-(TLKFormattedText *)bottomText;
-(BOOL)useCompactMode;
-(id)setupContentView;
-(void)setTopText:(TLKFormattedText *)arg1 ;
-(void)setMiddleText:(TLKFormattedText *)arg1 ;
-(void)setBottomText:(TLKFormattedText *)arg1 ;
-(void)observedPropertiesChanged;
-(id)middleLabelFont;
-(id)bottomLabelFont;
-(id)topLabelString;
-(id)middleLabelString;
-(id)bottomLabelString;
-(void)setUseCompactMode:(BOOL)arg1 ;
@end

