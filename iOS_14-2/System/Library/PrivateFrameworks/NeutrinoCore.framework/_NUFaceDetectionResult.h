/*
* Generated on Thursday, January 14, 2021 at 2:25:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
@property (readonly) id<NURenderStatistics> statistics; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(SCD_Struct_NU7)imageSize;
-(NSArray *)faces;
-(void)setFaces:(NSArray *)arg1 ;
-(void)setImageSize:(SCD_Struct_NU7)arg1 ;
@end

