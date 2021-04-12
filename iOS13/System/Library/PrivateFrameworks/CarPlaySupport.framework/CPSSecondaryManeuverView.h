/*
* Generated on Monday, March 1, 2021 at 2:34:42 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CarPlaySupport.framework/CarPlaySupport
*/

#import <CarPlaySupport/CarPlaySupport-Structs.h>
#import <CarPlaySupport/CPSManeuverView.h>

@class UIImageView, CPSAbridgableLabel;

@interface CPSSecondaryManeuverView : CPSManeuverView {

	double _generatedHeight;
	UIImageView* _symbolView;
	CPSAbridgableLabel* _instructionLabel;
	double _generatedWidth;

}

@property (nonatomic,retain) UIImageView * symbolView;                           //@synthesize symbolView=_symbolView - In the implementation block
@property (nonatomic,retain) CPSAbridgableLabel * instructionLabel;              //@synthesize instructionLabel=_instructionLabel - In the implementation block
@property (assign,nonatomic) double generatedWidth;                              //@synthesize generatedWidth=_generatedWidth - In the implementation block
@property (assign,nonatomic) double generatedHeight;                             //@synthesize generatedHeight=_generatedHeight - In the implementation block
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)_updateBackgroundColor;
-(double)horizontalInset;
-(CPSAbridgableLabel *)instructionLabel;
-(void)setInstructionLabel:(CPSAbridgableLabel *)arg1 ;
-(id)initWithManeuver:(id)arg1 ;
-(void)generateLayoutConfigurationsForSizeIfNecessary:(CGSize)arg1 force:(BOOL)arg2 ;
-(double)generatedHeight;
-(double)generatedWidth;
-(void)setGeneratedWidth:(double)arg1 ;
-(void)setUsesDefaultGuidanceBackgroundColor:(BOOL)arg1 ;
-(UIImageView *)symbolView;
-(double)intrinsicHeightForWidth:(double)arg1 ;
-(void)setSymbolView:(UIImageView *)arg1 ;
-(void)setGeneratedHeight:(double)arg1 ;
@end

