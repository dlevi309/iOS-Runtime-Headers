/*
* Generated on Monday, March 1, 2021 at 2:34:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreIndoor.framework/CoreIndoor
*/

#import <CoreIndoor/CLIndoorXPCProvider.h>
#import <libobjc.A.dylib/CLIndoorXPCProviderImplementation.h>

@class ServiceState, NSString;

@interface CLIndoorPositionProvider : CLIndoorXPCProvider <CLIndoorXPCProviderImplementation> {

	ServiceState* _state;

}

@property (nonatomic,retain) ServiceState * state;                  //@synthesize state=_state - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setDelegate:(id)arg1 ;
-(ServiceState *)state;
-(id)initWithConnection:(id)arg1 ;
-(void)setState:(ServiceState *)arg1 ;
-(void)stopUpdatingLocation;
-(id)endpointName;
-(id)remoteObjectProtocol;
-(void)withinQueueInvalidateState;
-(void)withinQueueReconnectInvalidatedConnectionFailed:(id)arg1 ;
-(id)withinQueuePermanentShutdownReason;
-(BOOL)withinQueueCanReinitializeRemoteState;
-(void)withinQueueReinitializeRemoteState;
-(void)startUpdatingLocationAtLocation:(id)arg1 ;
-(void)outdoorLocationAvailable:(id)arg1 ;
-(void)gpsEstimateAvailable:(id)arg1 ;
-(void)gpsSignalQualityAvailable:(id)arg1 ;
-(void)setApiKey:(id)arg1 ;
-(void)setApiKey:(id)arg1 onServer:(id)arg2 ;
-(void)playbackDatarun:(id)arg1 ;
-(void)withinQueueSetDelegate:(id)arg1 ;
-(id)initWithApiKey:(id)arg1 ;
-(id)initWithApiKey:(id)arg1 onServer:(id)arg2 ;
@end

