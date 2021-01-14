/*
* Generated on Thursday, January 14, 2021 at 2:24:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MapsSupport.framework/MapsSupport
*/

#import <MapsSupport/MapsSupport-Structs.h>
#import <libobjc.A.dylib/GEONavigationListenerDelegate.h>
#import <libobjc.A.dylib/MNNavigationServiceObserver.h>

@protocol OS_os_transaction, MSPNavigationListenerDelegate;
@class GEONavigationListener, GEONavigationGuidanceState, NSObject, GEOSharedNavState, NSString;

@interface MSPNavigationListener : NSObject <GEONavigationListenerDelegate, MNNavigationServiceObserver> {

	GEONavigationListener* _outOfNavListener;
	GEONavigationGuidanceState* _guidanceState;
	NSObject*<OS_os_transaction> _transaction;
	GEOSharedNavState* _state;
	NSString* _navigationSessionIdentifier;
	BOOL _transitioningToNavigationState;
	id<MSPNavigationListenerDelegate> _delegate;
	GEOSharedNavState* _currentState;

}

@property (nonatomic,retain) GEOSharedNavState * currentState;                               //@synthesize currentState=_currentState - In the implementation block
@property (assign,nonatomic,__weak) id<MSPNavigationListenerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy,readonly) NSString * navigationSessionIdentifier; 
@property (nonatomic,readonly) BOOL isInNavigatingState; 
@property (nonatomic,readonly) BOOL isCompatibleTransportType; 
@property (nonatomic,readonly) BOOL isCompatibleNavigationType; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setCurrentState:(GEOSharedNavState *)arg1 ;
-(void)navigationListener:(id)arg1 didChangeNavigationState:(unsigned long long)arg2 transportType:(int)arg3 ;
-(id)init;
-(GEOSharedNavState *)currentState;
-(id<MSPNavigationListenerDelegate>)delegate;
-(void)navigationService:(id)arg1 didUpdateMatchedLocation:(id)arg2 ;
-(void)navigationService:(id)arg1 didUpdateDisplayETA:(id)arg2 remainingDistance:(id)arg3 ;
-(void)_updateTraffic:(id)arg1 ;
-(void)navigationService:(id)arg1 didUpdateTraffic:(id)arg2 ;
-(void)navigationListener:(id)arg1 didUpdateGuidanceState:(id)arg2 ;
-(BOOL)isCompatibleNavigationType;
-(void)setDelegate:(id<MSPNavigationListenerDelegate>)arg1 ;
-(void)_updateLocation:(id)arg1 ;
-(void)navigationService:(id)arg1 didArriveAtWaypoint:(id)arg2 endOfLegIndex:(unsigned long long)arg3 ;
-(void)_updateNavigationServiceForCurrentState;
-(void)_updateRoute:(id)arg1 ;
-(void)_initState;
-(void)navigationService:(id)arg1 willChangeFromState:(unsigned long long)arg2 toState:(unsigned long long)arg3 ;
-(BOOL)isCompatibleTransportType;
-(void)_updateETA:(id)arg1 remainingDistance:(id)arg2 ;
-(NSString *)navigationSessionIdentifier;
-(void)navigationService:(id)arg1 didFailWithError:(id)arg2 ;
-(BOOL)isInNavigatingState;
-(int)_referenceFrameForDestination:(id)arg1 ;
-(void)navigationService:(id)arg1 didChangeFromState:(unsigned long long)arg2 toState:(unsigned long long)arg3 ;
-(void)navigationService:(id)arg1 didReroute:(id)arg2 ;
-(void)dealloc;
@end

