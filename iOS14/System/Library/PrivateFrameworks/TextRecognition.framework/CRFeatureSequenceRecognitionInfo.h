/*
* Generated on Thursday, January 14, 2021 at 2:25:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TextRecognition.framework/TextRecognition
*/

#import <TextRecognition/TextRecognition-Structs.h>
#import <libobjc.A.dylib/CRTextRecognizerFeatureInfo.h>

@class CRTextFeature, NSString;

@interface CRFeatureSequenceRecognitionInfo : NSObject <CRTextRecognizerFeatureInfo> {

	float _scale;
	CRTextFeature* _textFeature;
	CGRect _bounds;
	CGRect _rotatedROI;

}

@property (retain) CRTextFeature * textFeature;                     //@synthesize textFeature=_textFeature - In the implementation block
@property (assign) float scale;                                     //@synthesize scale=_scale - In the implementation block
@property (assign) CGRect bounds;                                   //@synthesize bounds=_bounds - In the implementation block
@property (assign) CGRect rotatedROI;                               //@synthesize rotatedROI=_rotatedROI - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)infoForFeature:(id)arg1 scale:(float)arg2 bounds:(CGRect)arg3 rotatedROI:(CGRect)arg4 ;
-(CGRect)bounds;
-(float)scale;
-(void)setBounds:(CGRect)arg1 ;
-(void)setScale:(float)arg1 ;
-(CGRect)rotatedROI;
-(CRTextFeature *)textFeature;
-(void)setTextFeature:(CRTextFeature *)arg1 ;
-(void)setRotatedROI:(CGRect)arg1 ;
@end

