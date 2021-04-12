/*
* Generated on Monday, March 1, 2021 at 2:33:15 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
*/


@protocol MNTimeAndDistanceUpdaterDelegate;
@class MNLocation, NSArray, NSTimer, MNActiveRouteInfo;

@interface MNTimeAndDistanceUpdater : NSObject {

	id<MNTimeAndDistanceUpdaterDelegate> _delegate;
	MNLocation* _location;
	NSArray* _routes;
	NSTimer* _minuteTimer;
	MNActiveRouteInfo* _mainRoute;
	double _remainingTime;
	double _remainingDistance;
	double _distanceToManeuverStart;
	double _distanceToManeuverEnd;

}

@property (assign,nonatomic,__weak) id<MNTimeAndDistanceUpdaterDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) double remainingTime;                                            //@synthesize remainingTime=_remainingTime - In the implementation block
@property (nonatomic,readonly) double remainingDistance;                                        //@synthesize remainingDistance=_remainingDistance - In the implementation block
@property (nonatomic,readonly) double distanceToManeuverStart;                                  //@synthesize distanceToManeuverStart=_distanceToManeuverStart - In the implementation block
@property (nonatomic,readonly) double distanceToManeuverEnd;                                    //@synthesize distanceToManeuverEnd=_distanceToManeuverEnd - In the implementation block
-(void)dealloc;
-(id<MNTimeAndDistanceUpdaterDelegate>)delegate;
-(void)setDelegate:(id<MNTimeAndDistanceUpdaterDelegate>)arg1 ;
-(double)remainingDistance;
-(double)remainingTime;
-(void)startUpdating;
-(void)stopUpdating;
-(void)setRoutes:(id)arg1 mainRoute:(id)arg2 location:(id)arg3 notificationType:(unsigned long long)arg4 ;
-(double)distanceToManeuverStart;
-(double)distanceToManeuverEnd;
-(void)_startTimerToNextMinute;
-(void)updateDisplayETAForRoute:(id)arg1 notificationType:(unsigned long long)arg2 ;
-(void)setLocation:(id)arg1 notificationType:(unsigned long long)arg2 ;
@end

