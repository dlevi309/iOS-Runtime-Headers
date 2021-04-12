/*
* Generated on Monday, March 1, 2021 at 2:30:34 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/


@protocol OS_xpc_object;
@class NSObject;

@interface _GEOETARemoteProvider : NSObject {

	NSObject*<OS_xpc_object> _connection;
	/*^block*/id _willSendRequestHandler;
	/*^block*/id _finishedHandler;
	/*^block*/id _networkActivityHandler;
	/*^block*/id _errorHandler;

}

@property (nonatomic,retain) NSObject*<OS_xpc_object> connection;              //@synthesize connection=_connection - In the implementation block
@property (nonatomic,copy) id willSendRequestHandler;                          //@synthesize willSendRequestHandler=_willSendRequestHandler - In the implementation block
@property (nonatomic,copy) id finishedHandler;                                 //@synthesize finishedHandler=_finishedHandler - In the implementation block
@property (nonatomic,copy) id networkActivityHandler;                          //@synthesize networkActivityHandler=_networkActivityHandler - In the implementation block
@property (nonatomic,copy) id errorHandler;                                    //@synthesize errorHandler=_errorHandler - In the implementation block
+(id)provderWithWillSendRequest:(/*^block*/id)arg1 finished:(/*^block*/id)arg2 networkActivity:(/*^block*/id)arg3 error:(/*^block*/id)arg4 ;
-(void)setErrorHandler:(id)arg1 ;
-(id)errorHandler;
-(NSObject*<OS_xpc_object>)connection;
-(void)setConnection:(NSObject*<OS_xpc_object>)arg1 ;
-(void)setFinishedHandler:(id)arg1 ;
-(void)setWillSendRequestHandler:(id)arg1 ;
-(void)setNetworkActivityHandler:(id)arg1 ;
-(id)willSendRequestHandler;
-(id)finishedHandler;
-(id)networkActivityHandler;
@end

