/*
* Generated on Thursday, January 14, 2021 at 2:27:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CameraEffectsKit.framework/CameraEffectsKit
*/

#import <CameraEffectsKit/CameraEffectsKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface JFXEffectAssetAttributes : NSObject <NSCopying> {

	long long _contentType;
	long long _aspectRatio;
	long long _usageMode;
	long long _colorDynamicRange;
	long long _quality;

}

@property (assign,nonatomic) long long contentType;                    //@synthesize contentType=_contentType - In the implementation block
@property (assign,nonatomic) long long aspectRatio;                    //@synthesize aspectRatio=_aspectRatio - In the implementation block
@property (assign,nonatomic) long long usageMode;                      //@synthesize usageMode=_usageMode - In the implementation block
@property (assign,nonatomic) long long colorDynamicRange;              //@synthesize colorDynamicRange=_colorDynamicRange - In the implementation block
@property (assign,nonatomic) long long quality;                        //@synthesize quality=_quality - In the implementation block
-(id)init;
-(long long)contentType;
-(long long)aspectRatio;
-(long long)quality;
-(id)description;
-(void)setAspectRatio:(long long)arg1 ;
-(void)setContentType:(long long)arg1 ;
-(void)setQuality:(long long)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)usageMode;
-(void)setUsageMode:(long long)arg1 ;
-(long long)colorDynamicRange;
-(void)setColorDynamicRange:(long long)arg1 ;
-(BOOL)isMatchingFilterAttributes:(id)arg1 ;
@end

