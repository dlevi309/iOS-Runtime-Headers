/*
* Generated on Monday, March 1, 2021 at 2:35:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
*/

#import <NeutrinoCore/NeutrinoCore-Structs.h>
#import <NeutrinoCore/_NURenderResult.h>
#import <libobjc.A.dylib/NUFaceDetectionResult.h>

@class NSArray, NSString;

@interface _NUFaceDetectionResult : _NURenderResult <NUFaceDetectionResult> {

	NSArray* _faces;
	SCD_Struct_NU7 _imageSize;

}

@property (retain) NSArray * faces;                                  //@synthesize faces=_faces - In the implementation block
@property (assign) SCD_Struct_NU7 imageSize;                         //@synthesize imageSize=_imageSize - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) id<NURenderStatistics> statistics; 
-(void)setFaces:(NSArray *)arg1 ;
-(NSArray *)faces;
-(SCD_Struct_NU7)imageSize;
-(void)setImageSize:(SCD_Struct_NU7)arg1 ;
@end

