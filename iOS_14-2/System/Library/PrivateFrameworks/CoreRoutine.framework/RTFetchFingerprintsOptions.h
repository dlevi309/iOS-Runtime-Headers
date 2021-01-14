/*
* Generated on Thursday, January 14, 2021 at 2:23:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreRoutine.framework/CoreRoutine
*/

#import <CoreRoutine/CoreRoutine-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDateInterval;

@interface RTFetchFingerprintsOptions : NSObject <NSCopying, NSSecureCoding> {

	NSDateInterval* _dateInterval;
	unsigned long long _settledState;

}

@property (nonatomic,copy) NSDateInterval * dateInterval;                  //@synthesize dateInterval=_dateInterval - In the implementation block
@property (assign,nonatomic) unsigned long long settledState;              //@synthesize settledState=_settledState - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSDateInterval *)dateInterval;
-(void)setDateInterval:(NSDateInterval *)arg1 ;
-(id)init;
-(BOOL)isEqualToOptions:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setSettledState:(unsigned long long)arg1 ;
-(id)description;
-(id)initWithDateInterval:(id)arg1 settledState:(unsigned long long)arg2 ;
-(unsigned long long)settledState;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

