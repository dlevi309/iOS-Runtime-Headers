/*
* Generated on Monday, March 1, 2021 at 2:35:12 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PodcastsKit.framework/PodcastsKit
*/

#import <libobjc.A.dylib/IMImageModifier.h>

@class NSString;

@interface IMImageBlur : NSObject <IMImageModifier> {

	long long _style;
	double _radius;

}

@property (nonatomic,readonly) long long style;                     //@synthesize style=_style - In the implementation block
@property (nonatomic,readonly) double radius;                       //@synthesize radius=_radius - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(long long)style;
-(double)radius;
-(id)_blurredImageFromSourceImage:(id)arg1 ;
-(BOOL)hasModifications;
-(id)_backdropBlurSettings;
-(id)_newBackdropSettings;
-(id)_lightBackdropBlurSettings;
-(id)modificationCacheKey;
-(id)imageFromSourceImage:(id)arg1 ;
-(id)initWithStyle:(long long)arg1 radius:(double)arg2 ;
@end

