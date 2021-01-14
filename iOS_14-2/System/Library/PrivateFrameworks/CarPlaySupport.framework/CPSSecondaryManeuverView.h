/*
* Generated on Thursday, January 14, 2021 at 2:27:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CarPlaySupport.framework/CarPlaySupport
*/

#import <CarPlaySupport/CarPlaySupport-Structs.h>
#import <UIKitCore/UIView.h>

@class CPManeuver, CPTravelEstimates, UIImageView, CPSAbridgableLabel;

@interface CPSSecondaryManeuverView : UIView {

	CPManeuver* _maneuver;
	double _generatedHeight;
	long long _style;
	CPTravelEstimates* _currentTravelEstimates;
	unsigned long long _guidanceStyle;
	UIImageView* _symbolView;
	CPSAbridgableLabel* _instructionLabel;
	double _generatedWidth;

}

@property (assign,nonatomic) long long style;                                         //@synthesize style=_style - In the implementation block
@property (nonatomic,retain) CPTravelEstimates * currentTravelEstimates;              //@synthesize currentTravelEstimates=_currentTravelEstimates - In the implementation block
@property (assign,nonatomic) unsigned long long guidanceStyle;                        //@synthesize guidanceStyle=_guidanceStyle - In the implementation block
@property (nonatomic,retain) UIImageView * symbolView;                                //@synthesize symbolView=_symbolView - In the implementation block
@property (nonatomic,retain) CPSAbridgableLabel * instructionLabel;                   //@synthesize instructionLabel=_instructionLabel - In the implementation block
@property (assign,nonatomic) double generatedWidth;                                   //@synthesize generatedWidth=_generatedWidth - In the implementation block
@property (nonatomic,readonly) CPManeuver * maneuver;                                 //@synthesize maneuver=_maneuver - In the implementation block
@property (assign,nonatomic) double generatedHeight;                                  //@synthesize generatedHeight=_generatedHeight - In the implementation block
-(CPSAbridgableLabel *)instructionLabel;
-(void)setInstructionLabel:(CPSAbridgableLabel *)arg1 ;
-(CPManeuver *)maneuver;
-(void)setStyle:(long long)arg1 ;
-(double)horizontalInset;
-(void)traitCollectionDidChange:(id)arg1 ;
-(long long)style;
-(id)initWithManeuver:(id)arg1 ;
-(void)generateLayoutConfigurationsForSizeIfNecessary:(CGSize)arg1 force:(BOOL)arg2 ;
-(double)generatedHeight;
-(void)setCurrentTravelEstimates:(CPTravelEstimates *)arg1 ;
-(double)generatedWidth;
-(void)setGeneratedWidth:(double)arg1 ;
-(CPTravelEstimates *)currentTravelEstimates;
-(id)accessibilityName:(id)arg1 ;
-(void)setGeneratedHeight:(double)arg1 ;
-(UIImageView *)symbolView;
-(unsigned long long)guidanceStyle;
-(void)setGuidanceStyle:(unsigned long long)arg1 ;
-(void)setSymbolView:(UIImageView *)arg1 ;
@end

