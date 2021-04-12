/*
* Generated on Thursday, January 14, 2021 at 2:25:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TimeSync.framework/TimeSync
*/

#import <TimeSync/TimeSync-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface TSGPSTime : NSObject <NSCopying> {

	unsigned long long _nanosecondsSinceEpoch;

}

@property (nonatomic,readonly) unsigned long long nanosecondsSinceEpoch;              //@synthesize nanosecondsSinceEpoch=_nanosecondsSinceEpoch - In the implementation block
@property (nonatomic,readonly) unsigned extendedWeek; 
@property (nonatomic,readonly) unsigned short week; 
@property (nonatomic,readonly) double seconds; 
@property (nonatomic,readonly) unsigned long long nanoseconds; 
-(unsigned short)week;
-(double)seconds;
-(unsigned long long)nanoseconds;
-(id)description;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithNanosecondsSinceEpoch:(unsigned long long)arg1 ;
-(unsigned long long)nanosecondsSinceEpoch;
-(id)initWithExtendedWeek:(unsigned)arg1 nanoseconds:(unsigned long long)arg2 ;
-(id)initWithExtendedWeek:(unsigned)arg1 seconds:(double)arg2 ;
-(unsigned)extendedWeek;
-(id)initWithWeek:(unsigned)arg1 seconds:(double)arg2 rollovers:(unsigned short)arg3 ;
-(id)initWithWeek:(unsigned)arg1 nanoseconds:(unsigned long long)arg2 rollovers:(unsigned short)arg3 ;
@end

