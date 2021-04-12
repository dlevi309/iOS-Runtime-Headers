/*
* Generated on Thursday, January 14, 2021 at 2:25:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
*/

#import <NeutrinoCore/NeutrinoCore-Structs.h>
#import <NeutrinoCore/NURenderJob.h>

@class NSArray, NUFaceDetectionRequest;

@interface NUFaceDetectionJob : NURenderJob {

	NSArray* _faces;
	SCD_Struct_NU7 _imageSize;

}

@property (readonly) NUFaceDetectionRequest * faceDetectionRequest; 
-(id)cacheKey;
-(BOOL)render:(out id*)arg1 ;
-(id)initWithRequest:(id)arg1 ;
-(id)result;
-(void)cleanUp;
-(BOOL)wantsCompleteStage;
-(BOOL)wantsOutputGeometry;
-(BOOL)wantsOutputImage;
-(id)scalePolicy;
-(id)initWithFaceDetectionRequest:(id)arg1 ;
-(NUFaceDetectionRequest *)faceDetectionRequest;
-(id)detectFaceRectsInBuffer:(CVBufferRef)arg1 maxResultCount:(unsigned long long)arg2 error:(out id*)arg3 ;
-(id)detectFaceLandmarksInBuffer:(CVBufferRef)arg1 withFaceRects:(id)arg2 error:(out id*)arg3 ;
@end

