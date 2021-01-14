/*
* Generated on Thursday, January 14, 2021 at 2:24:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
*/


@protocol MNTunnelLocationProjectorDelegate;
#import <Navigation/Navigation-Structs.h>
@class NSTimer, MNLocation, NSDate;

@interface MNTunnelLocationProjector : NSObject {

	id<MNTunnelLocationProjectorDelegate> _delegate;
	NSTimer* _locationUpdateOverdueTimer;
	MNLocation* _lastLocation;
	NSDate* _lastLocationDate;
	double _locationOverdueTimeoutForTunnel;
	double _locationOverdueTimeoutForNotTunnel;
	double _locationOverdueTimeoutForUnknown;
	BOOL _isProjecting;

}

@property (assign,nonatomic,__weak) id<MNTunnelLocationProjectorDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) BOOL isProjecting;                                                //@synthesize isProjecting=_isProjecting - In the implementation block
-(id)init;
-(id<MNTunnelLocationProjectorDelegate>)delegate;
-(void)stop;
-(void)setDelegate:(id<MNTunnelLocationProjectorDelegate>)arg1 ;
-(double)_approximateMaxSpeedForRoad:(SCD_Struct_MN5*)arg1 ;
-(void)updateLocation:(id)arg1 ;
-(void)dealloc;
-(BOOL)isProjecting;
-(BOOL)_locationIsGoodEnoughToEndProjection:(id)arg1 ;
-(double)_locationOverdueTimeoutForLocation:(id)arg1 ;
-(void)_resetLocationUpdateOverdueWithTimeout:(double)arg1 ;
-(void)_locationUpdateOverdueTimerFired:(id)arg1 ;
-(id)_projectFromLocation:(id)arg1 timeInterval:(double)arg2 ;
@end

