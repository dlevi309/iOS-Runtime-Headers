/*
* Generated on Monday, March 1, 2021 at 2:34:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WiFiVelocity.framework/WiFiVelocity
*/

#import <WiFiVelocity/WiFiVelocity-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface W5PingResult : NSObject <NSCopying, NSSecureCoding> {

	NSString* _address;
	NSString* _interfaceName;
	double _timeout;
	double _wait;
	double _interval;
	long long _count;
	long long _trafficClass;
	unsigned long long _dataLength;
	double _packetLoss;
	double _min;
	double _max;
	double _avg;
	double _stddev;
	NSString* _command;
	NSString* _output;
	double _startedAt;
	double _endedAt;

}

@property (nonatomic,copy) NSString * address;                           //@synthesize address=_address - In the implementation block
@property (nonatomic,copy) NSString * interfaceName;                     //@synthesize interfaceName=_interfaceName - In the implementation block
@property (assign,nonatomic) double timeout;                             //@synthesize timeout=_timeout - In the implementation block
@property (assign,nonatomic) double wait;                                //@synthesize wait=_wait - In the implementation block
@property (assign,nonatomic) double interval;                            //@synthesize interval=_interval - In the implementation block
@property (assign,nonatomic) long long count;                            //@synthesize count=_count - In the implementation block
@property (assign,nonatomic) long long trafficClass;                     //@synthesize trafficClass=_trafficClass - In the implementation block
@property (assign,nonatomic) unsigned long long dataLength;              //@synthesize dataLength=_dataLength - In the implementation block
@property (assign,nonatomic) double packetLoss;                          //@synthesize packetLoss=_packetLoss - In the implementation block
@property (assign,nonatomic) double min;                                 //@synthesize min=_min - In the implementation block
@property (assign,nonatomic) double max;                                 //@synthesize max=_max - In the implementation block
@property (assign,nonatomic) double avg;                                 //@synthesize avg=_avg - In the implementation block
@property (assign,nonatomic) double stddev;                              //@synthesize stddev=_stddev - In the implementation block
@property (nonatomic,copy) NSString * command;                           //@synthesize command=_command - In the implementation block
@property (nonatomic,copy) NSString * output;                            //@synthesize output=_output - In the implementation block
@property (assign,nonatomic) double timestamp; 
@property (assign,nonatomic) double startedAt;                           //@synthesize startedAt=_startedAt - In the implementation block
@property (assign,nonatomic) double endedAt;                             //@synthesize endedAt=_endedAt - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)dealloc;
-(BOOL)conformsToProtocol:(id)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)count;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setCount:(long long)arg1 ;
-(double)interval;
-(void)setInterval:(double)arg1 ;
-(double)wait;
-(NSString *)address;
-(double)timestamp;
-(void)setMax:(double)arg1 ;
-(double)max;
-(double)timeout;
-(void)setTimeout:(double)arg1 ;
-(void)setMin:(double)arg1 ;
-(double)min;
-(NSString *)interfaceName;
-(void)setInterfaceName:(NSString *)arg1 ;
-(void)setAddress:(NSString *)arg1 ;
-(void)setCommand:(NSString *)arg1 ;
-(void)setTrafficClass:(long long)arg1 ;
-(long long)trafficClass;
-(NSString *)command;
-(unsigned long long)dataLength;
-(NSString *)output;
-(void)setDataLength:(unsigned long long)arg1 ;
-(void)setOutput:(NSString *)arg1 ;
-(double)avg;
-(void)setAvg:(double)arg1 ;
-(void)setStddev:(double)arg1 ;
-(double)stddev;
-(double)startedAt;
-(double)endedAt;
-(void)setStartedAt:(double)arg1 ;
-(void)setEndedAt:(double)arg1 ;
-(void)setWait:(double)arg1 ;
-(void)setPacketLoss:(double)arg1 ;
-(double)packetLoss;
@end

