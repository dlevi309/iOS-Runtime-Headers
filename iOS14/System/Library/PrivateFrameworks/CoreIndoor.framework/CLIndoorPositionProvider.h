/*
* Generated on Thursday, January 14, 2021 at 2:27:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)stopUpdatingLocation;
-(id)initWithConnection:(id)arg1 ;
-(BOOL)withinQueueCanReinitializeRemoteState;
-(id)withinQueuePermanentShutdownReason;
-(id)remoteObjectProtocol;
-(id)endpointName;
-(void)setDelegate:(id)arg1 ;
-(void)withinQueueInvalidateState;
-(void)setState:(ServiceState *)arg1 ;
-(ServiceState *)state;
-(void)withinQueueReinitializeRemoteState;
-(void)withinQueueReconnectInvalidatedConnectionFailed:(id)arg1 ;
-(void)setApiKey:(id)arg1 ;
-(void)startUpdatingLocationAtLocation:(id)arg1 ;
-(void)outdoorLocationAvailable:(id)arg1 ;
-(void)gpsEstimateAvailable:(id)arg1 ;
-(void)gpsSignalQualityAvailable:(id)arg1 ;
-(void)setApiKey:(id)arg1 onServer:(id)arg2 ;
-(void)playbackDatarun:(id)arg1 ;
-(void)withinQueueSetDelegate:(id)arg1 ;
-(id)initWithApiKey:(id)arg1 ;
-(id)initWithApiKey:(id)arg1 onServer:(id)arg2 ;
@end

