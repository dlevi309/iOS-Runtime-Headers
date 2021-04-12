/*
* Generated on Monday, March 1, 2021 at 2:33:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TimeSync.framework/TimeSync
*/

#import <TimeSync/TimeSync-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSDate, TSGPSTime, TSgPTPTime;

@interface TSTime : NSObject <NSCopying> {

	BOOL _initedWithgPTP;
	unsigned long long _grandmasterIdentity;
	unsigned short _localPortNumber;
	BOOL _timeTraceable;
	BOOL _frequencyTraceable;
	unsigned long long _nanosecondsSinceEpoch;

}

@property (nonatomic,readonly) unsigned long long nanosecondsSinceEpoch;              //@synthesize nanosecondsSinceEpoch=_nanosecondsSinceEpoch - In the implementation block
@property (nonatomic,copy,readonly) NSDate * utcDate; 
@property (nonatomic,copy,readonly) NSDate * taiDate; 
@property (nonatomic,copy,readonly) TSGPSTime * gpsTime; 
@property (nonatomic,copy,readonly) TSgPTPTime * gPTPTime; 
+(id)timeConverter;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSDate *)utcDate;
-(id)initWithUTCDate:(id)arg1 ;
-(id)initWithTAIDate:(id)arg1 ;
-(id)initWithNanosecondsSinceEpoch:(unsigned long long)arg1 ;
-(unsigned long long)nanosecondsSinceEpoch;
-(NSDate *)taiDate;
-(id)initWithGPSTime:(id)arg1 ;
-(id)initWithgPTPTime:(id)arg1 ;
-(TSGPSTime *)gpsTime;
-(TSgPTPTime *)gPTPTime;
-(long long)nanosecondsSinceTime:(id)arg1 ;
-(id)timeByAddingNanoseconds:(long long)arg1 ;
@end

