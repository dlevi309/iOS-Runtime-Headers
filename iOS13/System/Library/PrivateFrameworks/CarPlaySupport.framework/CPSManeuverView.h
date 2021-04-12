/*
* Generated on Monday, March 1, 2021 at 2:34:42 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CarPlaySupport.framework/CarPlaySupport
*/

#import <UIKitCore/UIView.h>

@class CPManeuver, CPTravelEstimates;

@interface CPSManeuverView : UIView {

	BOOL _usesDefaultGuidanceBackgroundColor;
	CPManeuver* _maneuver;
	long long _style;
	CPTravelEstimates* _currentTravelEstimates;
	unsigned long long _guidanceStyle;

}

@property (assign,nonatomic) long long style;                                         //@synthesize style=_style - In the implementation block
@property (nonatomic,retain) CPTravelEstimates * currentTravelEstimates;              //@synthesize currentTravelEstimates=_currentTravelEstimates - In the implementation block
@property (assign,nonatomic) unsigned long long guidanceStyle;                        //@synthesize guidanceStyle=_guidanceStyle - In the implementation block
@property (nonatomic,readonly) CPManeuver * maneuver;                                 //@synthesize maneuver=_maneuver - In the implementation block
@property (assign,nonatomic) BOOL usesDefaultGuidanceBackgroundColor;                 //@synthesize usesDefaultGuidanceBackgroundColor=_usesDefaultGuidanceBackgroundColor - In the implementation block
-(long long)style;
-(void)setStyle:(long long)arg1 ;
-(CPManeuver *)maneuver;
-(id)initWithManeuver:(id)arg1 ;
-(void)setCurrentTravelEstimates:(CPTravelEstimates *)arg1 ;
-(CPTravelEstimates *)currentTravelEstimates;
-(id)accessibilityName:(id)arg1 ;
-(BOOL)usesDefaultGuidanceBackgroundColor;
-(void)setUsesDefaultGuidanceBackgroundColor:(BOOL)arg1 ;
-(unsigned long long)guidanceStyle;
-(void)setGuidanceStyle:(unsigned long long)arg1 ;
@end

