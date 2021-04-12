/*
* Generated on Monday, March 1, 2021 at 2:33:24 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NetworkServiceProxy.framework/NetworkServiceProxy
*/


@class NSData, NPTunnelTuscanyEndpoint, NSDictionary, NWEndpoint;

@interface NPFlowProperties : NSObject {

	unsigned _flowIdentifier;
	int _dataMode;
	unsigned _flags;
	unsigned long long _serviceID;
	double _fallbackTimeout;
	NSData* _requestData;
	NPTunnelTuscanyEndpoint* _replacementEndpoint;
	NSDictionary* _replacementAddressMap;
	NWEndpoint* _directEndpoint;
	unsigned long long* _timestamps;

}

@property (assign,nonatomic) unsigned flags;                                             //@synthesize flags=_flags - In the implementation block
@property (assign,nonatomic) unsigned long long serviceID;                               //@synthesize serviceID=_serviceID - In the implementation block
@property (assign,nonatomic) unsigned flowIdentifier;                                    //@synthesize flowIdentifier=_flowIdentifier - In the implementation block
@property (assign,nonatomic) double fallbackTimeout;                                     //@synthesize fallbackTimeout=_fallbackTimeout - In the implementation block
@property (assign,nonatomic) BOOL enableNSP; 
@property (nonatomic,retain) NSData * requestData;                                       //@synthesize requestData=_requestData - In the implementation block
@property (nonatomic,retain) NPTunnelTuscanyEndpoint * replacementEndpoint;              //@synthesize replacementEndpoint=_replacementEndpoint - In the implementation block
@property (nonatomic,retain) NSDictionary * replacementAddressMap;                       //@synthesize replacementAddressMap=_replacementAddressMap - In the implementation block
@property (assign,nonatomic) int dataMode;                                               //@synthesize dataMode=_dataMode - In the implementation block
@property (nonatomic,retain) NWEndpoint * directEndpoint;                                //@synthesize directEndpoint=_directEndpoint - In the implementation block
@property (assign,nonatomic) BOOL isLoopback; 
@property (assign,nonatomic) unsigned long long* timestamps;                             //@synthesize timestamps=_timestamps - In the implementation block
@property (assign,nonatomic) BOOL disableIdleTimeout; 
-(void)dealloc;
-(unsigned)flags;
-(unsigned long long*)timestamps;
-(void)setFlags:(unsigned)arg1 ;
-(int)dataMode;
-(void)setDataMode:(int)arg1 ;
-(NPTunnelTuscanyEndpoint *)replacementEndpoint;
-(void)setReplacementEndpoint:(NPTunnelTuscanyEndpoint *)arg1 ;
-(void)setRequestData:(NSData *)arg1 ;
-(NSData *)requestData;
-(void)setTimestamps:(unsigned long long*)arg1 ;
-(unsigned long long)serviceID;
-(unsigned)flowIdentifier;
-(void)setFlowIdentifier:(unsigned)arg1 ;
-(id)initWithTLVData:(id)arg1 ;
-(id)copyTLVData;
-(void)setServiceID:(unsigned long long)arg1 ;
-(void)setFallbackTimeout:(double)arg1 ;
-(void)setEnableNSP:(BOOL)arg1 ;
-(void)setReplacementAddressMap:(NSDictionary *)arg1 ;
-(NWEndpoint *)directEndpoint;
-(double)fallbackTimeout;
-(NSDictionary *)replacementAddressMap;
-(BOOL)enableNSP;
-(BOOL)isLoopback;
-(void)setIsLoopback:(BOOL)arg1 ;
-(BOOL)disableIdleTimeout;
-(void)setDisableIdleTimeout:(BOOL)arg1 ;
-(void)setDirectEndpoint:(NWEndpoint *)arg1 ;
@end

