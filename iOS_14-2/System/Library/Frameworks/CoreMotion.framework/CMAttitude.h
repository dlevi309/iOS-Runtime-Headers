/*
* Generated on Thursday, January 14, 2021 at 2:21:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
*/

#import <CoreMotion/CoreMotion-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface CMAttitude : NSObject <NSCopying, NSSecureCoding> {

	id _internal;

}

@property (nonatomic,readonly) double roll; 
@property (nonatomic,readonly) double pitch; 
@property (nonatomic,readonly) double yaw; 
@property (nonatomic,readonly) SCD_Struct_CM15 rotationMatrix; 
@property (nonatomic,readonly) SCD_Struct_CM14 quaternion; 
+(BOOL)supportsSecureCoding;
-(double)roll;
-(double)pitch;
-(id)initWithQuaternion:(SCD_Struct_CM14)arg1 ;
-(double)yaw;
-(SCD_Struct_CM15)rotationMatrix;
-(void)setQuaternion:(SCD_Struct_CM14)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(SCD_Struct_CM14)quaternion;
-(id)initWithCoder:(id)arg1 ;
-(void)multiplyByInverseOfAttitude:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
@end

