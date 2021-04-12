/*
* Generated on Thursday, January 14, 2021 at 2:28:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotoImaging.framework/PhotoImaging
*/

#import <PhotoImaging/PhotoImaging-Structs.h>
#import <NeutrinoCore/NUAutoCalculator.h>

@class NUFaceDetectionRequest;

@interface PIApertureRedEyeAutoCalculator : NUAutoCalculator {

	NUFaceDetectionRequest* _faceRequest;

}
-(void)submit:(/*^block*/id)arg1 ;
-(void)cancel;
-(id)apertureRedEyeResultFromFaceObservations:(id)arg1 imageSize:(SCD_Struct_PI5)arg2 ;
@end

