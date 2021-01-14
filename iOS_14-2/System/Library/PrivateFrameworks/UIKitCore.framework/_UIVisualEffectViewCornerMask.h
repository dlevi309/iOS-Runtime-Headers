/*
* Generated on Thursday, January 14, 2021 at 2:20:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class UIImage;

@interface _UIVisualEffectViewCornerMask : NSObject <NSCopying> {

	UIImage* _image;
	CGRect _imageCenter;
	unsigned long long _appliedCorners;
	BOOL _continuous;
	BOOL _effectsEdges;
	double _radius;

}

@property (nonatomic,readonly) double radius;              //@synthesize radius=_radius - In the implementation block
+(void)_applyZeroMaskToLayer:(id)arg1 ;
+(id)cornerMaskWithRadius:(double)arg1 continuous:(BOOL)arg2 cornerMask:(unsigned long long)arg3 ;
+(id)continuousCornerMaskWithRadius:(double)arg1 ;
+(id)imageCornerMaskWithImage:(id)arg1 radius:(double)arg2 ;
+(id)cornerMaskWithRadius:(double)arg1 ;
-(id)init;
-(void)_applyToLayer:(id)arg1 ;
-(BOOL)_isCornerWithRadius:(double)arg1 continuous:(BOOL)arg2 mask:(unsigned long long)arg3 ;
-(double)radius;
-(id)cornerMaskAppliedToCorners:(unsigned long long)arg1 ;
-(id)_clone;
-(id)cornerMaskEffectingEdges:(BOOL)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

