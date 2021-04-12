/*
* Generated on Monday, March 1, 2021 at 2:30:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Network.framework/Network
*/

#import <Network/Network-Structs.h>
#import <libobjc.A.dylib/NWPrettyDescription.h>

@protocol OS_nw_connection, NWTCPConnectionAuthenticationDelegate;
@class NWEndpoint, NSError, NSObject, NWParameters, NSString, NSDictionary, NSData, NWPath;

@interface NWTCPConnection : NSObject <NWPrettyDescription> {

	BOOL _viable;
	BOOL _hasBetterPath;
	long long _state;
	NWEndpoint* _endpoint;
	NSError* _internalError;
	NSObject*<OS_nw_connection> _internalConnection;
	id<NWTCPConnectionAuthenticationDelegate> _delegate;
	NWParameters* _parameters;

}

@property (nonatomic,retain) NWEndpoint * endpoint;                                            //@synthesize endpoint=_endpoint - In the implementation block
@property (retain) NSError * internalError;                                                    //@synthesize internalError=_internalError - In the implementation block
@property (retain) NSObject*<OS_nw_connection> internalConnection;                             //@synthesize internalConnection=_internalConnection - In the implementation block
@property (assign,nonatomic) long long state;                                                  //@synthesize state=_state - In the implementation block
@property (assign,getter=isViable,nonatomic) BOOL viable;                                      //@synthesize viable=_viable - In the implementation block
@property (assign,nonatomic) BOOL hasBetterPath;                                               //@synthesize hasBetterPath=_hasBetterPath - In the implementation block
@property (__weak) id<NWTCPConnectionAuthenticationDelegate> delegate;                         //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) NWParameters * parameters;                                      //@synthesize parameters=_parameters - In the implementation block
@property (nonatomic,copy,readonly) NSString * privateDescription; 
@property (nonatomic,readonly) BOOL TFOSucceeded; 
@property (nonatomic,readonly) BOOL isMultipath; 
@property (nonatomic,readonly) unsigned long long multipathSubflowCount; 
@property (nonatomic,readonly) unsigned long long multipathConnectedSubflowCount; 
@property (nonatomic,readonly) int multipathPrimarySubflowInterfaceIndex; 
@property (nonatomic,readonly) NSDictionary * multipathSubflowSwitchCounts; 
@property (nonatomic,readonly) NSDictionary * TCPInfo; 
@property (nonatomic,readonly) NSData * metadata; 
@property (nonatomic,readonly) NWPath * connectedPath; 
@property (nonatomic,readonly) NWEndpoint * localAddress; 
@property (nonatomic,readonly) NWEndpoint * remoteAddress; 
@property (nonatomic,readonly) NSData * txtRecord; 
@property (nonatomic,readonly) NSError * error; 
+(BOOL)automaticallyNotifiesObserversForKey:(id)arg1 ;
+(id)stringFromNWTCPConnectionState:(long long)arg1 ;
-(void)dealloc;
-(id)description;
-(id<NWTCPConnectionAuthenticationDelegate>)delegate;
-(void)setDelegate:(id<NWTCPConnectionAuthenticationDelegate>)arg1 ;
-(NSError *)error;
-(void)cancel;
-(NWEndpoint *)endpoint;
-(long long)state;
-(void)setState:(long long)arg1 ;
-(NWParameters *)parameters;
-(void)setEndpoint:(NWEndpoint *)arg1 ;
-(NSData *)metadata;
-(id)initWithEndpoint:(id)arg1 parameters:(id)arg2 ;
-(BOOL)isMultipath;
-(NWEndpoint *)localAddress;
-(NWEndpoint *)remoteAddress;
-(id)descriptionWithIndent:(int)arg1 showFullContent:(BOOL)arg2 ;
-(id)initWithAcceptedInternalConnection:(id)arg1 ;
-(id)initWithEndpoint:(id)arg1 parameters:(id)arg2 delegate:(id)arg3 ;
-(id)initWithUpgradeForConnection:(id)arg1 ;
-(NSString *)privateDescription;
-(NWPath *)connectedPath;
-(NSData *)txtRecord;
-(void)readLength:(unsigned long long)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)readMinimumLength:(unsigned long long)arg1 maximumLength:(unsigned long long)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)write:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)writeClose;
-(void)handlePeerCertificateTrustEvaluationWithMetadata:(id)arg1 trust:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)handleIdentityRequestWithMetadata:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)setupEventHandler;
-(BOOL)startInternal;
-(BOOL)fillOutTCPConnectionInfo:(tcp_connection_info*)arg1 ;
-(BOOL)TFOSucceeded;
-(unsigned long long)multipathSubflowCount;
-(unsigned long long)multipathConnectedSubflowCount;
-(int)multipathPrimarySubflowInterfaceIndex;
-(NSDictionary *)multipathSubflowSwitchCounts;
-(NSDictionary *)TCPInfo;
-(BOOL)isViable;
-(void)setViable:(BOOL)arg1 ;
-(BOOL)hasBetterPath;
-(void)setHasBetterPath:(BOOL)arg1 ;
-(NSError *)internalError;
-(void)setInternalError:(NSError *)arg1 ;
-(NSObject*<OS_nw_connection>)internalConnection;
-(void)setInternalConnection:(NSObject*<OS_nw_connection>)arg1 ;
@end

