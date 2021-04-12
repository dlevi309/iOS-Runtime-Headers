/*
* Generated on Monday, March 1, 2021 at 2:31:32 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
*/

#import <CoreMotion/CoreMotion-Structs.h>
#import <CoreMotion/CMLogItem.h>
#import <libobjc.A.dylib/SRSampleDirectExporting.h>

@interface CMAmbientPressureData : CMLogItem <SRSampleDirectExporting> {

	id _internal;

}

@property (nonatomic,readonly) SCD_Struct_CM324 ambientPressure; 
+(BOOL)supportsSecureCoding;
-(void)dealloc;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithPressure:(SCD_Struct_CM323)arg1 andTimestamp:(double)arg2 ;
-(SCD_Struct_CM324)ambientPressure;
-(long long)sr_writeUTF8RepresentationToOutputStream:(id)arg1 ;
-(BOOL)sr_prefersUTF8StringRepresentation;
@end

