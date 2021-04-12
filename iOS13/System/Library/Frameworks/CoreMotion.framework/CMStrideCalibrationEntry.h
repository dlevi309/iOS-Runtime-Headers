/*
* Generated on Monday, March 1, 2021 at 2:31:32 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
*/

#import <CoreMotion/CoreMotion-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface CMStrideCalibrationEntry : NSObject <NSSecureCoding, NSCopying> {

	SCD_Struct_CM361 _strideCalStruct;

}

@property (nonatomic,readonly) double startTime; 
@property (nonatomic,readonly) double endTime; 
@property (nonatomic,readonly) double distance; 
@property (nonatomic,readonly) int steps; 
@property (nonatomic,readonly) double speed; 
@property (nonatomic,readonly) double percentGrade; 
@property (nonatomic,readonly) long long gpsSource; 
+(BOOL)supportsSecureCoding;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(double)score;
-(int)session;
-(double)speed;
-(double)startTime;
-(double)endTime;
-(double)distance;
-(int)steps;
-(unsigned)pacebin;
-(double)kvalue;
-(double)kvalueTrack;
-(double)percentGrade;
-(long long)gpsSource;
-(id)initWithCLStrideCalEntry:(SCD_Struct_CM361)arg1 ;
@end

