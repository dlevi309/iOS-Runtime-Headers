/*
* Generated on Thursday, January 14, 2021 at 2:27:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CameraEffectsKit.framework/CameraEffectsKit
*/

#import <CameraEffectsKit/CameraEffectsKit-Structs.h>
#import <CameraEffectsKit/JFXEffectContinousPreviewOptions.h>

@class JTImage;

@interface JFXEffectContinousPreviewImageOptions : JFXEffectContinousPreviewOptions {

	unsigned long long _preferredUpdatesPerSecond;
	JTImage* _backgroundImage;

}

@property (nonatomic,readonly) unsigned long long preferredUpdatesPerSecond;              //@synthesize preferredUpdatesPerSecond=_preferredUpdatesPerSecond - In the implementation block
@property (nonatomic,retain) JTImage * backgroundImage;                                   //@synthesize backgroundImage=_backgroundImage - In the implementation block
-(void)setBackgroundImage:(JTImage *)arg1 ;
-(JTImage *)backgroundImage;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initImageOptionsWithFrameRate:(unsigned long long)arg1 ;
-(unsigned long long)preferredUpdatesPerSecond;
@end

