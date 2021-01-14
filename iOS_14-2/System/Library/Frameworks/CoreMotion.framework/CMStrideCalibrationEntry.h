/*
* Generated on Thursday, January 14, 2021 at 2:21:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
*/

#import <CoreMotion/CoreMotion-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface CMStrideCalibrationEntry : NSObject <NSSecureCoding, NSCopying> {

	SCD_Struct_CM72 _strideCalStruct;

}

@property (nonatomic,readonly) double startTime; 
@property (nonatomic,readonly) double endTime; 
@property (nonatomic,readonly) double distance; 
@property (nonatomic,readonly) int steps; 
@property (nonatomic,readonly) double speed; 
@property (nonatomic,readonly) double percentGrade; 
@property (nonatomic,readonly) long long gpsSource; 
+(BOOL)supportsSecureCoding;
-(int)steps;
-(double)speed;
-(double)score;
-(double)kvalue;
-(double)distance;
-(void)encodeWithCoder:(id)arg1 ;
-(int)session;
-(unsigned)pacebin;
-(long long)gpsSource;
-(double)kvalueTrack;
-(double)percentGrade;
-(id)description;
-(id)initWithCLStrideCalEntry:(SCD_Struct_CM72)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(double)endTime;
-(id)copyWithZone:(NSZone*)arg1 ;
-(double)startTime;
@end

