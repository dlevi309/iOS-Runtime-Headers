/*
* Generated on Thursday, January 14, 2021 at 2:26:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/


@class UIColor, CLKDevice;

@interface NTKFaceViewComplicationFactory : NSObject {

	UIColor* _foregroundColor;
	UIColor* _platterColor;
	double _alpha;
	CLKDevice* _device;
	/*^block*/id _foregroundColorProviderBlock;
	/*^block*/id _platterColorProviderBlock;
	/*^block*/id _alphaProviderBlock;
	double _contentSpecificAnimationDuration;

}

@property (nonatomic,retain) UIColor * foregroundColor;                            //@synthesize foregroundColor=_foregroundColor - In the implementation block
@property (nonatomic,retain) UIColor * platterColor;                               //@synthesize platterColor=_platterColor - In the implementation block
@property (assign,nonatomic) double alpha;                                         //@synthesize alpha=_alpha - In the implementation block
@property (assign,nonatomic) double contentSpecificAnimationDuration;              //@synthesize contentSpecificAnimationDuration=_contentSpecificAnimationDuration - In the implementation block
@property (nonatomic,readonly) CLKDevice * device;                                 //@synthesize device=_device - In the implementation block
@property (nonatomic,copy) id foregroundColorProviderBlock;                        //@synthesize foregroundColorProviderBlock=_foregroundColorProviderBlock - In the implementation block
@property (nonatomic,copy) id platterColorProviderBlock;                           //@synthesize platterColorProviderBlock=_platterColorProviderBlock - In the implementation block
@property (nonatomic,copy) id alphaProviderBlock;                                  //@synthesize alphaProviderBlock=_alphaProviderBlock - In the implementation block
+(id)_genericComplicationAnimationWithDuration:(double)arg1 applier:(/*^block*/id)arg2 ;
-(void)setForegroundColor:(UIColor *)arg1 ;
-(UIColor *)foregroundColor;
-(double)alpha;
-(CLKDevice *)device;
-(UIColor *)platterColor;
-(void)setAlpha:(double)arg1 ;
-(id)initForDevice:(id)arg1 ;
-(id)keylineViewForComplicationSlot:(id)arg1 ;
-(id)complicationPickerKeylineViewForComplicationSlot:(id)arg1 ;
-(id)newLegacyViewForComplication:(id)arg1 family:(long long)arg2 slot:(id)arg3 faceView:(id)arg4 ;
-(void)configureComplicationView:(id)arg1 forSlot:(id)arg2 faceView:(id)arg3 ;
-(long long)legacyLayoutOverrideforComplicationType:(unsigned long long)arg1 slot:(id)arg2 faceView:(id)arg3 ;
-(long long)keylineStyleForComplicationSlot:(id)arg1 ;
-(unsigned long long)keylineLabelAlignmentForComplicationSlot:(id)arg1 faceView:(id)arg2 ;
-(void)setContentSpecificAnimationDuration:(double)arg1 ;
-(void)setPlatterColor:(UIColor *)arg1 ;
-(void)applyComplicationContentSpecificAttributesAnimated:(BOOL)arg1 faceView:(id)arg2 ;
-(id)foregroundColorProviderBlock;
-(id)platterColorProviderBlock;
-(void)applyComplicationContentSpecificAttributesAnimated:(BOOL)arg1 attributes:(unsigned long long)arg2 faceView:(id)arg3 ;
-(double)contentSpecificAnimationDuration;
-(void)loadLayoutRulesForFaceView:(id)arg1 ;
-(void)prepareForEditingForFaceView:(id)arg1 ;
-(void)cleanupAfterEditingForFaceView:(id)arg1 ;
-(id)createComplicationContentSpecificAttributesAnimationWithAttributes:(unsigned long long)arg1 faceView:(id)arg2 forSlots:(id)arg3 ;
-(void)setAlpha:(double)arg1 faceView:(id)arg2 ;
-(void)setForegroundColorProviderBlock:(id)arg1 ;
-(id)detachedComplicationDisplaysForFaceView:(id)arg1 ;
-(double)keylineCornerRadiusForComplicationSlot:(id)arg1 faceView:(id)arg2 ;
-(BOOL)fadesComplicationSlot:(id)arg1 inEditMode:(long long)arg2 faceView:(id)arg3 ;
-(double)minimumBreathingScaleForComplicationSlot:(id)arg1 faceView:(id)arg2 ;
-(id)alphaProviderBlock;
-(void)setForegroundColor:(id)arg1 faceView:(id)arg2 ;
-(void)setPlatterColorProviderBlock:(id)arg1 ;
-(void)setPlatterColor:(id)arg1 faceView:(id)arg2 ;
-(void)setAlphaProviderBlock:(id)arg1 ;
@end

