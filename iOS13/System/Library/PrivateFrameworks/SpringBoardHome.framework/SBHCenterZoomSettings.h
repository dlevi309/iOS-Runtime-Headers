/*
* Generated on Monday, March 1, 2021 at 2:33:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardHome.framework/SpringBoardHome
*/

#import <SpringBoardHome/SBHIconZoomSettings.h>

@interface SBHCenterZoomSettings : SBHIconZoomSettings {

	BOOL _preferCenterOfIconGrid;
	BOOL _zoomViewBelowIcons;
	double _centerRowCoordinate;
	long long _distanceEffect;
	double _firstHopIncrement;
	double _hopIncrementAcceleration;
	double _dockMass;

}

@property (assign,nonatomic) BOOL preferCenterOfIconGrid;                  //@synthesize preferCenterOfIconGrid=_preferCenterOfIconGrid - In the implementation block
@property (assign,nonatomic) double centerRowCoordinate;                   //@synthesize centerRowCoordinate=_centerRowCoordinate - In the implementation block
@property (assign,nonatomic) long long distanceEffect;                     //@synthesize distanceEffect=_distanceEffect - In the implementation block
@property (assign,nonatomic) double firstHopIncrement;                     //@synthesize firstHopIncrement=_firstHopIncrement - In the implementation block
@property (assign,nonatomic) double hopIncrementAcceleration;              //@synthesize hopIncrementAcceleration=_hopIncrementAcceleration - In the implementation block
@property (assign,nonatomic) double dockMass;                              //@synthesize dockMass=_dockMass - In the implementation block
@property (assign,nonatomic) BOOL zoomViewBelowIcons;                      //@synthesize zoomViewBelowIcons=_zoomViewBelowIcons - In the implementation block
+(id)settingsControllerModule;
-(void)setDefaultValues;
-(long long)distanceEffect;
-(double)firstHopIncrement;
-(double)hopIncrementAcceleration;
-(double)dockMass;
-(BOOL)preferCenterOfIconGrid;
-(double)centerRowCoordinate;
-(void)setDockMass:(double)arg1 ;
-(void)setCenterRowCoordinate:(double)arg1 ;
-(void)setPreferCenterOfIconGrid:(BOOL)arg1 ;
-(void)setDistanceEffect:(long long)arg1 ;
-(void)setFirstHopIncrement:(double)arg1 ;
-(void)setHopIncrementAcceleration:(double)arg1 ;
-(BOOL)zoomViewBelowIcons;
-(void)setZoomViewBelowIcons:(BOOL)arg1 ;
@end

