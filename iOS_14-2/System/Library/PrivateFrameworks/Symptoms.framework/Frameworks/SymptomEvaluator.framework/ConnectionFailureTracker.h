/*
* Generated on Thursday, January 14, 2021 at 2:24:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomEvaluator.framework/SymptomEvaluator
*/


@class NSString, NSData, NSMutableArray;

@interface ConnectionFailureTracker : NSObject {

	BOOL _isIPv6;
	int _numConsecutiveFailures;
	unsigned _ifIndex;
	double _firstConnectionFailTime;
	double _lastConnectionFailTime;
	NSString* _processName;
	long long _ifType;
	NSData* _destinationAddress;
	NSMutableArray* _failedFlows;

}

@property (assign,nonatomic) int numConsecutiveFailures;                  //@synthesize numConsecutiveFailures=_numConsecutiveFailures - In the implementation block
@property (assign,nonatomic) double firstConnectionFailTime;              //@synthesize firstConnectionFailTime=_firstConnectionFailTime - In the implementation block
@property (assign,nonatomic) double lastConnectionFailTime;               //@synthesize lastConnectionFailTime=_lastConnectionFailTime - In the implementation block
@property (nonatomic,retain) NSString * processName;                      //@synthesize processName=_processName - In the implementation block
@property (assign,nonatomic) BOOL isIPv6;                                 //@synthesize isIPv6=_isIPv6 - In the implementation block
@property (assign,nonatomic) unsigned ifIndex;                            //@synthesize ifIndex=_ifIndex - In the implementation block
@property (assign,nonatomic) long long ifType;                            //@synthesize ifType=_ifType - In the implementation block
@property (nonatomic,retain) NSData * destinationAddress;                 //@synthesize destinationAddress=_destinationAddress - In the implementation block
@property (nonatomic,retain) NSMutableArray * failedFlows;                //@synthesize failedFlows=_failedFlows - In the implementation block
-(void)setProcessName:(NSString *)arg1 ;
-(void)setIfIndex:(unsigned)arg1 ;
-(long long)ifType;
-(int)numConsecutiveFailures;
-(unsigned)ifIndex;
-(NSString *)processName;
-(void)_logFailure;
-(BOOL)isIPv6;
-(id)description;
-(void)setNumConsecutiveFailures:(int)arg1 ;
-(void)setLastConnectionFailTime:(double)arg1 ;
-(void)setDestinationAddress:(NSData *)arg1 ;
-(void)setIfType:(long long)arg1 ;
-(void)setFailedFlows:(NSMutableArray *)arg1 ;
-(BOOL)noteInitialSnapshot:(id)arg1 ;
-(void)setIsIPv6:(BOOL)arg1 ;
-(void)setFirstConnectionFailTime:(double)arg1 ;
-(NSMutableArray *)failedFlows;
-(NSData *)destinationAddress;
-(double)firstConnectionFailTime;
-(void)_reportFailure:(unsigned long long)arg1 owner:(id)arg2 ;
-(double)lastConnectionFailTime;
@end

