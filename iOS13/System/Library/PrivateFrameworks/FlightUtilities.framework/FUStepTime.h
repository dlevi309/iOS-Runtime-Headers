/*
* Generated on Monday, March 1, 2021 at 2:32:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/FlightUtilities.framework/FlightUtilities
*/

#import <FlightUtilities/FlightUtilities-Structs.h>
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
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)type;
-(void)setType:(unsigned long long)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSDate *)date;
-(double)timeIntervalSinceNow;
-(void)setDate:(NSDate *)arg1 ;
-(id)initWithType:(unsigned long long)arg1 date:(id)arg2 ;
@end

