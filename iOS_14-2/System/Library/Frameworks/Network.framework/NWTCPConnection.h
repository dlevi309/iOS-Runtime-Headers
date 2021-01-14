/*
* Generated on Thursday, January 14, 2021 at 2:22:58 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NWParameters *)parameters;
-(void)setInternalConnection:(NSObject*<OS_nw_connection>)arg1 ;
-(NSString *)privateDescription;
-(id<NWTCPConnectionAuthenticationDelegate>)delegate;
-(NWEndpoint *)remoteAddress;
-(id)initWithEndpoint:(id)arg1 parameters:(id)arg2 delegate:(id)arg3 ;
-(NWEndpoint *)localAddress;
-(void)setEndpoint:(NWEndpoint *)arg1 ;
-(id)initWithEndpoint:(id)arg1 parameters:(id)arg2 ;
-(NWEndpoint *)endpoint;
-(NSData *)txtRecord;
-(id)descriptionWithIndent:(int)arg1 showFullContent:(BOOL)arg2 ;
-(NSError *)error;
-(void)setDelegate:(id<NWTCPConnectionAuthenticationDelegate>)arg1 ;
-(BOOL)isViable;
-(id)description;
-(NSDictionary *)TCPInfo;
-(unsigned long long)multipathSubflowCount;
-(unsigned long long)multipathConnectedSubflowCount;
-(int)multipathPrimarySubflowInterfaceIndex;
-(NSDictionary *)multipathSubflowSwitchCounts;
-(void)setState:(long long)arg1 ;
-(long long)state;
-(NSError *)internalError;
-(BOOL)isMultipath;
-(NSData *)metadata;
-(void)cancel;
-(void)dealloc;
-(void)writeClose;
-(NWPath *)connectedPath;
-(id)initWithAcceptedInternalConnection:(id)arg1 ;
-(id)initWithUpgradeForConnection:(id)arg1 ;
-(void)readLength:(unsigned long long)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)readMinimumLength:(unsigned long long)arg1 maximumLength:(unsigned long long)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)write:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)handleIdentityRequestWithMetadata:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)handlePeerCertificateTrustEvaluationWithMetadata:(id)arg1 trust:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)setupEventHandler;
-(BOOL)startInternal;
-(BOOL)fillOutTCPConnectionInfo:(tcp_connection_info*)arg1 ;
-(BOOL)TFOSucceeded;
-(void)setViable:(BOOL)arg1 ;
-(BOOL)hasBetterPath;
-(void)setHasBetterPath:(BOOL)arg1 ;
-(void)setInternalError:(NSError *)arg1 ;
-(NSObject*<OS_nw_connection>)internalConnection;
@end

