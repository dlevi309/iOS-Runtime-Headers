/*
* Generated on Monday, March 1, 2021 at 2:31:32 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)dealloc;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSDate *)startDate;
-(id)initWithSample:(CLMetMinute)arg1 ;
-(id)initWithStartDate:(id)arg1 averageIntensity:(id)arg2 ;
-(NSNumber *)averageIntensity;
@end

