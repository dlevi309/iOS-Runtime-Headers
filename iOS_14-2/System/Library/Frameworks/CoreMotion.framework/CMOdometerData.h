/*
* Generated on Thursday, January 14, 2021 at 2:21:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
*/

#import <CoreMotion/CoreMotion-Structs.h>
#import <libobjc.A.dylib/SRSampling.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSDate, NSNumber, NSString;

@interface CMOdometerData : NSObject <SRSampling, NSSecureCoding, NSCopying> {

	NSDate* _startDate;
	NSDate* _endDate;
	NSNumber* _distance;
	NSNumber* _currentSpeed;
	NSNumber* _averageSpeed;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSDate * startDate;                   //@synthesize startDate=_startDate - In the implementation block
@property (nonatomic,readonly) NSDate * endDate;                     //@synthesize endDate=_endDate - In the implementation block
@property (nonatomic,readonly) NSNumber * distance;                  //@synthesize distance=_distance - In the implementation block
@property (nonatomic,readonly) NSNumber * currentSpeed;              //@synthesize currentSpeed=_currentSpeed - In the implementation block
@property (nonatomic,readonly) NSNumber * averageSpeed;              //@synthesize averageSpeed=_averageSpeed - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSDate *)endDate;
-(NSNumber *)currentSpeed;
-(NSNumber *)averageSpeed;
-(id)initWithDistance:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 currentSpeed:(id)arg4 averageSpeed:(id)arg5 ;
-(NSNumber *)distance;
-(NSDate *)startDate;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)description;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithBinarySampleRepresentation:(id)arg1 metadata:(id)arg2 timestamp:(double)arg3 ;
-(id)binarySampleRepresentation;
-(void)dealloc;
@end

