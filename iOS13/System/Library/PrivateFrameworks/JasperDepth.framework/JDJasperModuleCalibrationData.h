/*
* Generated on Monday, March 1, 2021 at 2:35:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/JasperDepth.framework/JasperDepth
*/


#import <JasperDepth/JasperDepth-Structs.h>
@interface JDJasperModuleCalibrationData : NSObject {

	JasperCalib _jasperCalib;

}
+(BOOL)isBufferOfExpectedVersion:(id)arg1 ;
-(id)initWithJasperCalib:(id)arg1 ;
-(id)initWithCalibrationDictionary:(id)arg1 ;
-(SCD_Struct_JD25)operationalSuperWideToJasperTransform;
-(void)setOperationalSuperWideToJasperTransform:(SCD_Struct_JD25)arg1 ;
-(SCD_Struct_JD25)operationalWideToJasperTransform;
-(void)setOperationalWideToJasperTransform:(SCD_Struct_JD25)arg1 ;
-(id)binaryRepresentation;
-(JasperCalib*)calib;
@end

