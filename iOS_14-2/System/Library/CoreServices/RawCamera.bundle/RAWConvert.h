/*
* Generated on Thursday, January 14, 2021 at 2:25:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
+(id)customAttributes;
+(BOOL)automaticallyNotifiesObserversForKey:(id)arg1 ;
-(void)setInputNeutral:(id)arg1 ;
-(CCameraProfile*)cameraProfile;
-(id)customAttributes;
-(id)outputImage;
-(id)outputMatrix;
-(CWhitePoint)neutralWhitePointWithProfile:(CCameraProfile*)arg1 ;
-(CMatrix*)matrixFromArray:(id)arg1 rowCount:(unsigned long long)arg2 columnCount:(unsigned long long)arg3 ;
-(id)inputNeutralXY;
-(id)blendFactor;
@end

