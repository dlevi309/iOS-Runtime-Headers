/*
* Generated on Thursday, January 14, 2021 at 2:27:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/FlightUtilitiesCore.framework/FlightUtilitiesCore
*/

#import <FlightUtilitiesCore/FlightUtilitiesCore-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSDate;

@interface FUStepTime : NSObject <NSSecureCoding, NSCopying> {

	unsigned long long _type;
	NSDate* _date;

}

@property (assign) unsigned long long type;                    //@synthesize type=_type - In the implementation block
@property (retain) NSDate * date;                              //@synthesize date=_date - In the implementation block
@property (readonly) double timeIntervalSinceNow; 
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setDate:(NSDate *)arg1 ;
-(void)setType:(unsigned long long)arg1 ;
-(id)description;
-(unsigned long long)type;
-(id)initWithCoder:(id)arg1 ;
-(NSDate *)date;
-(double)timeIntervalSinceNow;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithType:(unsigned long long)arg1 date:(id)arg2 ;
@end

