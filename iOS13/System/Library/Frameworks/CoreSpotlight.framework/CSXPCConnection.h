/*
* Generated on Monday, March 1, 2021 at 2:31:42 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CoreSpotlight.framework/CoreSpotlight
*/


@protocol OS_dispatch_queue, OS_xpc_object;
#import <CoreSpotlight/CoreSpotlight-Structs.h>
@class NSString, NSObject;

@interface CSXPCConnection : NSObject {

	BOOL _machService;
	BOOL _listener;
	BOOL _nonLaunching;
	unsigned _user;
	NSString* _uuid;
	NSString* _serviceName;
	NSObject*<OS_dispatch_queue> _queue;
	NSObject*<OS_xpc_object> _connection;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;               //@synthesize queue=_queue - In the implementation block
@property (nonatomic,retain) NSObject*<OS_xpc_object> connection;              //@synthesize connection=_connection - In the implementation block
@property (assign,nonatomic) unsigned user;                                    //@synthesize user=_user - In the implementation block
@property (nonatomic,readonly) NSString * uuid;                                //@synthesize uuid=_uuid - In the implementation block
@property (nonatomic,readonly) BOOL machService;                               //@synthesize machService=_machService - In the implementation block
@property (nonatomic,readonly) NSString * serviceName;                         //@synthesize serviceName=_serviceName - In the implementation block
@property (nonatomic,readonly) BOOL listener;                                  //@synthesize listener=_listener - In the implementation block
@property (assign,nonatomic) BOOL nonLaunching;                                //@synthesize nonLaunching=_nonLaunching - In the implementation block
+(id)copyNSStringForKey:(const char*)arg1 fromXPCDictionary:(id)arg2 ;
+(id)dataWrapperForKey:(const char*)arg1 sizeKey:(const char*)arg2 fromXPCDictionary:(id)arg3 ;
+(id)copyNSStringArrayFromXPCArray:(id)arg1 ;
+(BOOL)dictionary:(id)arg1 setSharedMemory:(void*)arg2 forKey:(const char*)arg3 size:(unsigned long long)arg4 forSizeKey:(const char*)arg5 ;
+(void)dictionary:(id)arg1 setStringArray:(id)arg2 forKey:(const char*)arg3 ;
+(id)copyNSDataForKey:(const char*)arg1 fromXPCDictionary:(id)arg2 ;
+(id)copyNSStringSetFromXPCArray:(id)arg1 ;
+(id)appIdentifierFromTeamAppTuple:(id)arg1 ;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(unsigned)user;
-(void)handleError:(id)arg1 ;
-(BOOL)listener;
-(id)initWithMachServiceName:(id)arg1 ;
-(NSString *)uuid;
-(id)initWithServiceName:(id)arg1 ;
-(void)setUser:(unsigned)arg1 ;
-(NSString *)serviceName;
-(NSObject*<OS_xpc_object>)connection;
-(void)setConnection:(NSObject*<OS_xpc_object>)arg1 ;
-(void)sendMessageAsync:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)setNonLaunching:(BOOL)arg1 ;
-(void)handleReply:(id)arg1 ;
-(void)sendMessageAsync:(id)arg1 ;
-(id)initWithServiceName:(id)arg1 machService:(BOOL)arg2 uuid:(id)arg3 ;
-(id)initWithServiceName:(id)arg1 machService:(BOOL)arg2 ;
-(BOOL)addClientConnectionIfAllowedForConnection:(id)arg1 ;
-(BOOL)handleMessage:(id)arg1 type:(xpc_type_sRef)arg2 connection:(id)arg3 ;
-(BOOL)handleCommand:(const char*)arg1 info:(id)arg2 connection:(id)arg3 ;
-(void)_lostClientConnection:(id)arg1 error:(id)arg2 ;
-(BOOL)lostClientConnection:(id)arg1 error:(id)arg2 ;
-(void)startListener;
-(id)initListenerWithName:(id)arg1 ;
-(id)initMachServiceListenerWithName:(id)arg1 ;
-(void)_setUser:(unsigned)arg1 ;
-(BOOL)addClientConnectionIfAllowedForConfiguration:(id)arg1 ;
-(BOOL)machService;
-(BOOL)nonLaunching;
@end

