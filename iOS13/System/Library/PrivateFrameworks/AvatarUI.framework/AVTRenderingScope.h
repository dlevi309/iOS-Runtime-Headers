/*
* Generated on Monday, March 1, 2021 at 2:32:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
*/


#import <AvatarUI/AvatarUI-Structs.h>
@class NSString, AVTAvatarPose;

@interface AVTRenderingScope : NSObject {

	float _sizeModifier;
	NSString* _framingMode;
	long long _renderingType;
	double _scale;
	unsigned long long _options;
	AVTAvatarPose* _pose;

}

@property (nonatomic,readonly) NSString * framingMode;                  //@synthesize framingMode=_framingMode - In the implementation block
@property (nonatomic,readonly) float sizeModifier;                      //@synthesize sizeModifier=_sizeModifier - In the implementation block
@property (nonatomic,readonly) long long renderingType;                 //@synthesize renderingType=_renderingType - In the implementation block
@property (nonatomic,readonly) double scale;                            //@synthesize scale=_scale - In the implementation block
@property (nonatomic,readonly) CGSize size; 
@property (nonatomic,readonly) unsigned long long options;              //@synthesize options=_options - In the implementation block
@property (nonatomic,readonly) AVTAvatarPose * pose;                    //@synthesize pose=_pose - In the implementation block
+(id)gridThumbnailScope;
+(id)largeThumbnailScope;
+(unsigned long long)scopeOptionsForEnvironment:(id)arg1 ;
+(id)listControllerThumbnailScope;
+(id)funCamCarouselThumbnailScope;
+(double)extraMagnifyingFactorForFramingMode:(id)arg1 ;
+(double)widthForSunflowerRenderingType:(long long)arg1 ;
+(double)widthForRenderingType:(long long)arg1 options:(unsigned long long)arg2 ;
+(double)thumbnailHeightRatioForFramingMode:(id)arg1 ;
+(id)thumbnailScope;
+(id)simplePickerThumbnailScope;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(unsigned long long)options;
-(CGSize)size;
-(double)scale;
-(AVTAvatarPose *)pose;
-(id)initWithRenderingType:(long long)arg1 scale:(double)arg2 ;
-(id)initWithRenderingType:(long long)arg1 scale:(double)arg2 options:(unsigned long long)arg3 framingMode:(id)arg4 pose:(id)arg5 ;
-(id)copyWithFramingMode:(id)arg1 ;
-(id)copyApplyingPoseOverride:(id)arg1 ;
-(long long)renderingType;
-(id)cacheableResourceAssociatedIdentifier;
-(unsigned long long)cacheableResourceAssociatedCost;
-(id)adaptedFramingModeForObjectType:(long long)arg1 ;
-(id)framingModeIdentifier;
-(id)initWithRenderingType:(long long)arg1 scale:(double)arg2 options:(unsigned long long)arg3 ;
-(id)initWithRenderingType:(long long)arg1 scale:(double)arg2 options:(unsigned long long)arg3 framingMode:(id)arg4 pose:(id)arg5 sizeModifier:(float)arg6 ;
-(NSString *)framingMode;
-(float)sizeModifier;
-(id)copyWithSizeModifier:(float)arg1 ;
@end

