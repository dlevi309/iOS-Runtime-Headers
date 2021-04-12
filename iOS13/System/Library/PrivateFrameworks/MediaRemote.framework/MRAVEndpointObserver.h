/*
* Generated on Monday, March 1, 2021 at 2:32:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
*/


@class MRAVRoutingDiscoverySession, NSArray, NSString, MRAVEndpoint;

@interface MRAVEndpointObserver : NSObject {

	MRAVRoutingDiscoverySession* _discoverySession;
	NSArray* _endpoints;
	/*^block*/id _endpointChangedCallback;
	BOOL _didBegin;
	NSString* _outputDeviceUID;
	MRAVEndpoint* _endpoint;

}

@property (nonatomic,copy) id endpointChangedCallback; 
@property (nonatomic,readonly) NSString * outputDeviceUID;              //@synthesize outputDeviceUID=_outputDeviceUID - In the implementation block
@property (nonatomic,readonly) MRAVEndpoint * endpoint;                 //@synthesize endpoint=_endpoint - In the implementation block
-(MRAVEndpoint *)endpoint;
-(void)end;
-(void)begin;
-(id)discoveredEndpoints;
-(NSString *)outputDeviceUID;
-(id)initWithOutputDeviceUID:(id)arg1 ;
-(id)_initializeDiscoverySession;
-(void)_handleOutputContextDidChangeNotification;
-(void)_reevaluateEndpoint;
-(void)_handleEndpointsDidChange:(id)arg1 ;
-(id)_endpointContainingOutputDevice:(id)arg1 ;
-(void)setEndpointChangedCallback:(id)arg1 ;
-(id)endpointChangedCallback;
@end

