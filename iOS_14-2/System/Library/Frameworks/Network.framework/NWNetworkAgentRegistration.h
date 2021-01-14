/*
* Generated on Thursday, January 14, 2021 at 2:22:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Network.framework/Network
*/


@protocol NWNetworkAgent, OS_dispatch_queue, OS_dispatch_source;
@class NSObject, NSUUID;

@interface NWNetworkAgentRegistration : NSObject {

	int _registrationSocket;
	Class _networkAgentClass;
	NSObject*<NWNetworkAgent> _networkAgent;
	NSUUID* _registeredUUID;
	NSObject*<OS_dispatch_queue> _queue;
	NSObject*<OS_dispatch_source> _readSource;

}

@property (assign) Class networkAgentClass;                                      //@synthesize networkAgentClass=_networkAgentClass - In the implementation block
@property (retain) NSObject*<NWNetworkAgent> networkAgent;                       //@synthesize networkAgent=_networkAgent - In the implementation block
@property (retain) NSUUID * registeredUUID;                                      //@synthesize registeredUUID=_registeredUUID - In the implementation block
@property (assign) int registrationSocket;                                       //@synthesize registrationSocket=_registrationSocket - In the implementation block
@property (retain) NSObject*<OS_dispatch_queue> queue;                           //@synthesize queue=_queue - In the implementation block
@property (retain) NSObject*<OS_dispatch_source> readSource;                     //@synthesize readSource=_readSource - In the implementation block
@property (getter=isRegistered,nonatomic,readonly) BOOL registered; 
@property (assign,nonatomic) unsigned long long useCount; 
+(BOOL)removeActiveAssertionFromNetworkAgent:(id)arg1 ;
+(BOOL)useNetworkAgent:(id)arg1 returnUseCount:(unsigned long long*)arg2 ;
+(BOOL)addActiveAssertionToNetworkAgent:(id)arg1 ;
+(int)newRegistrationFileDescriptor;
-(BOOL)isRegistered;
-(void)setNetworkAgentClass:(Class)arg1 ;
-(void)handleMessageFromAgent;
-(id)initWithNetworkAgentClass:(Class)arg1 queue:(id)arg2 ;
-(BOOL)assignResolvedEndpoints:(id)arg1 toClient:(id)arg2 ;
-(BOOL)registerNetworkAgent:(id)arg1 withFileDescriptor:(int)arg2 ;
-(void)setUseCount:(unsigned long long)arg1 ;
-(BOOL)assignNexusData:(id)arg1 toClient:(id)arg2 ;
-(BOOL)createReadSourceWithRegistrationSocket:(int)arg1 ;
-(BOOL)assignDiscoveredEndpoints:(id)arg1 toClient:(id)arg2 ;
-(id)descriptionWithIndent:(int)arg1 showFullContent:(BOOL)arg2 ;
-(id)initWithNetworkAgentClass:(Class)arg1 ;
-(int)registrationSocket;
-(id)description;
-(BOOL)setRegisteredNetworkAgent:(id)arg1 fileDescriptor:(int)arg2 ;
-(BOOL)addNetworkAgentToInterfaceNamed:(id)arg1 ;
-(void)setReadSource:(NSObject*<OS_dispatch_source>)arg1 ;
-(Class)networkAgentClass;
-(NSObject*<OS_dispatch_source>)readSource;
-(BOOL)unregisterNetworkAgent;
-(BOOL)registerNetworkAgent:(id)arg1 ;
-(NSUUID *)registeredUUID;
-(unsigned long long)useCount;
-(int)dupRegistrationFileDescriptor;
-(NSObject*<OS_dispatch_queue>)queue;
-(NSObject*<NWNetworkAgent>)networkAgent;
-(void)setRegisteredUUID:(NSUUID *)arg1 ;
-(BOOL)removeNetworkAgentFromInterfaceNamed:(id)arg1 ;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(BOOL)updateNetworkAgent:(id)arg1 ;
-(void)setRegistrationSocket:(int)arg1 ;
-(void)dealloc;
-(void)setNetworkAgent:(NSObject*<NWNetworkAgent>)arg1 ;
@end

