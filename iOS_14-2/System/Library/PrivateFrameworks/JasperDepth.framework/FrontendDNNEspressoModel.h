/*
* Generated on Thursday, January 14, 2021 at 2:25:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/JasperDepth.framework/JasperDepth
*/

#import <JasperDepth/JasperDepth-Structs.h>
#import <JasperDepth/DNNEspressoModel.h>

@interface FrontendDNNEspressoModel : DNNEspressoModel {

	SCD_Struct_Fr26* _InputBlob;
	SCD_Struct_Fr26* _resultsOutputBlob;
	SCD_Struct_Fr26* _stdOutputBlob;

}

@property (assign,nonatomic) SCD_Struct_Fr26* InputBlob;              //@synthesize InputBlob=_InputBlob - In the implementation block
@property (assign) SCD_Struct_Fr26* resultsOutputBlob;                //@synthesize resultsOutputBlob=_resultsOutputBlob - In the implementation block
@property (assign) SCD_Struct_Fr26* stdOutputBlob;                    //@synthesize stdOutputBlob=_stdOutputBlob - In the implementation block
-(void)setInputBlob:(SCD_Struct_Fr26*)arg1 ;
-(BOOL)initializeInputOutputBlobs;
-(int)processImage:(float*)arg1 withSize:(int)arg2 result:(id*)arg3 ;
-(SCD_Struct_Fr26*)InputBlob;
-(SCD_Struct_Fr26*)resultsOutputBlob;
-(void)setResultsOutputBlob:(SCD_Struct_Fr26*)arg1 ;
-(SCD_Struct_Fr26*)stdOutputBlob;
-(void)setStdOutputBlob:(SCD_Struct_Fr26*)arg1 ;
@end

