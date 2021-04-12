/*
* Generated on Monday, March 1, 2021 at 2:32:32 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MapsSupport.framework/MapsSupport
*/

#import <libobjc.A.dylib/MNNavigationServiceObserver.h>

@protocol MSPNavigationListenerDelegate;
@class GEOSharedNavState, NSString;

@interface MSPNavigationListener : NSObject <MNNavigationServiceObserver> {

	GEOSharedNavState* _state;
	NSString* _navSessionID;
	id<MSPNavigationListenerDelegate> _delegate;
	GEOSharedNavState* _currentState;

}

@property (nonatomic,retain) GEOSharedNavState * currentState;                               //@synthesize currentState=_currentState - In the implementation block
@property (assign,nonatomic,__weak) id<MSPNavigationListenerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) BOOL isInNavigatingState; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)dealloc;
-(id<MSPNavigationListenerDelegate>)delegate;
-(void)setDelegate:(id<MSPNavigationListenerDelegate>)arg1 ;
-(GEOSharedNavState *)currentState;
-(void)setCurrentState:(GEOSharedNavState *)arg1 ;
-(void)_updateLocation:(id)arg1 ;
-(void)_updateRoute:(id)arg1 ;
-(void)_updateTraffic:(id)arg1 ;
-(void)_updateETA:(double)arg1 distance:(double)arg2 ;
-(int)_referenceFrameForDestination:(id)arg1 ;
-(BOOL)isInNavigatingState;
-(void)_initState;
-(void)navigationService:(id)arg1 didChangeFromState:(unsigned long long)arg2 toState:(unsigned long long)arg3 ;
-(void)navigationService:(id)arg1 didFailWithError:(id)arg2 ;
-(void)navigationService:(id)arg1 didUpdateMatchedLocation:(id)arg2 ;
-(void)navigationServiceDidArrive:(id)arg1 ;
-(void)navigationService:(id)arg1 didUpdateRemainingTime:(double)arg2 remainingDistance:(double)arg3 ;
-(void)navigationService:(id)arg1 didUpdateTraffic:(id)arg2 ;
-(void)navigationService:(id)arg1 didReroute:(id)arg2 traffic:(id)arg3 ;
@end

