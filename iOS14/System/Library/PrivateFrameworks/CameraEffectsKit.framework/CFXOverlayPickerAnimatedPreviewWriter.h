/*
* Generated on Thursday, January 14, 2021 at 2:27:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CameraEffectsKit.framework/CameraEffectsKit
*/


@protocol OS_dispatch_queue;
#import <CameraEffectsKit/CameraEffectsKit-Structs.h>
@class JFXOverlayEffect, NSString, NSDictionary, JFXEffectsPreviewGenerator, NSObject;

@interface CFXOverlayPickerAnimatedPreviewWriter : NSObject {

	CGImageDestinationRef _imageDestination;
	BOOL _isFirstAnimatedFrame;
	JFXOverlayEffect* _overlay;
	NSString* _destinationPath;
	NSDictionary* _frameProperties;
	unsigned long long _currentFrameCount;
	unsigned long long _previewFrameRate;
	double _previewDuration;
	unsigned long long _previewStartFrameIndex;
	unsigned long long _targetFrameCount;
	JFXEffectsPreviewGenerator* _previewGenerator;
	NSObject*<OS_dispatch_queue> _writerQueue;
	/*^block*/id _completionBlock;
	CGSize _previewSizeInPixels;
	SCD_Struct_JF3 _currentRenderTime;

}

@property (nonatomic,retain) JFXOverlayEffect * overlay;                                 //@synthesize overlay=_overlay - In the implementation block
@property (nonatomic,readonly) CGSize previewSizeInPixels;                               //@synthesize previewSizeInPixels=_previewSizeInPixels - In the implementation block
@property (nonatomic,retain) NSString * destinationPath;                                 //@synthesize destinationPath=_destinationPath - In the implementation block
@property (nonatomic,retain) NSDictionary * frameProperties;                             //@synthesize frameProperties=_frameProperties - In the implementation block
@property (assign,nonatomic) unsigned long long currentFrameCount;                       //@synthesize currentFrameCount=_currentFrameCount - In the implementation block
@property (assign,nonatomic) unsigned long long previewFrameRate;                        //@synthesize previewFrameRate=_previewFrameRate - In the implementation block
@property (assign,nonatomic) double previewDuration;                                     //@synthesize previewDuration=_previewDuration - In the implementation block
@property (assign,nonatomic) unsigned long long previewStartFrameIndex;                  //@synthesize previewStartFrameIndex=_previewStartFrameIndex - In the implementation block
@property (assign,nonatomic) unsigned long long targetFrameCount;                        //@synthesize targetFrameCount=_targetFrameCount - In the implementation block
@property (assign,nonatomic) SCD_Struct_JF3 currentRenderTime;                           //@synthesize currentRenderTime=_currentRenderTime - In the implementation block
@property (nonatomic,retain) JFXEffectsPreviewGenerator * previewGenerator;              //@synthesize previewGenerator=_previewGenerator - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> writerQueue;                 //@synthesize writerQueue=_writerQueue - In the implementation block
@property (nonatomic,copy) id completionBlock;                                           //@synthesize completionBlock=_completionBlock - In the implementation block
@property (assign,nonatomic) BOOL isFirstAnimatedFrame;                                  //@synthesize isFirstAnimatedFrame=_isFirstAnimatedFrame - In the implementation block
-(id)completionBlock;
-(void)setCompletionBlock:(id)arg1 ;
-(NSString *)destinationPath;
-(double)previewDuration;
-(void)setOverlay:(JFXOverlayEffect *)arg1 ;
-(JFXOverlayEffect *)overlay;
-(void)setDestinationPath:(NSString *)arg1 ;
-(unsigned long long)currentFrameCount;
-(void)setCurrentFrameCount:(unsigned long long)arg1 ;
-(NSDictionary *)frameProperties;
-(void)setFrameProperties:(NSDictionary *)arg1 ;
-(CGSize)previewSizeInPixels;
-(id)initWithOverlayEffectId:(id)arg1 previewSizeInPixels:(CGSize)arg2 previewDuration:(double)arg3 previewFrameRate:(unsigned long long)arg4 previewStartFrameIndex:(unsigned long long)arg5 ;
-(void)writeAnimatedPreviewToPath:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)CFX_initializeEffectForPreviewing;
-(unsigned long long)previewFrameRate;
-(NSObject*<OS_dispatch_queue>)writerQueue;
-(void)CFX_beginWriting;
-(void)CFX_finishWriting;
-(unsigned long long)targetFrameCount;
-(void)setPreviewGenerator:(JFXEffectsPreviewGenerator *)arg1 ;
-(void)setIsFirstAnimatedFrame:(BOOL)arg1 ;
-(void)CFX_writeNextEffectFrame;
-(SCD_Struct_JF3)currentRenderTime;
-(JFXEffectsPreviewGenerator *)previewGenerator;
-(BOOL)isFirstAnimatedFrame;
-(void)setCurrentRenderTime:(SCD_Struct_JF3)arg1 ;
-(unsigned long long)previewStartFrameIndex;
-(void)setPreviewFrameRate:(unsigned long long)arg1 ;
-(void)setPreviewDuration:(double)arg1 ;
-(void)setPreviewStartFrameIndex:(unsigned long long)arg1 ;
-(void)setTargetFrameCount:(unsigned long long)arg1 ;
@end

