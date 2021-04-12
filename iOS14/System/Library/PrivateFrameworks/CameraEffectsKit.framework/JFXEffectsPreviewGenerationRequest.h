/*
* Generated on Thursday, January 14, 2021 at 2:27:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CameraEffectsKit.framework/CameraEffectsKit
*/


#import <CameraEffectsKit/CameraEffectsKit-Structs.h>
@class PVImageBuffer, JFXEffect, NSArray, NSDictionary;

@interface JFXEffectsPreviewGenerationRequest : NSObject {

	BOOL _highQuality;
	BOOL _scaleAnimationTransformInfoToOutputSize;
	int _priority;
	unsigned _parentCode;
	unsigned _childCode;
	PVImageBuffer* _image;
	JFXEffect* _generatorEffect;
	NSArray* _effectStack;
	NSDictionary* _customRenderingProperties;
	NSArray* _pickerPreviewEffectList;
	CGSize _outputSize;
	CGSize _frameSize;
	SCD_Struct_JF3 _renderTime;
	CGAffineTransform _userSourceTransform;
	PVTransformAnimationInfo _animationTransformInfo;

}

@property (assign,nonatomic) BOOL scaleAnimationTransformInfoToOutputSize;                 //@synthesize scaleAnimationTransformInfoToOutputSize=_scaleAnimationTransformInfoToOutputSize - In the implementation block
@property (nonatomic,readonly) PVImageBuffer * image;                                      //@synthesize image=_image - In the implementation block
@property (nonatomic,readonly) JFXEffect * generatorEffect;                                //@synthesize generatorEffect=_generatorEffect - In the implementation block
@property (nonatomic,readonly) NSArray * effectStack;                                      //@synthesize effectStack=_effectStack - In the implementation block
@property (nonatomic,readonly) CGSize outputSize;                                          //@synthesize outputSize=_outputSize - In the implementation block
@property (nonatomic,readonly) CGSize frameSize;                                           //@synthesize frameSize=_frameSize - In the implementation block
@property (nonatomic,readonly) SCD_Struct_JF3 renderTime;                                  //@synthesize renderTime=_renderTime - In the implementation block
@property (assign,nonatomic) CGAffineTransform userSourceTransform;                        //@synthesize userSourceTransform=_userSourceTransform - In the implementation block
@property (nonatomic,copy) NSDictionary * customRenderingProperties;                       //@synthesize customRenderingProperties=_customRenderingProperties - In the implementation block
@property (nonatomic,retain) NSArray * pickerPreviewEffectList;                            //@synthesize pickerPreviewEffectList=_pickerPreviewEffectList - In the implementation block
@property (assign,nonatomic) PVTransformAnimationInfo animationTransformInfo;              //@synthesize animationTransformInfo=_animationTransformInfo - In the implementation block
@property (assign,nonatomic) BOOL highQuality;                                             //@synthesize highQuality=_highQuality - In the implementation block
@property (assign,nonatomic) int priority;                                                 //@synthesize priority=_priority - In the implementation block
@property (assign,nonatomic) unsigned parentCode;                                          //@synthesize parentCode=_parentCode - In the implementation block
@property (assign,nonatomic) unsigned childCode;                                           //@synthesize childCode=_childCode - In the implementation block
+(CGRect)JT_centerRect:(CGRect)arg1 aspectRatio:(double)arg2 ;
+(PVTransformAnimationInfo)centerAnimationInfoForOutputSize:(CGSize)arg1 imageRect:(CGRect)arg2 ;
-(PVImageBuffer *)image;
-(BOOL)highQuality;
-(int)priority;
-(void)setHighQuality:(BOOL)arg1 ;
-(void)setPriority:(int)arg1 ;
-(CGSize)outputSize;
-(SCD_Struct_JF3)renderTime;
-(CGSize)frameSize;
-(NSArray *)effectStack;
-(unsigned)parentCode;
-(void)setParentCode:(unsigned)arg1 ;
-(id)initWithInput:(id)arg1 effectStack:(id)arg2 outputSize:(CGSize)arg3 frameSize:(CGSize)arg4 renderTime:(SCD_Struct_JF3)arg5 ;
-(void)setCustomRenderingProperties:(NSDictionary *)arg1 ;
-(void)setUserSourceTransform:(CGAffineTransform)arg1 ;
-(void)setAnimationTransformInfo:(PVTransformAnimationInfo)arg1 ;
-(void)setTransformAnimationInfo:(PVTransformAnimationInfo)arg1 scaleToOutput:(BOOL)arg2 ;
-(id)initWithInput:(id)arg1 effectStack:(id)arg2 outputSize:(CGSize)arg3 renderTime:(SCD_Struct_JF3)arg4 ;
-(void)setChildCode:(unsigned)arg1 ;
-(id)initWithInputGenerator:(id)arg1 effectStack:(id)arg2 outputSize:(CGSize)arg3 renderTime:(SCD_Struct_JF3)arg4 ;
-(CGAffineTransform)userSourceTransform;
-(void)centerAnimationInfo;
-(id)initWithInputGenerator:(id)arg1 effectStack:(id)arg2 outputSize:(CGSize)arg3 frameSize:(CGSize)arg4 renderTime:(SCD_Struct_JF3)arg5 ;
-(void)setPickerPreviewEffectList:(NSArray *)arg1 ;
-(id)generatorJobWithGraphBuilder:(id)arg1 ;
-(unsigned)childCode;
-(JFXEffect *)generatorEffect;
-(id)placeholderGeneratorBackground;
-(CGAffineTransform)JFX_scaleToFitSize:(CGSize)arg1 withTransform:(CGAffineTransform)arg2 ;
-(CGAffineTransform)sourceTransform;
-(NSDictionary *)customRenderingProperties;
-(id)sourceIGNodeUsingGraphBuilder:(id)arg1 ;
-(NSArray *)pickerPreviewEffectList;
-(void)setScaleAnimationTransformInfoToOutputSize:(BOOL)arg1 ;
-(PVTransformAnimationInfo)animationTransformInfo;
-(CGAffineTransform)_scaleAndTransformToFitSize:(CGSize)arg1 ;
-(BOOL)scaleAnimationTransformInfoToOutputSize;
@end

