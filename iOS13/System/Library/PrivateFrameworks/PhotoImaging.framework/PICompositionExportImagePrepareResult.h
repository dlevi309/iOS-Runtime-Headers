/*
* Generated on Monday, March 1, 2021 at 2:35:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotoImaging.framework/PhotoImaging
*/


#import <PhotoImaging/PhotoImaging-Structs.h>
@class NUImageExportRequest;

@interface PICompositionExportImagePrepareResult : NSObject {

	NUImageExportRequest* _request;
	SCD_Struct_PI5 _inputSize;

}

@property (retain) NUImageExportRequest * request;              //@synthesize request=_request - In the implementation block
@property (assign) SCD_Struct_PI5 inputSize;                    //@synthesize inputSize=_inputSize - In the implementation block
-(SCD_Struct_PI5)inputSize;
-(void)setInputSize:(SCD_Struct_PI5)arg1 ;
-(void)setRequest:(NUImageExportRequest *)arg1 ;
-(NUImageExportRequest *)request;
@end

