/*
* Generated on Monday, March 1, 2021 at 2:30:43 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
*/

#import <QuartzCore/QuartzCore-Structs.h>
#import <QuartzCore/CALayer.h>

@class NSString;

@interface CABackdropLayer : CALayer {

	BOOL _disablesOccludedBackdropBlurs;

}

@property (nonatomic,readonly) double mt_colorMatrixDrivenOpacity; 
@property (getter=isEnabled) BOOL enabled; 
@property (copy) NSString * groupName; 
@property (assign) BOOL usesGlobalGroupNamespace; 
@property (assign) double scale; 
@property (assign) CGRect backdropRect; 
@property (assign) double marginWidth; 
@property (assign) BOOL disablesOccludedBackdropBlurs;                                 //@synthesize disablesOccludedBackdropBlurs=_disablesOccludedBackdropBlurs - In the implementation block
@property (assign) BOOL captureOnly; 
@property (assign) BOOL allowsInPlaceFiltering; 
@property (assign) BOOL reducesCaptureBitDepth; 
@property (assign) BOOL ignoresScreenClip; 
@property (assign) double zoom; 
@property (assign) BOOL tracksLuma; 
@property (__weak) id<CABackdropLayerDelegate><CALayerDelegate> delegate; 
@property (copy) NSString * statisticsType; 
@property (assign) double statisticsInterval; 
+(id)mt_orderedFilterTypesBlurAtEnd;
+(id)mt_orderedFilterTypes;
+(id)mt_keyPathForColorMatrixDrivenOpacity;
+(CAColorMatrix)mt_colorMatrixForOpacity:(double)arg1 ;
+(id)defaultValueForKey:(id)arg1 ;
+(BOOL)_hasRenderLayerSubclass;
+(BOOL)CA_automaticallyNotifiesObservers:(Class)arg1 ;
-(void)mt_applyMaterialDescription:(id)arg1 removingIfIdentity:(BOOL)arg2 ;
-(double)mt_colorMatrixDrivenOpacity;
-(void)mt_setColorMatrixDrivenOpacity:(double)arg1 removingIfIdentity:(BOOL)arg2 ;
-(void)_mt_setValue:(id)arg1 forFilterOfType:(id)arg2 valueKey:(id)arg3 filterOrder:(id)arg4 removingIfIdentity:(BOOL)arg5 ;
-(void)_mt_removeFilterOfType:(id)arg1 ifNecessaryWithName:(id)arg2 ;
-(void)_mt_setColorMatrix:(CAColorMatrix)arg1 withName:(id)arg2 filterOrder:(id)arg3 removingIfIdentity:(BOOL)arg4 ;
-(void)_mt_configureFilterOfType:(id)arg1 ifNecessaryWithName:(id)arg2 andFilterOrder:(id)arg3 ;
-(void)_mt_configureFilterOfType:(id)arg1 ifNecessaryWithFilterOrder:(id)arg2 ;
-(void)_mt_removeFilterOfTypeIfNecessary:(id)arg1 ;
-(void)setEnabled:(BOOL)arg1 ;
-(void)didChangeValueForKey:(id)arg1 ;
-(double)scale;
-(BOOL)isEnabled;
-(void)setScale:(double)arg1 ;
-(NSString *)groupName;
-(void)setGroupName:(NSString *)arg1 ;
-(void)setZoom:(double)arg1 ;
-(double)zoom;
-(BOOL)disablesOccludedBackdropBlurs;
-(void)setDisablesOccludedBackdropBlurs:(BOOL)arg1 ;
-(void)setStatisticsInterval:(double)arg1 ;
-(double)statisticsInterval;
-(void)setAllowsInPlaceFiltering:(BOOL)arg1 ;
-(void)setCaptureOnly:(BOOL)arg1 ;
-(void)setTracksLuma:(BOOL)arg1 ;
-(BOOL)captureOnly;
-(Layer*)_copyRenderLayer:(Transaction*)arg1 layerFlags:(unsigned)arg2 commitFlags:(unsigned*)arg3 ;
-(BOOL)_renderLayerDefinesProperty:(unsigned)arg1 ;
-(unsigned)_renderLayerPropertyAnimationFlags:(unsigned)arg1 ;
-(void)layerDidBecomeVisible:(BOOL)arg1 ;
-(id)statisticsValues;
-(BOOL)usesGlobalGroupNamespace;
-(void)setUsesGlobalGroupNamespace:(BOOL)arg1 ;
-(CGRect)backdropRect;
-(void)setBackdropRect:(CGRect)arg1 ;
-(double)marginWidth;
-(void)setMarginWidth:(double)arg1 ;
-(BOOL)allowsInPlaceFiltering;
-(BOOL)reducesCaptureBitDepth;
-(void)setReducesCaptureBitDepth:(BOOL)arg1 ;
-(BOOL)ignoresScreenClip;
-(void)setIgnoresScreenClip:(BOOL)arg1 ;
-(BOOL)tracksLuma;
-(NSString *)statisticsType;
-(void)setStatisticsType:(NSString *)arg1 ;
@end

