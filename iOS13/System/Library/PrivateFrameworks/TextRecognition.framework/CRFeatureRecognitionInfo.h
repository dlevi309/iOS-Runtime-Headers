/*
* Generated on Monday, March 1, 2021 at 2:35:22 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TextRecognition.framework/TextRecognition
*/


#import <TextRecognition/TextRecognition-Structs.h>
@class CRTextFeature;

@interface CRFeatureRecognitionInfo : NSObject {

	float _scale;
	CRTextFeature* _feature;
	CGRect _bounds;
	CGRect _rotatedROI;

}

@property (retain) CRTextFeature * feature;              //@synthesize feature=_feature - In the implementation block
@property (assign) float scale;                          //@synthesize scale=_scale - In the implementation block
@property (assign) CGRect bounds;                        //@synthesize bounds=_bounds - In the implementation block
@property (assign) CGRect rotatedROI;                    //@synthesize rotatedROI=_rotatedROI - In the implementation block
+(id)infoForFeature:(id)arg1 scale:(float)arg2 bounds:(CGRect)arg3 rotatedROI:(CGRect)arg4 ;
-(float)scale;
-(CGRect)bounds;
-(void)setBounds:(CGRect)arg1 ;
-(void)setScale:(float)arg1 ;
-(CRTextFeature *)feature;
-(void)setFeature:(CRTextFeature *)arg1 ;
-(void)setRotatedROI:(CGRect)arg1 ;
-(CGRect)rotatedROI;
@end

