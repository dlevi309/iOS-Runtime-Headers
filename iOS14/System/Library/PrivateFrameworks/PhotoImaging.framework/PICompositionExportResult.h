/*
* Generated on Thursday, January 14, 2021 at 2:28:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotoImaging.framework/PhotoImaging
*/


#import <PhotoImaging/PhotoImaging-Structs.h>
@class NUImageGeometry;

@interface PICompositionExportResult : NSObject {

	NUImageGeometry* _geometry;
	SCD_Struct_PI5 _inputSize;

}

@property (retain) NUImageGeometry * geometry;              //@synthesize geometry=_geometry - In the implementation block
@property (assign) SCD_Struct_PI5 inputSize;                //@synthesize inputSize=_inputSize - In the implementation block
-(NUImageGeometry *)geometry;
-(SCD_Struct_PI5)inputSize;
-(void)setGeometry:(NUImageGeometry *)arg1 ;
-(void)setInputSize:(SCD_Struct_PI5)arg1 ;
@end

