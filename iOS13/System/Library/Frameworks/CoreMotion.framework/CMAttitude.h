/*
* Generated on Monday, March 1, 2021 at 2:31:32 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
@property (nonatomic,readonly) SCD_Struct_CM322 rotationMatrix; 
@property (nonatomic,readonly) SCD_Struct_CM321 quaternion; 
+(BOOL)supportsSecureCoding;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(double)pitch;
-(double)yaw;
-(double)roll;
-(SCD_Struct_CM321)quaternion;
-(void)multiplyByInverseOfAttitude:(id)arg1 ;
-(void)setQuaternion:(SCD_Struct_CM321)arg1 ;
-(id)initWithQuaternion:(SCD_Struct_CM321)arg1 ;
-(SCD_Struct_CM322)rotationMatrix;
@end

