/*
* Generated on Monday, March 1, 2021 at 2:30:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
*/


@protocol OS_tcp_listener;
@class NSString, NSDictionary, NSNumber, NSObject;

@interface _NSCFServer : NSObject {

	BOOL _enableCoprocessorInterface;
	long long _type;
	long long _listenerPort;
	NSString* _interface;
	NSDictionary* _configuration;
	NSNumber* _listenerID;
	NSObject*<OS_tcp_listener> _listener;

}

@property (retain) NSNumber * listenerID;                                                      //@synthesize listenerID=_listenerID - In the implementation block
@property (retain) NSObject*<OS_tcp_listener> listener;                                        //@synthesize listener=_listener - In the implementation block
@property (assign) long long type;                                                             //@synthesize type=_type - In the implementation block
@property (assign) long long listenerPort;                                                     //@synthesize listenerPort=_listenerPort - In the implementation block
@property (retain) NSString * interface;                                                       //@synthesize interface=_interface - In the implementation block
@property (retain) NSDictionary * configuration;                                               //@synthesize configuration=_configuration - In the implementation block
@property (getter=isCoprocessorInterfaceEnabled) BOOL enableCoprocessorInterface;              //@synthesize enableCoprocessorInterface=_enableCoprocessorInterface - In the implementation block
+(id)listeners;
+(BOOL)startSocksServerWithPort:(long long)arg1 ;
+(BOOL)stopAll;
+(id)adressesForInterface:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(long long)type;
-(void)setType:(long long)arg1 ;
-(NSObject*<OS_tcp_listener>)listener;
-(BOOL)stop;
-(BOOL)start;
-(NSString *)interface;
-(void)setInterface:(NSString *)arg1 ;
-(id)initWithType:(long long)arg1 ;
-(void)setListener:(NSObject*<OS_tcp_listener>)arg1 ;
-(void)setConfiguration:(NSDictionary *)arg1 ;
-(NSDictionary *)configuration;
-(id)initWithType:(long long)arg1 port:(long long)arg2 interface:(id)arg3 ;
-(id)initWithType:(long long)arg1 port:(long long)arg2 ;
-(BOOL)startWithAcceptHandler:(/*^block*/id)arg1 ;
-(long long)listenerPort;
-(void)setListenerPort:(long long)arg1 ;
-(BOOL)isCoprocessorInterfaceEnabled;
-(void)setEnableCoprocessorInterface:(BOOL)arg1 ;
-(NSNumber *)listenerID;
-(void)setListenerID:(NSNumber *)arg1 ;
@end

