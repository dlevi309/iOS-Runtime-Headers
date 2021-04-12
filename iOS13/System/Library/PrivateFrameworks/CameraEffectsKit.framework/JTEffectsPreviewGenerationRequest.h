/*
* Generated on Monday, March 1, 2021 at 2:34:41 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CameraEffectsKit.framework/CameraEffectsKit
*/


#import <CameraEffectsKit/CameraEffectsKit-Structs.h>
@class PVImageBuffer, JTEffect, NSArray, NSDictionary;

@interface JTEffectsPreviewGenerationRequest : NSObject {

	BOOL _highQuality;
	BOOL _scaleAnimationTransformInfoToOutputSize;
	int _priority;
	unsigned _parentCode;
	unsigned _childCode;
	PVImageBuffer* _image;
	JTEffect* _generatorEffect;
	NSArray* _effectStack;
	NSDictionary* _customRenderingProperties;
	NSArray* _pickerPreviewEffectList;
	CGSize _outputSize;
	SCD_Struct_JT6 _renderTime;
	PVTransformAnimationInfo _animationTransformInfo;

}

@property (assign,nonatomic) BOOL scaleAnimationTransformInfoToOutputSize;                 //@synthesize scaleAnimationTransformInfoToOutputSize=_scaleAnimationTransformInfoToOutputSize - In the implementation block
@property (nonatomic,readonly) PVImageBuffer * image;                                      //@synthesize image=_image - In the implementation block
@property (nonatomic,readonly) JTEffect * generatorEffect;                                 //@synthesize generatorEffect=_generatorEffect - In the implementation block
@property (nonatomic,readonly) NSArray * effectStack;                                      //@synthesize effectStack=_effectStack - In the implementation block
@property (nonatomic,readonly) CGSize outputSize;                                          //@synthesize outputSize=_outputSize - In the implementation block
@property (nonatomic,readonly) SCD_Struct_JT6 renderTime;                                  //@synthesize renderTime=_renderTime - In the implementation block
@property (nonatomic,copy) NSDictionary * customRenderingProperties;                       //@synthesize customRenderingProperties=_customRenderingProperties - In the implementation block
@property (nonatomic,retain) NSArray * pickerPreviewEffectList;                            //@synthesize pickerPreviewEffectList=_pickerPreviewEffectList - In the implementation block
@property (assign,nonatomic) PVTransformAnimationInfo animationTransformInfo;              //@synthesize animationTransformInfo=_animationTransformInfo - In the implementation block
@property (assign,nonatomic) BOOL highQuality;                                             //@synthesize highQuality=_highQuality - In the implementation block
@property (assign,nonatomic) int priority;                                                 //@synthesize priority=_priority - In the implementation block
@property (assign,nonatomic) unsigned parentCode;                                          //@synthesize parentCode=_parentCode - In the implementation block
@property (assign,nonatomic) unsigned childCode;                                           //@synthesize childCode=_childCode - In the implementation block
-(int)priority;
-(void)setPriority:(int)arg1 ;
-(PVImageBuffer *)image;
-(CGSize)outputSize;
-(BOOL)highQuality;
-(void)setHighQuality:(BOOL)arg1 ;
-(SCD_Struct_JT6)renderTime;
-(id)generatorJobWithGraphBuilder:(id)arg1 ;
-(unsigned)parentCode;
-(void)setParentCode:(unsigned)arg1 ;
-(unsigned)childCode;
-(void)setChildCode:(unsigned)arg1 ;
-(NSArray *)effectStack;
-(id)initWithInput:(id)arg1 effectStack:(id)arg2 outputSize:(CGSize)arg3 renderTime:(SCD_Struct_JT6)arg4 ;
-(void)setTransformAnimationInfo:(PVTransformAnimationInfo)arg1 scaleToOutput:(BOOL)arg2 ;
-(void)setCustomRenderingProperties:(NSDictionary *)arg1 ;
-(id)initWithInputGenerator:(id)arg1 effectStack:(id)arg2 outputSize:(CGSize)arg3 renderTime:(SCD_Struct_JT6)arg4 ;
-(void)setAnimationTransformInfo:(PVTransformAnimationInfo)arg1 ;
-(void)setPickerPreviewEffectList:(NSArray *)arg1 ;
-(PVTransformAnimationInfo)animationTransformInfo;
-(JTEffect *)generatorEffect;
-(BOOL)scaleAnimationTransformInfoToOutputSize;
-(id)placeholderGeneratorBackground;
-(CGAffineTransform)sourceTransform;
-(NSDictionary *)customRenderingProperties;
-(id)sourceIGNodeUsingGraphBuilder:(id)arg1 ;
-(void)setScaleAnimationTransformInfoToOutputSize:(BOOL)arg1 ;
-(id)renderWithInputs:(id)arg1 inputIDs:(id)arg2 time:(SCD_Struct_JT6)arg3 metadata:(id)arg4 ;
-(NSArray *)pickerPreviewEffectList;
@end

