/*
* Generated on Monday, March 1, 2021 at 2:33:24 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NetworkServiceProxy.framework/NetworkServiceProxy
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NPTunnelTuscanyEndpoint, NSData, NSUUID, NSDate, NWEndpoint, NWNetworkAgentRegistration, NSPKeyNetworkAgent, NPWaldo, NSURLSession, NSString, NSDictionary;

@interface NPTuscanyOnRamp : NSObject <NSSecureCoding> {

	BOOL _dayPassFailed;
	BOOL _dayPassPending;
	int _error;
	NPTunnelTuscanyEndpoint* _tuscanyEndpoint;
	NSData* _dayPass;
	NSUUID* _dayPassUUID;
	unsigned long long _maxFrameSize;
	long long _TFOStatus;
	unsigned long long _rtt;
	long long _currentEdgeType;
	NSDate* _dayPassCreationDate;
	NWEndpoint* _daypassEndpoint;
	NSDate* _retryDate;
	double _dayPassHardExpiry;
	NWNetworkAgentRegistration* _agentRegistration;
	NSPKeyNetworkAgent* _agent;
	NPWaldo* _parentWaldo;
	NSURLSession* _dayPassSession;

}

@property (readonly) BOOL isDayPassExpired; 
@property (readonly) NWEndpoint * daypassEndpoint;                              //@synthesize daypassEndpoint=_daypassEndpoint - In the implementation block
@property (retain) NPTunnelTuscanyEndpoint * tuscanyEndpoint;                   //@synthesize tuscanyEndpoint=_tuscanyEndpoint - In the implementation block
@property (retain) NSDate * retryDate;                                          //@synthesize retryDate=_retryDate - In the implementation block
@property (retain) NSUUID * dayPassUUID;                                        //@synthesize dayPassUUID=_dayPassUUID - In the implementation block
@property (retain) NSData * dayPass;                                            //@synthesize dayPass=_dayPass - In the implementation block
@property (retain) NSDate * dayPassCreationDate;                                //@synthesize dayPassCreationDate=_dayPassCreationDate - In the implementation block
@property (assign) unsigned dayPassSessionCounter; 
@property (assign) double dayPassHardExpiry;                                    //@synthesize dayPassHardExpiry=_dayPassHardExpiry - In the implementation block
@property (retain) NWNetworkAgentRegistration * agentRegistration;              //@synthesize agentRegistration=_agentRegistration - In the implementation block
@property (retain) NSPKeyNetworkAgent * agent;                                  //@synthesize agent=_agent - In the implementation block
@property (__weak) NPWaldo * parentWaldo;                                       //@synthesize parentWaldo=_parentWaldo - In the implementation block
@property (assign) BOOL dayPassFailed;                                          //@synthesize dayPassFailed=_dayPassFailed - In the implementation block
@property (retain) NSURLSession * dayPassSession;                               //@synthesize dayPassSession=_dayPassSession - In the implementation block
@property (readonly) BOOL dayPassRefreshAllowed; 
@property (assign) BOOL dayPassPending;                                         //@synthesize dayPassPending=_dayPassPending - In the implementation block
@property (assign) long long TFOStatus;                                         //@synthesize TFOStatus=_TFOStatus - In the implementation block
@property (readonly) unsigned long long maxFrameSize;                           //@synthesize maxFrameSize=_maxFrameSize - In the implementation block
@property (readonly) unsigned long long rtt;                                    //@synthesize rtt=_rtt - In the implementation block
@property (readonly) NSString * shortDescription; 
@property (readonly) long long currentEdgeType;                                 //@synthesize currentEdgeType=_currentEdgeType - In the implementation block
@property (assign) int error;                                                   //@synthesize error=_error - In the implementation block
@property (readonly) BOOL isTFOEnabled; 
@property (readonly) NSDictionary * descriptionDictionary; 
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(int)error;
-(void)setError:(int)arg1 ;
-(id)initWithKey:(id)arg1 ;
-(id)initWithEndpoint:(id)arg1 ;
-(NSString *)shortDescription;
-(unsigned long long)rtt;
-(NSPKeyNetworkAgent *)agent;
-(void)setAgent:(NSPKeyNetworkAgent *)arg1 ;
-(NSDictionary *)descriptionDictionary;
-(NSUUID *)dayPassUUID;
-(void)setDayPassUUID:(NSUUID *)arg1 ;
-(unsigned long long)maxFrameSize;
-(unsigned)dayPassSessionCounter;
-(NSDate *)dayPassCreationDate;
-(long long)TFOStatus;
-(void)setTFOStatus:(long long)arg1 ;
-(BOOL)isTFOEnabled;
-(NWNetworkAgentRegistration *)agentRegistration;
-(void)setAgentRegistration:(NWNetworkAgentRegistration *)arg1 ;
-(NPTunnelTuscanyEndpoint *)tuscanyEndpoint;
-(NSData *)dayPass;
-(long long)currentEdgeType;
-(unsigned)getNextSessionCounter;
-(BOOL)isDayPassExpired;
-(NPWaldo *)parentWaldo;
-(void)updateSessionCounterFromKernel;
-(void)setDayPassSessionCounter:(unsigned)arg1 ;
-(unsigned)copyValue:(void*)arg1 ofSize:(unsigned)arg2 fromOffset:(unsigned)arg3 base:(const char*)arg4 totalLength:(unsigned)arg5 ;
-(void)setDayPass:(NSData *)arg1 ;
-(void)setTuscanyEndpoint:(NPTunnelTuscanyEndpoint *)arg1 ;
-(NSURLSession *)dayPassSession;
-(void)setDayPassSession:(NSURLSession *)arg1 ;
-(void)setParentWaldo:(NPWaldo *)arg1 ;
-(NSDate *)retryDate;
-(void)setRetryDate:(NSDate *)arg1 ;
-(NWEndpoint *)daypassEndpoint;
-(BOOL)fillTestDaypass;
-(void)invalidateDayPass;
-(double)dayPassHardExpiry;
-(BOOL)dayPassFailed;
-(BOOL)isDayPassPastExpiry:(double)arg1 ;
-(void)unregisterAgent;
-(BOOL)registerAgentWithKey:(id)arg1 ;
-(id)getTuscanyEndpoint:(id)arg1 ;
-(void)resetParentWaldo:(id)arg1 ;
-(BOOL)dayPassRefreshAllowed;
-(void)refreshDayPassWithWaldoDelegate:(id)arg1 softExpiry:(double)arg2 retryInterval:(double)arg3 edge:(id)arg4 completionHandler:(/*^block*/id)arg5 ;
-(void)setDayPassCreationDate:(NSDate *)arg1 ;
-(void)setDayPassHardExpiry:(double)arg1 ;
-(void)setDayPassFailed:(BOOL)arg1 ;
-(BOOL)dayPassPending;
-(void)setDayPassPending:(BOOL)arg1 ;
@end

