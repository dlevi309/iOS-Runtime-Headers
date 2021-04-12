/*
* Generated on Monday, March 1, 2021 at 2:31:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)dealloc;
-(void)invalidate;
-(NSUUID *)identifier;
-(void)resume;
-(void)suspend;
-(id)_proxy;
-(NSXPCConnection *)connection;
-(void)setConnection:(NSXPCConnection *)arg1 ;
-(NSObject*<OS_dispatch_queue>)serialQueue;
-(id)proxy;
-(FMXPCServiceDescription *)serviceDescription;
-(void)setSerialQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)destroyXPCConnection;
-(void)set_proxy:(id)arg1 ;
-(id)initWithServiceDescription:(id)arg1 ;
-(void)setServiceDescription:(FMXPCServiceDescription *)arg1 ;
@end

