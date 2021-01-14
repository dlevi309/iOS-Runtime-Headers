/*
* Generated on Thursday, January 14, 2021 at 2:27:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreBrightness.framework/CoreBrightness
*/


#import <CoreBrightness/CoreBrightness-Structs.h>
@interface CBColorSample : NSObject {

	double _lux;
	double _CCT;
	unsigned long long _mode;
	unsigned long long _type;
	SCD_Struct_CB35 _xy;
	SCD_Struct_CB36 _XYZ;

}

@property (nonatomic,readonly) double lux;                         //@synthesize lux=_lux - In the implementation block
@property (nonatomic,readonly) SCD_Struct_CB35 xy;                 //@synthesize xy=_xy - In the implementation block
@property (nonatomic,readonly) SCD_Struct_CB36 XYZ;                //@synthesize XYZ=_XYZ - In the implementation block
@property (nonatomic,readonly) SCD_Struct_CB36 Lab; 
@property (nonatomic,readonly) double CCT;                         //@synthesize CCT=_CCT - In the implementation block
@property (nonatomic,readonly) long long colorBin; 
@property (assign,nonatomic) unsigned long long mode;              //@synthesize mode=_mode - In the implementation block
@property (assign,nonatomic) unsigned long long type;              //@synthesize type=_type - In the implementation block
-(double)lux;
-(SCD_Struct_CB35)xy;
-(unsigned long long)mode;
-(double)CCT;
-(SCD_Struct_CB36)XYZ;
-(SCD_Struct_CB36)Lab;
-(id)init;
-(void)setType:(unsigned long long)arg1 ;
-(void)setMode:(unsigned long long)arg1 ;
-(id)description;
-(void)setXy:(SCD_Struct_CB35)arg1 ;
-(id)initWithHIDEvent:(IOHIDEventRef)arg1 ;
-(unsigned long long)type;
-(void)setXYZ:(SCD_Struct_CB36)arg1 ;
-(long long)colorBin;
-(double)colorDeltaEWith:(id)arg1 ;
-(double)CCTDifferenceWith:(id)arg1 ;
-(double)LuxDifferenceWith:(id)arg1 ;
-(id)initWithChromaticity:(SCD_Struct_CB35)arg1 illuminance:(double)arg2 andTempterature:(double)arg3 ;
-(id)initWithTristimulus:(SCD_Struct_CB36)arg1 illuminance:(double)arg2 andTempterature:(double)arg3 ;
-(id)copyDataInDictionary;
-(void)fillInChromaticity;
-(void)fillInTristimulus;
@end

