/*
* Generated on Thursday, January 14, 2021 at 2:24:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
	double _distanceToManeuverStart;
	double _distanceToManeuverEnd;

}

@property (assign,nonatomic,__weak) id<MNTimeAndDistanceUpdaterDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) double distanceToManeuverStart;                                  //@synthesize distanceToManeuverStart=_distanceToManeuverStart - In the implementation block
@property (nonatomic,readonly) double distanceToManeuverEnd;                                    //@synthesize distanceToManeuverEnd=_distanceToManeuverEnd - In the implementation block
-(id<MNTimeAndDistanceUpdaterDelegate>)delegate;
-(void)setDelegate:(id<MNTimeAndDistanceUpdaterDelegate>)arg1 ;
-(void)dealloc;
-(void)startUpdating;
-(void)stopUpdating;
-(void)setRoutes:(id)arg1 mainRoute:(id)arg2 location:(id)arg3 notificationType:(unsigned long long)arg4 ;
-(double)distanceToManeuverStart;
-(double)distanceToManeuverEnd;
-(void)_startTimerToNextMinute;
-(void)updateDisplayETAForRoute:(id)arg1 notificationType:(unsigned long long)arg2 ;
-(void)setLocation:(id)arg1 notificationType:(unsigned long long)arg2 ;
@end

