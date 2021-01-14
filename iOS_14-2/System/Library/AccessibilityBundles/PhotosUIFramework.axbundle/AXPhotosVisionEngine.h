/*
* Generated on Thursday, January 14, 2021 at 2:29:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/AccessibilityBundles/PhotosUIFramework.axbundle/PhotosUIFramework
*/


@class AXMVisionEngine, AXMImageNode, AXMFaceDetectorNode;

@interface AXPhotosVisionEngine : NSObject {

	AXMVisionEngine* _engine;
	AXMImageNode* _imageNode;
	AXMFaceDetectorNode* _faceNode;

}

@property (nonatomic,retain) AXMVisionEngine * engine;                    //@synthesize engine=_engine - In the implementation block
@property (nonatomic,retain) AXMImageNode * imageNode;                    //@synthesize imageNode=_imageNode - In the implementation block
@property (nonatomic,retain) AXMFaceDetectorNode * faceNode;              //@synthesize faceNode=_faceNode - In the implementation block
+(id)sharedEngine;
-(AXMVisionEngine *)engine;
-(void)setEngine:(AXMVisionEngine *)arg1 ;
-(id)init;
-(AXMImageNode *)imageNode;
-(void)setImageNode:(AXMImageNode *)arg1 ;
-(void)setFaceNode:(AXMFaceDetectorNode *)arg1 ;
-(void)analyzeImage:(id)arg1 completion:(/*^block*/id)arg2 ;
-(AXMFaceDetectorNode *)faceNode;
@end

