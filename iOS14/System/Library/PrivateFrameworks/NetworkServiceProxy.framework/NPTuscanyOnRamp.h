/*
* Generated on Thursday, January 14, 2021 at 2:28:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(long long)TFOStatus;
-(NSData *)dayPass;
-(NPWaldo *)parentWaldo;
-(unsigned long long)rtt;
-(void)setParentWaldo:(NPWaldo *)arg1 ;
-(void)resetParentWaldo:(id)arg1 ;
-(NSDictionary *)descriptionDictionary;
-(BOOL)dayPassPending;
-(unsigned)copyValue:(void*)arg1 ofSize:(unsigned)arg2 fromOffset:(unsigned)arg3 base:(const char*)arg4 totalLength:(unsigned)arg5 ;
-(BOOL)isTFOEnabled;
-(NWNetworkAgentRegistration *)agentRegistration;
-(void)setDayPassSessionCounter:(unsigned)arg1 ;
-(void)setTFOStatus:(long long)arg1 ;
-(NSPKeyNetworkAgent *)agent;
-(void)setAgentRegistration:(NWNetworkAgentRegistration *)arg1 ;
-(void)setAgent:(NSPKeyNetworkAgent *)arg1 ;
-(id)initWithKey:(id)arg1 ;
-(BOOL)isDayPassExpired;
-(void)setDayPass:(NSData *)arg1 ;
-(id)initWithEndpoint:(id)arg1 ;
-(NPTunnelTuscanyEndpoint *)tuscanyEndpoint;
-(NSUUID *)dayPassUUID;
-(void)setDayPassUUID:(NSUUID *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)dayPassFailed;
-(NSString *)shortDescription;
-(void)setError:(int)arg1 ;
-(int)error;
-(void)updateSessionCounterFromKernel;
-(void)setDayPassPending:(BOOL)arg1 ;
-(BOOL)isDayPassPastExpiry:(double)arg1 ;
-(NSDate *)dayPassCreationDate;
-(unsigned long long)maxFrameSize;
-(void)setDayPassHardExpiry:(double)arg1 ;
-(id)description;
-(long long)currentEdgeType;
-(void)setTuscanyEndpoint:(NPTunnelTuscanyEndpoint *)arg1 ;
-(void)setDayPassFailed:(BOOL)arg1 ;
-(double)dayPassHardExpiry;
-(void)setRetryDate:(NSDate *)arg1 ;
-(unsigned)getNextSessionCounter;
-(void)setDayPassCreationDate:(NSDate *)arg1 ;
-(NSURLSession *)dayPassSession;
-(BOOL)registerAgentWithKey:(id)arg1 ;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)dayPassRefreshAllowed;
-(NWEndpoint *)daypassEndpoint;
-(NSDate *)retryDate;
-(void)setDayPassSession:(NSURLSession *)arg1 ;
-(id)getTuscanyEndpoint:(id)arg1 ;
-(BOOL)fillTestDaypass;
-(void)invalidateDayPass;
-(void)refreshDayPassWithWaldoDelegate:(id)arg1 softExpiry:(double)arg2 retryInterval:(double)arg3 edge:(id)arg4 completionHandler:(/*^block*/id)arg5 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)unregisterAgent;
-(unsigned)dayPassSessionCounter;
@end

