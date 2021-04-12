/*
* Generated on Monday, March 1, 2021 at 2:33:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned short)week;
-(unsigned long long)nanoseconds;
-(double)seconds;
-(id)initWithNanosecondsSinceEpoch:(unsigned long long)arg1 ;
-(unsigned long long)nanosecondsSinceEpoch;
-(id)initWithExtendedWeek:(unsigned)arg1 nanoseconds:(unsigned long long)arg2 ;
-(id)initWithExtendedWeek:(unsigned)arg1 seconds:(double)arg2 ;
-(unsigned)extendedWeek;
-(id)initWithWeek:(unsigned)arg1 seconds:(double)arg2 rollovers:(unsigned short)arg3 ;
-(id)initWithWeek:(unsigned)arg1 nanoseconds:(unsigned long long)arg2 rollovers:(unsigned short)arg3 ;
@end

