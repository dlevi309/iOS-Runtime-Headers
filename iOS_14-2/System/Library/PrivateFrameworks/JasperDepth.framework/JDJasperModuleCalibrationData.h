/*
* Generated on Thursday, January 14, 2021 at 2:25:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/JasperDepth.framework/JasperDepth
*/


#import <JasperDepth/JasperDepth-Structs.h>
@interface JDJasperModuleCalibrationData : NSObject {

	JasperCalib _jasperCalib;

}
+(BOOL)isBufferOfExpectedVersion:(id)arg1 ;
-(JasperCalib*)calib;
-(id)initWithJasperCalib:(id)arg1 ;
-(id)initWithCalibrationDictionary:(id)arg1 ;
-(SCD_Struct_JD23)operationalSuperWideToJasperTransform;
-(void)setOperationalSuperWideToJasperTransform:(SCD_Struct_JD23)arg1 ;
-(SCD_Struct_JD23)operationalWideToJasperTransform;
-(void)setOperationalWideToJasperTransform:(SCD_Struct_JD23)arg1 ;
-(id)binaryRepresentation;
@end

