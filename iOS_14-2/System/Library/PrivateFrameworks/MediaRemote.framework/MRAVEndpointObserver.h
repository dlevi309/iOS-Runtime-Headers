/*
* Generated on Thursday, January 14, 2021 at 2:21:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)end;
-(void)begin;
-(MRAVEndpoint *)endpoint;
-(id)initWithOutputDeviceUID:(id)arg1 ;
-(NSString *)outputDeviceUID;
-(void)_handleOutputContextDidChangeNotification;
-(void)setEndpointChangedCallback:(id)arg1 ;
-(id)endpointChangedCallback;
@end

