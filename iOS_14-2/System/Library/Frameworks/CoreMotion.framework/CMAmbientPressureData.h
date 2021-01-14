/*
* Generated on Thursday, January 14, 2021 at 2:21:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
*/

#import <CoreMotion/CoreMotion-Structs.h>
#import <CoreMotion/CMLogItem.h>
#import <libobjc.A.dylib/SRSampleDirectExporting.h>

@interface CMAmbientPressureData : CMLogItem <SRSampleDirectExporting> {

	id _internal;

}

@property (nonatomic,readonly) SCD_Struct_CM17 ambientPressure; 
+(BOOL)supportsSecureCoding;
-(id)initWithPressure:(SCD_Struct_CM16)arg1 andTimestamp:(double)arg2 ;
-(SCD_Struct_CM17)ambientPressure;
-(void)encodeWithCoder:(id)arg1 ;
-(long long)sr_writeUTF8RepresentationToOutputStream:(id)arg1 ;
-(BOOL)sr_prefersUTF8StringRepresentation;
-(id)description;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
@end

