/*
* Generated on Monday, March 1, 2021 at 2:35:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotoImaging.framework/PhotoImaging
*/

#import <PhotoImaging/PhotoImaging-Structs.h>
#import <NeutrinoCore/NUAutoCalculator.h>

@class NUFaceDetectionRequest;

@interface PIApertureRedEyeAutoCalculator : NUAutoCalculator {

	NUFaceDetectionRequest* _faceRequest;

}
-(void)cancel;
-(void)submit:(/*^block*/id)arg1 ;
-(id)apertureRedEyeResultFromFaceObservations:(id)arg1 imageSize:(SCD_Struct_PI5)arg2 ;
@end

