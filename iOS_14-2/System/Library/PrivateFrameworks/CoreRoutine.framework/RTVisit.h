/*
* Generated on Thursday, January 14, 2021 at 2:23:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreRoutine.framework/CoreRoutine
*/

#import <CoreRoutine/CoreRoutine-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSDate, RTLocation, RTPlaceInference;

@interface RTVisit : NSObject <NSSecureCoding, NSCopying> {

	NSDate* _date;
	long long _type;
	RTLocation* _location;
	NSDate* _entry;
	NSDate* _exit;
	double _confidence;
	RTPlaceInference* _placeInference;
	long long _dataPointCount;

}

@property (nonatomic,retain) RTPlaceInference * placeInference;              //@synthesize placeInference=_placeInference - In the implementation block
@property (nonatomic,readonly) long long dataPointCount;                     //@synthesize dataPointCount=_dataPointCount - In the implementation block
@property (nonatomic,copy,readonly) NSDate * date;                           //@synthesize date=_date - In the implementation block
@property (nonatomic,readonly) long long type;                               //@synthesize type=_type - In the implementation block
@property (nonatomic,copy,readonly) RTLocation * location;                   //@synthesize location=_location - In the implementation block
@property (nonatomic,copy,readonly) NSDate * entry;                          //@synthesize entry=_entry - In the implementation block
@property (nonatomic,copy,readonly) NSDate * exit;                           //@synthesize exit=_exit - In the implementation block
@property (nonatomic,readonly) double confidence;                            //@synthesize confidence=_confidence - In the implementation block
+(BOOL)supportsSecureCoding;
+(long long)visitIncidentTypeFromString:(id)arg1 ;
+(id)stringFromVisitIncidentType:(long long)arg1 ;
-(NSDate *)exit;
-(double)confidence;
-(long long)dataPointCount;
-(id)init;
-(RTLocation *)location;
-(void)encodeWithCoder:(id)arg1 ;
-(NSDate *)entry;
-(id)initWithDate:(id)arg1 type:(long long)arg2 location:(id)arg3 entry:(id)arg4 exit:(id)arg5 dataPointCount:(long long)arg6 confidence:(double)arg7 placeInference:(id)arg8 ;
-(RTPlaceInference *)placeInference;
-(BOOL)isEqualToVisit:(id)arg1 ;
-(void)setPlaceInference:(RTPlaceInference *)arg1 ;
-(id)description;
-(long long)type;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(NSDate *)date;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

