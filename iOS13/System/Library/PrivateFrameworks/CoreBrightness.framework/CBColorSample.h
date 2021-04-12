/*
* Generated on Monday, March 1, 2021 at 2:32:37 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(id)description;
-(unsigned long long)type;
-(void)setType:(unsigned long long)arg1 ;
-(void)setMode:(unsigned long long)arg1 ;
-(unsigned long long)mode;
-(double)lux;
-(id)initWithHIDEvent:(IOHIDEventRef)arg1 ;
-(double)CCT;
-(SCD_Struct_CB35)xy;
-(long long)colorBin;
-(double)colorDeltaEWith:(id)arg1 ;
-(double)CCTDifferenceWith:(id)arg1 ;
-(double)LuxDifferenceWith:(id)arg1 ;
-(SCD_Struct_CB36)XYZ;
-(id)initWithChromaticity:(SCD_Struct_CB35)arg1 illuminance:(double)arg2 andTempterature:(double)arg3 ;
-(id)initWithTristimulus:(SCD_Struct_CB36)arg1 illuminance:(double)arg2 andTempterature:(double)arg3 ;
-(id)copyDataInDictionary;
-(void)fillInChromaticity;
-(void)fillInTristimulus;
-(SCD_Struct_CB36)Lab;
-(void)setXy:(SCD_Struct_CB35)arg1 ;
-(void)setXYZ:(SCD_Struct_CB36)arg1 ;
@end

