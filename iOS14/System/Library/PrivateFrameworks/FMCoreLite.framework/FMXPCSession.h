/*
* Generated on Thursday, January 14, 2021 at 2:23:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/FMCoreLite.framework/FMCoreLite
*/


@protocol OS_dispatch_queue;
@class NSUUID, NSObject, FMXPCServiceDescription, NSXPCConnection;

@interface FMXPCSession : NSObject {

	NSUUID* _identifier;
	id __proxy;
	NSObject*<OS_dispatch_queue> _serialQueue;
	FMXPCServiceDescription* _serviceDescription;
	NSXPCConnection* _connection;

}

@property (nonatomic,retain) id _proxy;                                                 //@synthesize _proxy=__proxy - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> serialQueue;                  //@synthesize serialQueue=_serialQueue - In the implementation block
@property (nonatomic,retain) FMXPCServiceDescription * serviceDescription;              //@synthesize serviceDescription=_serviceDescription - In the implementation block
@property (nonatomic,retain) NSXPCConnection * connection;                              //@synthesize connection=_connection - In the implementation block
@property (nonatomic,copy,readonly) NSUUID * identifier;                                //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) id proxy; 
-(void)suspend;
-(id)proxy;
-(void)setServiceDescription:(FMXPCServiceDescription *)arg1 ;
-(NSObject*<OS_dispatch_queue>)serialQueue;
-(FMXPCServiceDescription *)serviceDescription;
-(id)initWithServiceDescription:(id)arg1 ;
-(void)destroyXPCConnection;
-(void)setSerialQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSXPCConnection *)connection;
-(void)set_proxy:(id)arg1 ;
-(void)invalidate;
-(NSUUID *)identifier;
-(id)_proxy;
-(void)setConnection:(NSXPCConnection *)arg1 ;
-(void)resume;
-(void)dealloc;
@end

