/*
* Generated on Thursday, January 14, 2021 at 2:23:01 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
+(double)extraMagnifyingFactorForFramingMode:(id)arg1 ;
+(id)gridThumbnailScope;
+(double)widthForRenderingType:(long long)arg1 options:(unsigned long long)arg2 ;
+(double)thumbnailHeightRatioForFramingMode:(id)arg1 ;
+(id)thumbnailScope;
+(id)simplePickerThumbnailScope;
+(unsigned long long)scopeOptionsForEnvironment:(id)arg1 ;
+(id)listControllerThumbnailScope;
+(id)funCamCarouselThumbnailScope;
+(id)largeThumbnailScope;
-(AVTAvatarPose *)pose;
-(CGSize)size;
-(double)scale;
-(unsigned long long)options;
-(id)initWithRenderingType:(long long)arg1 scale:(double)arg2 options:(unsigned long long)arg3 ;
-(NSString *)framingMode;
-(id)initWithRenderingType:(long long)arg1 scale:(double)arg2 options:(unsigned long long)arg3 framingMode:(id)arg4 pose:(id)arg5 sizeModifier:(float)arg6 ;
-(float)sizeModifier;
-(id)copyWithPose:(id)arg1 ;
-(id)copyWithSizeModifier:(float)arg1 ;
-(id)initWithRenderingType:(long long)arg1 scale:(double)arg2 ;
-(id)initWithRenderingType:(long long)arg1 scale:(double)arg2 options:(unsigned long long)arg3 framingMode:(id)arg4 pose:(id)arg5 ;
-(id)copyWithFramingMode:(id)arg1 ;
-(id)copyApplyingPoseOverride:(id)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(id)cacheableResourceAssociatedIdentifier;
-(unsigned long long)cacheableResourceAssociatedCost;
-(long long)renderingType;
-(id)adaptedFramingModeForObjectType:(long long)arg1 ;
-(id)framingModeIdentifier;
-(BOOL)isEqual:(id)arg1 ;
@end

