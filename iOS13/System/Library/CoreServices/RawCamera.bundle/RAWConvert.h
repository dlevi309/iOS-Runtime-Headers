/*
* Generated on Monday, March 1, 2021 at 2:31:32 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/CoreServices/RawCamera.bundle/RawCamera
*/

#import <RawCamera/RawCamera-Structs.h>
#import <RawCamera/RAWFilter.h>

@class CIImage, NSArray, NSNumber, CIVector;

@interface RAWConvert : RAWFilter {

	CIImage* inputImage;
	id inputColorSpace;
	NSArray* inputNeutral;
	NSNumber* inputRange;
	NSNumber* inputFactor;
	NSNumber* inputCalibrationIlluminant1;
	NSNumber* inputCalibrationIlluminant2;
	NSArray* inputXYZtoCamera1;
	NSArray* inputXYZtoCamera2;
	NSArray* inputCameraCalibration1;
	NSArray* inputCameraCalibration2;
	NSArray* inputReduction1;
	NSArray* inputReduction2;
	NSArray* inputForwardMatrix1;
	NSArray* inputForwardMatrix2;
	NSNumber* inputShouldUseForwardMatrix;
	NSNumber* inputShouldRecoverHighlights;
	NSNumber* inputShouldLinearize;
	CIVector* inputBlacks;

}

@property (nonatomic,readonly) CCameraProfile* cameraProfile; 
+(BOOL)automaticallyNotifiesObserversForKey:(id)arg1 ;
+(id)customAttributes;
-(id)customAttributes;
-(id)outputImage;
-(void)setInputNeutral:(id)arg1 ;
-(id)outputMatrix;
-(CCameraProfile*)cameraProfile;
-(CWhitePoint)neutralWhitePointWithProfile:(CCameraProfile*)arg1 ;
-(CMatrix*)matrixFromArray:(id)arg1 rowCount:(unsigned long long)arg2 columnCount:(unsigned long long)arg3 ;
-(id)inputNeutralXY;
-(id)blendFactor;
@end

