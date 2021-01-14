/*
* Generated on Thursday, January 14, 2021 at 2:22:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/


#import <PhotosUICore/PhotosUICore-Structs.h>
@class NSDictionary;

@interface PXMemoriesFontsSpec : NSObject {

	NSDictionary* _titleTextAttributes;
	NSDictionary* _fallbackTitleTextAttributes;
	NSDictionary* _subtitleTextAttributes;
	double _baselineDistance;
	UIEdgeInsets _padding;

}

@property (nonatomic,readonly) NSDictionary * titleTextAttributes;                      //@synthesize titleTextAttributes=_titleTextAttributes - In the implementation block
@property (nonatomic,readonly) NSDictionary * fallbackTitleTextAttributes;              //@synthesize fallbackTitleTextAttributes=_fallbackTitleTextAttributes - In the implementation block
@property (nonatomic,readonly) NSDictionary * subtitleTextAttributes;                   //@synthesize subtitleTextAttributes=_subtitleTextAttributes - In the implementation block
@property (nonatomic,readonly) double baselineDistance;                                 //@synthesize baselineDistance=_baselineDistance - In the implementation block
@property (nonatomic,readonly) UIEdgeInsets padding;                                    //@synthesize padding=_padding - In the implementation block
+(void)preloadFontsSpecsForExtendedTraitCollection:(id)arg1 ;
+(UIEdgeInsets)paddingForFontSet:(long long)arg1 specSet:(long long)arg2 variant:(long long)arg3 layoutMargins:(UIEdgeInsets)arg4 width:(double)arg5 shouldScale:(BOOL)arg6 forHeaderTile:(BOOL)arg7 ;
+(double)baselineDistanceForFontSet:(long long)arg1 specSet:(long long)arg2 variant:(long long)arg3 size:(CGSize)arg4 shouldScale:(BOOL)arg5 ;
+(id)textAttributesForFontSet:(long long)arg1 specSet:(long long)arg2 labelKind:(long long)arg3 variant:(long long)arg4 size:(CGSize)arg5 shouldScale:(BOOL)arg6 ;
+(id)_fontSpecCache;
+(long long)capitalizationStyleForLabelKind:(long long)arg1 ;
+(long long)numberOfLinesForLabelKind:(long long)arg1 ;
+(id)textAttributesForFontName:(id)arg1 fontSize:(double)arg2 lineHeight:(double)arg3 tracking:(double)arg4 stroke:(double)arg5 shadow:(id)arg6 capitalizationStyle:(long long)arg7 ;
+(id)_fontSetByTitleFontName;
+(id)_titleFontNameByFontSet;
+(id)memoriesFontsSpecForDescriptor:(PXViewSpecDescriptor)arg1 extendedTraitCollection:(id)arg2 ;
+(id)supportedTitleFontNames;
+(void)_getSpecSet:(out long long*)arg1 variant:(out long long*)arg2 forDescriptor:(PXViewSpecDescriptor)arg3 extendedTraitCollection:(id)arg4 ;
+(long long)_memoryLabelKindForDescriptor:(PXViewSpecDescriptor)arg1 ;
+(double)_playButtonPaddingForFontSet:(long long)arg1 specSet:(long long)arg2 variant:(long long)arg3 deviceMargin:(double)arg4 forHeaderTile:(BOOL)arg5 ;
-(NSDictionary *)titleTextAttributes;
-(id)_initWithIdentifier:(PXMemoryFontsSpecIdentifier)arg1 ;
-(UIEdgeInsets)padding;
-(NSDictionary *)fallbackTitleTextAttributes;
-(NSDictionary *)subtitleTextAttributes;
-(double)baselineDistance;
@end

