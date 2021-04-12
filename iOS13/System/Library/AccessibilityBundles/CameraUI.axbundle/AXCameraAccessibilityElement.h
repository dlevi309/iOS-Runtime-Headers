/*
* Generated on Monday, March 1, 2021 at 2:35:41 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/AccessibilityBundles/CameraUI.axbundle/CameraUI
*/

#import <CameraUI/CameraUI-Structs.h>
#import <UIKitCore/UIAccessibilityElement.h>

@class AXMCameraFrameContext, NSString, AXMVisionFeatureFaceAttributes;

@interface AXCameraAccessibilityElement : UIAccessibilityElement {

	BOOL _didCrossEdge;
	BOOL _didReuse;
	unsigned long long _featureType;
	long long _location;
	double _confidence;
	AXMCameraFrameContext* _cameraFrameContext;
	NSString* _faceName;
	AXMVisionFeatureFaceAttributes* _faceAttributes;
	long long _faceID;
	NSString* _classificationLocalizedValue;
	CGRect _normalizedFrame;

}

@property (nonatomic,readonly) NSString * _subjectDescription; 
@property (assign,nonatomic) unsigned long long featureType;                               //@synthesize featureType=_featureType - In the implementation block
@property (assign,nonatomic) long long location;                                           //@synthesize location=_location - In the implementation block
@property (assign,nonatomic) CGRect normalizedFrame;                                       //@synthesize normalizedFrame=_normalizedFrame - In the implementation block
@property (assign,nonatomic) double confidence;                                            //@synthesize confidence=_confidence - In the implementation block
@property (nonatomic,retain) AXMCameraFrameContext * cameraFrameContext;                   //@synthesize cameraFrameContext=_cameraFrameContext - In the implementation block
@property (nonatomic,readonly) BOOL isFace; 
@property (nonatomic,readonly) BOOL isProminentObject; 
@property (nonatomic,readonly) BOOL isObjectClassification; 
@property (nonatomic,readonly) BOOL isPerson; 
@property (nonatomic,copy) NSString * faceName;                                            //@synthesize faceName=_faceName - In the implementation block
@property (nonatomic,retain) AXMVisionFeatureFaceAttributes * faceAttributes;              //@synthesize faceAttributes=_faceAttributes - In the implementation block
@property (assign,nonatomic) long long faceID;                                             //@synthesize faceID=_faceID - In the implementation block
@property (nonatomic,copy) NSString * classificationLocalizedValue;                        //@synthesize classificationLocalizedValue=_classificationLocalizedValue - In the implementation block
@property (assign,nonatomic) BOOL didCrossEdge;                                            //@synthesize didCrossEdge=_didCrossEdge - In the implementation block
@property (assign,nonatomic) BOOL didReuse;                                                //@synthesize didReuse=_didReuse - In the implementation block
-(id)description;
-(double)confidence;
-(long long)location;
-(AXMVisionFeatureFaceAttributes *)faceAttributes;
-(void)setConfidence:(double)arg1 ;
-(void)setLocation:(long long)arg1 ;
-(id)accessibilityLabel;
-(void)setFaceAttributes:(AXMVisionFeatureFaceAttributes *)arg1 ;
-(unsigned long long)featureType;
-(void)setFeatureType:(unsigned long long)arg1 ;
-(long long)faceID;
-(void)setFaceID:(long long)arg1 ;
-(NSString *)classificationLocalizedValue;
-(CGRect)normalizedFrame;
-(BOOL)isFace;
-(BOOL)isObjectClassification;
-(BOOL)isPerson;
-(BOOL)isProminentObject;
-(NSString *)faceName;
-(void)setDidReuse:(BOOL)arg1 ;
-(void)setNormalizedFrame:(CGRect)arg1 ;
-(void)setClassificationLocalizedValue:(NSString *)arg1 ;
-(void)setCameraFrameContext:(AXMCameraFrameContext *)arg1 ;
-(void)setDidCrossEdge:(BOOL)arg1 ;
-(void)setFaceName:(NSString *)arg1 ;
-(BOOL)didCrossEdge;
-(AXMCameraFrameContext *)cameraFrameContext;
-(BOOL)didReuse;
-(NSString *)_subjectDescription;
@end

