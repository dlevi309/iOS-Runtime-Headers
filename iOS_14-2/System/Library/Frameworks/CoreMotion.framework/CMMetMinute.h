/*
* Generated on Thursday, January 14, 2021 at 2:21:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
*/

#import <CoreMotion/CoreMotion-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSDate, NSNumber;

@interface CMMetMinute : NSObject <NSSecureCoding, NSCopying> {

	NSDate* fStartDate;
	NSNumber* fAverageIntensity;

}

@property (nonatomic,readonly) NSDate * startDate; 
@property (nonatomic,readonly) NSNumber * averageIntensity; 
+(BOOL)supportsSecureCoding;
-(NSDate *)startDate;
-(id)initWithSample:(CLMetMinute)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(id)initWithStartDate:(id)arg1 averageIntensity:(id)arg2 ;
-(NSNumber *)averageIntensity;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
@end

