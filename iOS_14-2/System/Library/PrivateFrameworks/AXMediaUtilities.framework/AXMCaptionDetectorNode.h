/*
* Generated on Thursday, January 14, 2021 at 2:23:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AXMediaUtilities.framework/AXMediaUtilities
*/

#import <AXMediaUtilities/AXMediaUtilities-Structs.h>
#import <AXMediaUtilities/AXMEvaluationNode.h>

@class NSURL, AXImageCaptionModel, AXMSceneDetectorNode;

@interface AXMCaptionDetectorNode : AXMEvaluationNode {

	os_unfair_lock_s _lock;
	BOOL _needsCaptionHandlerRefresh;
	CVNLPCaptionHandlerRef _captionHandlerRef;
	NSURL* _overrideModelURL;
	unsigned long long _overrideScaleMethod;
	unsigned long long _genderStrategy;
	BOOL _prefersPixelBufferImageInput;
	AXImageCaptionModel* _effectiveCaptionModelInfo;
	NSURL* _effectiveModelURL;
	AXMSceneDetectorNode* _sceneDetector;

}

@property (assign,nonatomic,__weak) AXMSceneDetectorNode * sceneDetector;                    //@synthesize sceneDetector=_sceneDetector - In the implementation block
@property (nonatomic,retain) NSURL * overrideModelURL; 
@property (assign,nonatomic) unsigned long long overrideScaleMethod; 
@property (assign,nonatomic) unsigned long long genderStrategy; 
@property (nonatomic,readonly) NSURL * effectiveModelURL; 
@property (nonatomic,readonly) AXImageCaptionModel * effectiveCaptionModelInfo; 
+(BOOL)supportsSecureCoding;
+(BOOL)isSupported;
+(CGSize)preferredModelInputSize;
+(id)title;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setOverrideModelURL:(NSURL *)arg1 ;
-(void)setOverrideScaleMethod:(unsigned long long)arg1 ;
-(void)setGenderStrategy:(unsigned long long)arg1 ;
-(void)setSceneDetector:(AXMSceneDetectorNode *)arg1 ;
-(NSURL *)overrideModelURL;
-(AXMSceneDetectorNode *)sceneDetector;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)overrideScaleMethod;
-(unsigned long long)genderStrategy;
-(CVNLPCaptionHandlerRef)_withLock_captionHandlerCreateIfNeeded:(id)arg1 ;
-(id)_computeCaptionForPixelBuffer:(CVBufferRef)arg1 orImage:(CGImageRef)arg2 captionHandler:(CVNLPCaptionHandlerRef)arg3 metrics:(id)arg4 ;
-(id)_withLock_cloneCaptionModelIfNeeded:(id)arg1 ;
-(BOOL)_captionModelCloningIsNeeded;
-(NSURL *)effectiveModelURL;
-(id)_withLock_captionModelURLCloningAssetIfNeeded;
-(id)_withLock_valueForOverrideScaleMethod;
-(AXImageCaptionModel *)effectiveCaptionModelInfo;
-(void)nodeInitialize;
-(void)evaluate:(id)arg1 metrics:(id)arg2 ;
-(BOOL)requiresVisionFramework;
-(void)_performWithLock:(/*^block*/id)arg1 ;
-(void)dealloc;
@end

