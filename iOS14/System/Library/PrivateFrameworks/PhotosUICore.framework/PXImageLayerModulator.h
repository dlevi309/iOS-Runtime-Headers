/*
* Generated on Thursday, January 14, 2021 at 2:22:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <libobjc.A.dylib/PXMutableImageLayerModulator_Private.h>

@class CALayer, CAFilter, NSString, PXGainMapAnimationDurationFilter;

@interface PXImageLayerModulator : NSObject <PXMutableImageLayerModulator_Private> {

	BOOL _isPerformingChanges;
	BOOL _isPerformingUpdates;
	struct {
		BOOL filterInput;
		BOOL filter;
		BOOL filteredLayer;
		BOOL displayingVideoComplement;
		BOOL filterIntensity;
		BOOL gainMapVisibility;
		BOOL gainMapAppearance;
	}  _needsUpdateFlags;
	BOOL _displayingVideoComplement;
	BOOL _revealsGainMapImage;
	BOOL _animateGainMapAppearance;
	BOOL _enabled;
	float _gainMapValue;
	float _hdrGain;
	CALayer* _layer;
	CGImageRef _gainMapImage;
	long long _filterType;
	CAFilter* _filter;
	NSString* _layerFilterIntensityKeyPath;
	CALayer* _filteredLayer;
	CALayer* _gainMapLayer;
	PXGainMapAnimationDurationFilter* _gainMapAnimationDurationFilter;
	double _intensityAnimationDuration;
	double _intensity;
	SCD_Struct_PX109 _options;

}

@property (nonatomic,readonly) SCD_Struct_PX109 options;                                                       //@synthesize options=_options - In the implementation block
@property (nonatomic,readonly) long long filterType;                                                           //@synthesize filterType=_filterType - In the implementation block
@property (nonatomic,readonly) float hdrGain;                                                                  //@synthesize hdrGain=_hdrGain - In the implementation block
@property (nonatomic,readonly) CAFilter * filter;                                                              //@synthesize filter=_filter - In the implementation block
@property (nonatomic,retain) NSString * layerFilterIntensityKeyPath;                                           //@synthesize layerFilterIntensityKeyPath=_layerFilterIntensityKeyPath - In the implementation block
@property (nonatomic,retain) CALayer * filteredLayer;                                                          //@synthesize filteredLayer=_filteredLayer - In the implementation block
@property (nonatomic,retain) CALayer * gainMapLayer;                                                           //@synthesize gainMapLayer=_gainMapLayer - In the implementation block
@property (assign,nonatomic) BOOL animateGainMapAppearance;                                                    //@synthesize animateGainMapAppearance=_animateGainMapAppearance - In the implementation block
@property (nonatomic,retain) PXGainMapAnimationDurationFilter * gainMapAnimationDurationFilter;                //@synthesize gainMapAnimationDurationFilter=_gainMapAnimationDurationFilter - In the implementation block
@property (assign,nonatomic) double intensityAnimationDuration;                                                //@synthesize intensityAnimationDuration=_intensityAnimationDuration - In the implementation block
@property (getter=isEnabled,nonatomic,readonly) BOOL enabled;                                                  //@synthesize enabled=_enabled - In the implementation block
@property (nonatomic,readonly) double intensity;                                                               //@synthesize intensity=_intensity - In the implementation block
@property (nonatomic,readonly) CALayer * layer;                                                                //@synthesize layer=_layer - In the implementation block
@property (getter=isDisplayingVideoComplement,nonatomic,readonly) BOOL displayingVideoComplement;              //@synthesize displayingVideoComplement=_displayingVideoComplement - In the implementation block
@property (nonatomic,readonly) CGImageRef gainMapImage;                                                        //@synthesize gainMapImage=_gainMapImage - In the implementation block
@property (nonatomic,readonly) float gainMapValue;                                                             //@synthesize gainMapValue=_gainMapValue - In the implementation block
@property (nonatomic,readonly) BOOL revealsGainMapImage;                                                       //@synthesize revealsGainMapImage=_revealsGainMapImage - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(CGImageRef)_gainMapPlaceholderImage;
-(void)setGainMapImage:(CGImageRef)arg1 ;
-(id)initWithOptions:(SCD_Struct_PX109)arg1 ;
-(long long)filterType;
-(void)setFilterType:(long long)arg1 ;
-(CGImageRef)gainMapImage;
-(float)gainMapValue;
-(CALayer *)layer;
-(void)setFilter:(CAFilter *)arg1 ;
-(CAFilter *)filter;
-(void)animateChangesWithDuration:(double)arg1 ;
-(void)removeFilterFromUnownedLayer:(id)arg1 ;
-(void)setFilteredLayer:(CALayer *)arg1 ;
-(void)_addFilterToLayer:(id)arg1 ;
-(void)_removeFilterFromLayer:(id)arg1 ;
-(void)setGainMapLayer:(CALayer *)arg1 ;
-(void)_invalidateFilterInput;
-(void)_updateFilterInput;
-(void)_invalidateFilter;
-(void)_invalidateFilteredLayer;
-(void)_updateFilteredLayerIfNeeded;
-(void)_invalidateFilterIntensity;
-(CALayer *)filteredLayer;
-(id)init;
-(void)_updateFilterIntensityIfNeeded;
-(void)_invalidateGainMapAppearance;
-(void)_updateGainMapAppearance;
-(void)_invalidateGainMapVisibility;
-(void)_updateGainMapVisibility;
-(BOOL)isDisplayingVideoComplement;
-(NSString *)layerFilterIntensityKeyPath;
-(CALayer *)gainMapLayer;
-(void)setLayerFilterIntensityKeyPath:(NSString *)arg1 ;
-(PXGainMapAnimationDurationFilter *)gainMapAnimationDurationFilter;
-(void)setGainMapAnimationDurationFilter:(PXGainMapAnimationDurationFilter *)arg1 ;
-(double)intensityAnimationDuration;
-(void)setIntensityAnimationDuration:(double)arg1 ;
-(float)hdrGain;
-(void)setEnabled:(BOOL)arg1 ;
-(void)setAnimateGainMapAppearance:(BOOL)arg1 ;
-(double)intensity;
-(void)setIntensity:(double)arg1 ;
-(SCD_Struct_PX109)options;
-(void)_updateIfNeeded;
-(void)_updateFilter;
-(void)prepareForReuse;
-(void)setGainMapValue:(float)arg1 ;
-(void)setLayer:(CALayer *)arg1 ;
-(BOOL)revealsGainMapImage;
-(BOOL)animateGainMapAppearance;
-(void)setGainMapImage:(CGImageRef)arg1 animated:(BOOL)arg2 ;
-(BOOL)_needsUpdate;
-(BOOL)isEnabled;
-(void)_setNeedsUpdate;
-(void)performChanges:(/*^block*/id)arg1 ;
-(void)setHdrGain:(float)arg1 ;
-(void)dealloc;
-(void)setRevealsGainMapImage:(BOOL)arg1 ;
-(void)performChanges_Private:(/*^block*/id)arg1 ;
-(void)setDisplayingVideoComplement:(BOOL)arg1 ;
@end

