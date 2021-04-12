/*
* Generated on Thursday, January 14, 2021 at 2:25:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <PrototypeTools/PTSettings.h>

@interface SBHomeGestureExclusionTrapezoidSettings : PTSettings {

	BOOL _showExclusionTrapezoidDebugView;
	BOOL _landscapeTrapezoidEnabled;
	BOOL _allowHorizontalSwipesOutsideLandscapeTrapezoid;
	BOOL _portraitTrapezoidEnabled;
	BOOL _portraitTrapezoidEnabledOnlyForKeyboards;
	BOOL _allowHorizontalSwipesOutsidePortraitTrapezoid;
	double _landscapeTrapezoidHeight;
	double _landscapeTrapezoidBaseHeight;
	double _landscapeTrapezoidAdjacentXDistanceFromEdge;
	double _landscapeTrapezoidOpposingXDistanceFromEdge;
	double _portraitTrapezoidHeight;
	double _portraitTrapezoidBaseHeight;
	double _portraitTrapezoidAdjacentXDistanceFromEdge;
	double _portraitTrapezoidOpposingXDistanceFromEdge;

}

@property (assign,nonatomic) BOOL showExclusionTrapezoidDebugView;                             //@synthesize showExclusionTrapezoidDebugView=_showExclusionTrapezoidDebugView - In the implementation block
@property (assign,nonatomic) BOOL landscapeTrapezoidEnabled;                                   //@synthesize landscapeTrapezoidEnabled=_landscapeTrapezoidEnabled - In the implementation block
@property (assign,nonatomic) BOOL allowHorizontalSwipesOutsideLandscapeTrapezoid;              //@synthesize allowHorizontalSwipesOutsideLandscapeTrapezoid=_allowHorizontalSwipesOutsideLandscapeTrapezoid - In the implementation block
@property (assign,nonatomic) double landscapeTrapezoidHeight;                                  //@synthesize landscapeTrapezoidHeight=_landscapeTrapezoidHeight - In the implementation block
@property (assign,nonatomic) double landscapeTrapezoidBaseHeight;                              //@synthesize landscapeTrapezoidBaseHeight=_landscapeTrapezoidBaseHeight - In the implementation block
@property (assign,nonatomic) double landscapeTrapezoidAdjacentXDistanceFromEdge;               //@synthesize landscapeTrapezoidAdjacentXDistanceFromEdge=_landscapeTrapezoidAdjacentXDistanceFromEdge - In the implementation block
@property (assign,nonatomic) double landscapeTrapezoidOpposingXDistanceFromEdge;               //@synthesize landscapeTrapezoidOpposingXDistanceFromEdge=_landscapeTrapezoidOpposingXDistanceFromEdge - In the implementation block
@property (assign,nonatomic) BOOL portraitTrapezoidEnabled;                                    //@synthesize portraitTrapezoidEnabled=_portraitTrapezoidEnabled - In the implementation block
@property (assign,nonatomic) BOOL portraitTrapezoidEnabledOnlyForKeyboards;                    //@synthesize portraitTrapezoidEnabledOnlyForKeyboards=_portraitTrapezoidEnabledOnlyForKeyboards - In the implementation block
@property (assign,nonatomic) BOOL allowHorizontalSwipesOutsidePortraitTrapezoid;               //@synthesize allowHorizontalSwipesOutsidePortraitTrapezoid=_allowHorizontalSwipesOutsidePortraitTrapezoid - In the implementation block
@property (assign,nonatomic) double portraitTrapezoidHeight;                                   //@synthesize portraitTrapezoidHeight=_portraitTrapezoidHeight - In the implementation block
@property (assign,nonatomic) double portraitTrapezoidBaseHeight;                               //@synthesize portraitTrapezoidBaseHeight=_portraitTrapezoidBaseHeight - In the implementation block
@property (assign,nonatomic) double portraitTrapezoidAdjacentXDistanceFromEdge;                //@synthesize portraitTrapezoidAdjacentXDistanceFromEdge=_portraitTrapezoidAdjacentXDistanceFromEdge - In the implementation block
@property (assign,nonatomic) double portraitTrapezoidOpposingXDistanceFromEdge;                //@synthesize portraitTrapezoidOpposingXDistanceFromEdge=_portraitTrapezoidOpposingXDistanceFromEdge - In the implementation block
+(id)settingsControllerModule;
-(void)setDefaultValues;
-(void)setAllowHorizontalSwipesOutsidePortraitTrapezoid:(BOOL)arg1 ;
-(double)portraitTrapezoidBaseHeight;
-(void)setLandscapeTrapezoidBaseHeight:(double)arg1 ;
-(void)setAllowHorizontalSwipesOutsideLandscapeTrapezoid:(BOOL)arg1 ;
-(BOOL)portraitTrapezoidEnabled;
-(void)setPortraitTrapezoidAdjacentXDistanceFromEdge:(double)arg1 ;
-(void)setLandscapeTrapezoidAdjacentXDistanceFromEdge:(double)arg1 ;
-(double)portraitTrapezoidAdjacentXDistanceFromEdge;
-(void)setLandscapeTrapezoidEnabled:(BOOL)arg1 ;
-(void)setPortraitTrapezoidBaseHeight:(double)arg1 ;
-(void)setPortraitTrapezoidHeight:(double)arg1 ;
-(double)landscapeTrapezoidHeight;
-(BOOL)allowHorizontalSwipesOutsidePortraitTrapezoid;
-(double)landscapeTrapezoidBaseHeight;
-(void)setLandscapeTrapezoidOpposingXDistanceFromEdge:(double)arg1 ;
-(BOOL)allowHorizontalSwipesOutsideLandscapeTrapezoid;
-(double)landscapeTrapezoidAdjacentXDistanceFromEdge;
-(double)portraitTrapezoidHeight;
-(BOOL)showExclusionTrapezoidDebugView;
-(void)setLandscapeTrapezoidHeight:(double)arg1 ;
-(void)setPortraitTrapezoidOpposingXDistanceFromEdge:(double)arg1 ;
-(void)setPortraitTrapezoidEnabledOnlyForKeyboards:(BOOL)arg1 ;
-(BOOL)landscapeTrapezoidEnabled;
-(void)setPortraitTrapezoidEnabled:(BOOL)arg1 ;
-(void)setShowExclusionTrapezoidDebugView:(BOOL)arg1 ;
-(double)portraitTrapezoidOpposingXDistanceFromEdge;
-(BOOL)portraitTrapezoidEnabledOnlyForKeyboards;
-(double)landscapeTrapezoidOpposingXDistanceFromEdge;
@end

