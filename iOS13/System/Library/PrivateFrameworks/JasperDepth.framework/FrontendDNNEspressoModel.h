/*
* Generated on Monday, March 1, 2021 at 2:35:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/JasperDepth.framework/JasperDepth
*/

#import <JasperDepth/JasperDepth-Structs.h>
#import <JasperDepth/DNNEspressoModel.h>

@interface FrontendDNNEspressoModel : DNNEspressoModel {

	SCD_Struct_Fr28* _InputBlob;
	SCD_Struct_Fr28* _resultsOutputBlob;
	SCD_Struct_Fr28* _stdOutputBlob;

}

@property (assign,nonatomic) SCD_Struct_Fr28* InputBlob;              //@synthesize InputBlob=_InputBlob - In the implementation block
@property (assign) SCD_Struct_Fr28* resultsOutputBlob;                //@synthesize resultsOutputBlob=_resultsOutputBlob - In the implementation block
@property (assign) SCD_Struct_Fr28* stdOutputBlob;                    //@synthesize stdOutputBlob=_stdOutputBlob - In the implementation block
-(void)setInputBlob:(SCD_Struct_Fr28*)arg1 ;
-(BOOL)initializeInputOutputBlobs;
-(int)processImage:(float*)arg1 withSize:(int)arg2 result:(JDCloudColorCalibrationResult*)arg3 ;
-(SCD_Struct_Fr28*)InputBlob;
-(SCD_Struct_Fr28*)resultsOutputBlob;
-(void)setResultsOutputBlob:(SCD_Struct_Fr28*)arg1 ;
-(SCD_Struct_Fr28*)stdOutputBlob;
-(void)setStdOutputBlob:(SCD_Struct_Fr28*)arg1 ;
@end

