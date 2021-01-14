/*
* Generated on Thursday, January 14, 2021 at 2:20:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

@property (assign) long long type;                                                             //@synthesize type=_type - In the implementation block
@property (assign) long long listenerPort;                                                     //@synthesize listenerPort=_listenerPort - In the implementation block
@property (retain) NSString * interface;                                                       //@synthesize interface=_interface - In the implementation block
@property (retain) NSDictionary * configuration;                                               //@synthesize configuration=_configuration - In the implementation block
@property (getter=isCoprocessorInterfaceEnabled) BOOL enableCoprocessorInterface;              //@synthesize enableCoprocessorInterface=_enableCoprocessorInterface - In the implementation block
+(BOOL)stopAll;
+(BOOL)startSocksServerWithPort:(long long)arg1 ;
+(id)adressesForInterface:(id)arg1 ;
-(id)initWithType:(long long)arg1 ;
-(long long)listenerPort;
-(void)setInterface:(NSString *)arg1 ;
-(id)init;
-(id)initWithType:(long long)arg1 port:(long long)arg2 interface:(id)arg3 ;
-(void)setListenerPort:(long long)arg1 ;
-(BOOL)isCoprocessorInterfaceEnabled;
-(void)setEnableCoprocessorInterface:(BOOL)arg1 ;
-(BOOL)start;
-(id)initWithType:(long long)arg1 port:(long long)arg2 ;
-(NSString *)interface;
-(void)setType:(long long)arg1 ;
-(BOOL)stop;
-(NSDictionary *)configuration;
-(long long)type;
-(void)dealloc;
-(void)setConfiguration:(NSDictionary *)arg1 ;
@end

