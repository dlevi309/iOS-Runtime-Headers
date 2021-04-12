/*
* Generated on Monday, March 1, 2021 at 2:31:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AXMediaUtilities.framework/AXMediaUtilities
*/

#import <AXMediaUtilities/AXMVisionEngine.h>

@class AXMScreenCaptureNode, AXMImageNode, AXMTextDetectorNode, AXMSceneDetectorNode, AXMFaceDetectorNode, AXMTraitDetectorNode, AXMProminentObjectsDetectorNode, AXMCaptionDetectorNode, AXMIconClassDetectorNode;

@interface AXMVoiceOverVisionEngine : AXMVisionEngine {

	AXMScreenCaptureNode* _captureNode;
	AXMImageNode* _imageNode;
	AXMTextDetectorNode* _textDetector;
	AXMSceneDetectorNode* _sceneDetector;
	AXMFaceDetectorNode* _faceDetector;
	AXMTraitDetectorNode* _traitDetector;
	AXMProminentObjectsDetectorNode* _prominentObjectsDetector;
	AXMCaptionDetectorNode* _captionDetector;
	AXMIconClassDetectorNode* _iconClassDetector;

}

@property (assign,nonatomic,__weak) AXMScreenCaptureNode * captureNode;                                      //@synthesize captureNode=_captureNode - In the implementation block
@property (assign,nonatomic,__weak) AXMImageNode * imageNode;                                                //@synthesize imageNode=_imageNode - In the implementation block
@property (assign,nonatomic,__weak) AXMTextDetectorNode * textDetector;                                      //@synthesize textDetector=_textDetector - In the implementation block
@property (assign,nonatomic,__weak) AXMSceneDetectorNode * sceneDetector;                                    //@synthesize sceneDetector=_sceneDetector - In the implementation block
@property (assign,nonatomic,__weak) AXMFaceDetectorNode * faceDetector;                                      //@synthesize faceDetector=_faceDetector - In the implementation block
@property (assign,nonatomic,__weak) AXMTraitDetectorNode * traitDetector;                                    //@synthesize traitDetector=_traitDetector - In the implementation block
@property (assign,nonatomic,__weak) AXMProminentObjectsDetectorNode * prominentObjectsDetector;              //@synthesize prominentObjectsDetector=_prominentObjectsDetector - In the implementation block
@property (assign,nonatomic,__weak) AXMCaptionDetectorNode * captionDetector;                                //@synthesize captionDetector=_captionDetector - In the implementation block
@property (assign,nonatomic,__weak) AXMIconClassDetectorNode * iconClassDetector;                            //@synthesize iconClassDetector=_iconClassDetector - In the implementation block
-(id)init;
-(id)initWithIdentifier:(id)arg1 ;
-(AXMFaceDetectorNode *)faceDetector;
-(AXMTextDetectorNode *)textDetector;
-(void)setImageNode:(AXMImageNode *)arg1 ;
-(void)setIconClassDetector:(AXMIconClassDetectorNode *)arg1 ;
-(AXMImageNode *)imageNode;
-(AXMIconClassDetectorNode *)iconClassDetector;
-(void)setCaptureNode:(AXMScreenCaptureNode *)arg1 ;
-(void)setTextDetector:(AXMTextDetectorNode *)arg1 ;
-(void)setSceneDetector:(AXMSceneDetectorNode *)arg1 ;
-(void)setFaceDetector:(AXMFaceDetectorNode *)arg1 ;
-(void)setTraitDetector:(AXMTraitDetectorNode *)arg1 ;
-(void)setProminentObjectsDetector:(AXMProminentObjectsDetectorNode *)arg1 ;
-(void)setCaptionDetector:(AXMCaptionDetectorNode *)arg1 ;
-(AXMScreenCaptureNode *)captureNode;
-(AXMSceneDetectorNode *)sceneDetector;
-(AXMTraitDetectorNode *)traitDetector;
-(AXMProminentObjectsDetectorNode *)prominentObjectsDetector;
-(AXMCaptionDetectorNode *)captionDetector;
@end

