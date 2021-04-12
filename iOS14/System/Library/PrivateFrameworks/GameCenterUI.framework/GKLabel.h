/*
* Generated on Thursday, January 14, 2021 at 2:23:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
*/

#import <GameCenterUI/GameCenterUI-Structs.h>
#import <UIKitCore/UILabel.h>
#import <libobjc.A.dylib/GKTextStyleReplay.h>

@class GKTextStyle, NSString;

@interface GKLabel : UILabel <GKTextStyleReplay> {

	GKTextStyle* _baseStyle;
	GKTextStyle* _appliedStyle;
	BOOL _shouldEnforcePreferredWidth;
	BOOL _usingAttributedText;
	BOOL _shouldInhibitReplay;
	double _actualFontShrinkageFactor;
	NSEdgeInsets _titleEdgeInsets;

}

@property (nonatomic,retain) GKTextStyle * baseStyle; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) GKTextStyle * appliedStyle;                    //@synthesize appliedStyle=_appliedStyle - In the implementation block
@property (assign,nonatomic) double actualFontShrinkageFactor;              //@synthesize actualFontShrinkageFactor=_actualFontShrinkageFactor - In the implementation block
@property (assign,nonatomic) BOOL shouldEnforcePreferredWidth;              //@synthesize shouldEnforcePreferredWidth=_shouldEnforcePreferredWidth - In the implementation block
@property (nonatomic,readonly) BOOL usingAttributedText;                    //@synthesize usingAttributedText=_usingAttributedText - In the implementation block
@property (assign,nonatomic) BOOL shouldInhibitReplay;                      //@synthesize shouldInhibitReplay=_shouldInhibitReplay - In the implementation block
@property (assign,nonatomic) NSEdgeInsets titleEdgeInsets;                  //@synthesize titleEdgeInsets=_titleEdgeInsets - In the implementation block
+(void)initialize;
-(void)_UIAppearance_setBaseStyle:(id)arg1 ;
-(CGSize)intrinsicContentSize;
-(void)setAttributedText:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(BOOL)shouldInhibitReplay;
-(void)replayAndApplyStyleWithSystemContentChange:(BOOL)arg1 ;
-(BOOL)usingAttributedText;
-(void)replayAndApplyStyleUnlessInhibited;
-(void)setBaseStyle:(GKTextStyle *)arg1 ;
-(CGSize)shrinkFontToFitSize:(CGSize)arg1 ;
-(void)setActualFontShrinkageFactor:(double)arg1 ;
-(BOOL)shouldEnforcePreferredWidth;
-(void)setText:(id)arg1 ;
-(GKTextStyle *)baseStyle;
-(double)actualFontShrinkageFactor;
-(void)shrinkFontToFitWidth;
-(void)setShouldEnforcePreferredWidth:(BOOL)arg1 ;
-(void)setShouldInhibitReplay:(BOOL)arg1 ;
-(void)setBounds:(CGRect)arg1 ;
-(GKTextStyle *)appliedStyle;
-(void)setAppliedStyle:(GKTextStyle *)arg1 ;
-(void)applyTextStyle:(id)arg1 ;
-(void)updateConstraints;
-(void)setTitleEdgeInsets:(NSEdgeInsets)arg1 ;
-(NSEdgeInsets)titleEdgeInsets;
@end

