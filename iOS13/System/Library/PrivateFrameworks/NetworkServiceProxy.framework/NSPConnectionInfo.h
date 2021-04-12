/*
* Generated on Monday, March 1, 2021 at 2:33:24 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NetworkServiceProxy.framework/NetworkServiceProxy
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSDictionary, NSDate, NSArray;

@interface NSPConnectionInfo : NSObject <NSSecureCoding> {

	long long _fallbackReason;
	BOOL _isMultipath;
	BOOL _TFOSucceeded;
	BOOL _isTFOProbeSucceeded;
	long long _pathType;
	long long _fallbackReasonCategory;
	double _fallbackDelay;
	long long _edgeType;
	NSString* _edgeAddress;
	unsigned long long _multipathSubflowCount;
	unsigned long long _multipathConnectedSubflowCount;
	unsigned long long _multipathPrimarySubflowInterfaceIndex;
	NSDictionary* _multipathSubflowSwitchCounts;
	NSDictionary* _TCPInfo;
	NSDate* _firstTxByteTimeStamp;
	double _firstTxByteDelay;
	double _connectionDelay;
	long long _IPType;
	long long _interfaceType;
	unsigned long long _minimumRTT;
	double _timeIntervalSinceLastUsage;
	double _timeToFirstByte;
	long long _tunnelConnectionError;
	unsigned long long _initialBytesLeftOver;
	NSDictionary* _exceptions;
	NSString* _interfaceName;
	NSArray* _timingIntervals;

}

@property (assign,nonatomic) long long pathType;                                                    //@synthesize pathType=_pathType - In the implementation block
@property (assign,nonatomic) long long fallbackReason; 
@property (assign,nonatomic) double fallbackDelay;                                                  //@synthesize fallbackDelay=_fallbackDelay - In the implementation block
@property (assign,nonatomic) long long edgeType;                                                    //@synthesize edgeType=_edgeType - In the implementation block
@property (nonatomic,retain) NSString * edgeAddress;                                                //@synthesize edgeAddress=_edgeAddress - In the implementation block
@property (assign,nonatomic) BOOL isMultipath;                                                      //@synthesize isMultipath=_isMultipath - In the implementation block
@property (assign,nonatomic) unsigned long long multipathSubflowCount;                              //@synthesize multipathSubflowCount=_multipathSubflowCount - In the implementation block
@property (assign,nonatomic) unsigned long long multipathConnectedSubflowCount;                     //@synthesize multipathConnectedSubflowCount=_multipathConnectedSubflowCount - In the implementation block
@property (assign,nonatomic) unsigned long long multipathPrimarySubflowInterfaceIndex;              //@synthesize multipathPrimarySubflowInterfaceIndex=_multipathPrimarySubflowInterfaceIndex - In the implementation block
@property (nonatomic,retain) NSDictionary * multipathSubflowSwitchCounts;                           //@synthesize multipathSubflowSwitchCounts=_multipathSubflowSwitchCounts - In the implementation block
@property (nonatomic,retain) NSDictionary * TCPInfo;                                                //@synthesize TCPInfo=_TCPInfo - In the implementation block
@property (nonatomic,retain) NSDate * firstTxByteTimeStamp;                                         //@synthesize firstTxByteTimeStamp=_firstTxByteTimeStamp - In the implementation block
@property (assign,nonatomic) double firstTxByteDelay;                                               //@synthesize firstTxByteDelay=_firstTxByteDelay - In the implementation block
@property (assign,nonatomic) double connectionDelay;                                                //@synthesize connectionDelay=_connectionDelay - In the implementation block
@property (assign,nonatomic) BOOL TFOSucceeded;                                                     //@synthesize TFOSucceeded=_TFOSucceeded - In the implementation block
@property (assign,nonatomic) long long IPType;                                                      //@synthesize IPType=_IPType - In the implementation block
@property (assign,nonatomic) long long interfaceType;                                               //@synthesize interfaceType=_interfaceType - In the implementation block
@property (assign,nonatomic) unsigned long long minimumRTT;                                         //@synthesize minimumRTT=_minimumRTT - In the implementation block
@property (assign,nonatomic) double timeIntervalSinceLastUsage;                                     //@synthesize timeIntervalSinceLastUsage=_timeIntervalSinceLastUsage - In the implementation block
@property (nonatomic,retain) NSDictionary * exceptions;                                             //@synthesize exceptions=_exceptions - In the implementation block
@property (nonatomic,retain) NSString * interfaceName;                                              //@synthesize interfaceName=_interfaceName - In the implementation block
@property (nonatomic,retain) NSArray * timingIntervals;                                             //@synthesize timingIntervals=_timingIntervals - In the implementation block
@property (assign,nonatomic) double timeToFirstByte;                                                //@synthesize timeToFirstByte=_timeToFirstByte - In the implementation block
@property (assign,nonatomic) long long tunnelConnectionError;                                       //@synthesize tunnelConnectionError=_tunnelConnectionError - In the implementation block
@property (assign,nonatomic) BOOL isTFOProbeSucceeded;                                              //@synthesize isTFOProbeSucceeded=_isTFOProbeSucceeded - In the implementation block
@property (assign,nonatomic) unsigned long long initialBytesLeftOver;                               //@synthesize initialBytesLeftOver=_initialBytesLeftOver - In the implementation block
@property (nonatomic,readonly) long long fallbackReasonCategory;                                    //@synthesize fallbackReasonCategory=_fallbackReasonCategory - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)getFallbackReasonDescription:(long long)arg1 ;
+(int)fallbackReasonToErrno:(long long)arg1 ;
+(BOOL)shouldMoveToNextEdgeForFallbackReason:(long long)arg1 ;
+(BOOL)shouldResolveForFallbackReason:(long long)arg1 ;
-(id)copyDictionary;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)interfaceName;
-(void)setInterfaceName:(NSString *)arg1 ;
-(BOOL)isMultipath;
-(void)setEdgeType:(long long)arg1 ;
-(BOOL)TFOSucceeded;
-(unsigned long long)multipathSubflowCount;
-(unsigned long long)multipathConnectedSubflowCount;
-(unsigned long long)multipathPrimarySubflowInterfaceIndex;
-(NSDictionary *)multipathSubflowSwitchCounts;
-(NSDictionary *)TCPInfo;
-(void)setInterfaceType:(long long)arg1 ;
-(long long)interfaceType;
-(long long)pathType;
-(NSDictionary *)exceptions;
-(long long)fallbackReason;
-(void)setFallbackReason:(long long)arg1 ;
-(void)setPathType:(long long)arg1 ;
-(void)setFallbackDelay:(double)arg1 ;
-(void)setEdgeAddress:(NSString *)arg1 ;
-(void)setIsMultipath:(BOOL)arg1 ;
-(void)setMultipathSubflowCount:(unsigned long long)arg1 ;
-(void)setMultipathConnectedSubflowCount:(unsigned long long)arg1 ;
-(void)setMultipathPrimarySubflowInterfaceIndex:(unsigned long long)arg1 ;
-(void)setFirstTxByteTimeStamp:(NSDate *)arg1 ;
-(void)setFirstTxByteDelay:(double)arg1 ;
-(void)setConnectionDelay:(double)arg1 ;
-(void)setIPType:(long long)arg1 ;
-(void)setMinimumRTT:(unsigned long long)arg1 ;
-(void)setTimeIntervalSinceLastUsage:(double)arg1 ;
-(void)setTimeToFirstByte:(double)arg1 ;
-(void)setTunnelConnectionError:(long long)arg1 ;
-(void)setIsTFOProbeSucceeded:(BOOL)arg1 ;
-(void)setInitialBytesLeftOver:(unsigned long long)arg1 ;
-(long long)fallbackReasonCategory;
-(double)fallbackDelay;
-(long long)edgeType;
-(NSString *)edgeAddress;
-(NSDate *)firstTxByteTimeStamp;
-(double)firstTxByteDelay;
-(double)connectionDelay;
-(long long)IPType;
-(unsigned long long)minimumRTT;
-(double)timeIntervalSinceLastUsage;
-(double)timeToFirstByte;
-(long long)tunnelConnectionError;
-(BOOL)isTFOProbeSucceeded;
-(unsigned long long)initialBytesLeftOver;
-(void)setMultipathSubflowSwitchCounts:(NSDictionary *)arg1 ;
-(void)setTCPInfo:(NSDictionary *)arg1 ;
-(void)setTFOSucceeded:(BOOL)arg1 ;
-(NSArray *)timingIntervals;
-(id)timingIntervalAtIndex:(unsigned long long)arg1 forKey:(id)arg2 ;
-(void)setExceptions:(NSDictionary *)arg1 ;
-(void)setTimingIntervals:(NSArray *)arg1 ;
@end

