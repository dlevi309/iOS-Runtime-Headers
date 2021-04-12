/*
* Generated on Monday, March 1, 2021 at 2:34:42 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CarPlaySupport.framework/CarPlaySupport
*/

#import <CarPlaySupport/CarPlaySupport-Structs.h>
#import <CarPlaySupport/CPSManeuverView.h>

@class UIImageView, CPSAbridgableLabel, NSArray;

@interface CPSLegacyPrimaryManeuverView : CPSManeuverView {

	BOOL _usesWideImage;
	UIImageView* _symbolView;
	CPSAbridgableLabel* _titleLabel;
	CPSAbridgableLabel* _instructionLabel;
	UIImageView* _junctionImageView;
	NSArray* _activeConstraints;

}

@property (nonatomic,retain) UIImageView * symbolView;                           //@synthesize symbolView=_symbolView - In the implementation block
@property (nonatomic,retain) CPSAbridgableLabel * titleLabel;                    //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) CPSAbridgableLabel * instructionLabel;              //@synthesize instructionLabel=_instructionLabel - In the implementation block
@property (nonatomic,retain) UIImageView * junctionImageView;                    //@synthesize junctionImageView=_junctionImageView - In the implementation block
@property (assign,nonatomic) BOOL usesWideImage;                                 //@synthesize usesWideImage=_usesWideImage - In the implementation block
@property (nonatomic,retain) NSArray * activeConstraints;                        //@synthesize activeConstraints=_activeConstraints - In the implementation block
-(CPSAbridgableLabel *)titleLabel;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)setTitleLabel:(CPSAbridgableLabel *)arg1 ;
-(NSArray *)activeConstraints;
-(void)setActiveConstraints:(NSArray *)arg1 ;
-(CPSAbridgableLabel *)instructionLabel;
-(void)setInstructionLabel:(CPSAbridgableLabel *)arg1 ;
-(id)initWithManeuver:(id)arg1 ;
-(void)setCurrentTravelEstimates:(id)arg1 ;
-(id)_formattedDistance;
-(UIImageView *)junctionImageView;
-(void)setJunctionImageView:(UIImageView *)arg1 ;
-(UIImageView *)symbolView;
-(void)setUsesWideImage:(BOOL)arg1 ;
-(BOOL)usesWideImage;
-(double)heightForMaxSizeForWidth:(double)arg1 instruction:(id)arg2 hideJunctionView:(BOOL)arg3 hideInstruction:(BOOL)arg4 ;
-(void)_setAttributedInstruction:(id)arg1 ;
-(void)_activateLayoutConstraintsIfNecessaryForLayoutType:(unsigned long long)arg1 HideJunctionView:(BOOL)arg2 hideInstructionText:(BOOL)arg3 ;
-(void)_setInstruction:(id)arg1 ;
-(double)heightForSizeMinimalWithWidth:(double)arg1 instruction:(id)arg2 ;
-(void)_activateMinimalLayoutConstraintsIfNecessary;
-(BOOL)_fitMaxLayoutToSize:(CGSize)arg1 ;
-(BOOL)_fitNoInstructionLayoutToSize:(CGSize)arg1 ;
-(BOOL)_fitNoJunctionViewLayoutToSize:(CGSize)arg1 ;
-(BOOL)_fitMinimalLayoutToSize:(CGSize)arg1 ;
-(void)_updateForBackgroundColor;
-(double)intrinsicHeightForWidth:(double)arg1 ;
-(void)sizeToFitSize:(CGSize)arg1 ;
-(void)setSymbolView:(UIImageView *)arg1 ;
@end

