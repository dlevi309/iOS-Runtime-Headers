/*
* Generated on Monday, March 1, 2021 at 2:31:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreRoutine.framework/CoreRoutine
*/

#import <CoreRoutine/CoreRoutine-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSDate, RTLocation;

@interface RTVisit : NSObject <NSSecureCoding, NSCopying> {

	NSDate* _date;
	long long _type;
	RTLocation* _location;
	NSDate* _entry;
	NSDate* _exit;
	double _confidence;
	long long _dataPointCount;

}

@property (nonatomic,readonly) long long dataPointCount;                //@synthesize dataPointCount=_dataPointCount - In the implementation block
@property (nonatomic,copy,readonly) NSDate * date;                      //@synthesize date=_date - In the implementation block
@property (nonatomic,readonly) long long type;                          //@synthesize type=_type - In the implementation block
@property (nonatomic,copy,readonly) RTLocation * location;              //@synthesize location=_location - In the implementation block
@property (nonatomic,copy,readonly) NSDate * entry;                     //@synthesize entry=_entry - In the implementation block
@property (nonatomic,copy,readonly) NSDate * exit;                      //@synthesize exit=_exit - In the implementation block
@property (nonatomic,readonly) double confidence;                       //@synthesize confidence=_confidence - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)stringFromVisitIncidentType:(long long)arg1 ;
+(long long)visitIncidentTypeFromString:(id)arg1 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)type;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSDate *)date;
-(NSDate *)exit;
-(double)confidence;
-(RTLocation *)location;
-(BOOL)isEqualToVisit:(id)arg1 ;
-(long long)dataPointCount;
-(NSDate *)entry;
-(id)initWithDate:(id)arg1 type:(long long)arg2 location:(id)arg3 entry:(id)arg4 exit:(id)arg5 dataPointCount:(long long)arg6 confidence:(double)arg7 ;
@end

