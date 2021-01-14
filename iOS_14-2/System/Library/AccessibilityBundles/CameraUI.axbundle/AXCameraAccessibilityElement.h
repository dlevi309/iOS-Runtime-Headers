/*
* Generated on Thursday, January 14, 2021 at 2:29:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
	NSString* _classificationLabel;
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
@property (nonatomic,copy) NSString * classificationLabel;                                 //@synthesize classificationLabel=_classificationLabel - In the implementation block
@property (assign,nonatomic) BOOL didCrossEdge;                                            //@synthesize didCrossEdge=_didCrossEdge - In the implementation block
@property (assign,nonatomic) BOOL didReuse;                                                //@synthesize didReuse=_didReuse - In the implementation block
-(double)confidence;
-(id)accessibilityLabel;
-(void)setFeatureType:(unsigned long long)arg1 ;
-(unsigned long long)featureType;
-(long long)location;
-(AXMVisionFeatureFaceAttributes *)faceAttributes;
-(long long)faceID;
-(BOOL)isFace;
-(void)setLocation:(long long)arg1 ;
-(BOOL)isPerson;
-(BOOL)isProminentObject;
-(id)description;
-(void)setConfidence:(double)arg1 ;
-(NSString *)classificationLocalizedValue;
-(NSString *)classificationLabel;
-(void)setFaceAttributes:(AXMVisionFeatureFaceAttributes *)arg1 ;
-(CGRect)normalizedFrame;
-(void)setFaceID:(long long)arg1 ;
-(BOOL)isObjectClassification;
-(void)setFaceName:(NSString *)arg1 ;
-(NSString *)faceName;
-(void)setClassificationLabel:(NSString *)arg1 ;
-(NSString *)_subjectDescription;
-(void)setNormalizedFrame:(CGRect)arg1 ;
-(AXMCameraFrameContext *)cameraFrameContext;
-(void)setCameraFrameContext:(AXMCameraFrameContext *)arg1 ;
-(void)setClassificationLocalizedValue:(NSString *)arg1 ;
-(BOOL)didCrossEdge;
-(void)setDidCrossEdge:(BOOL)arg1 ;
-(BOOL)didReuse;
-(void)setDidReuse:(BOOL)arg1 ;
@end

