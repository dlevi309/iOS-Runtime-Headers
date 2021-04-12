/*
* Generated on Monday, March 1, 2021 at 2:30:10 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
+(id)cornerMaskWithRadius:(double)arg1 continuous:(BOOL)arg2 cornerMask:(unsigned long long)arg3 ;
+(id)cornerMaskWithRadius:(double)arg1 ;
+(id)continuousCornerMaskWithRadius:(double)arg1 ;
+(id)imageCornerMaskWithImage:(id)arg1 radius:(double)arg2 ;
+(void)_applyZeroMaskToLayer:(id)arg1 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(double)radius;
-(id)_clone;
-(id)cornerMaskAppliedToCorners:(unsigned long long)arg1 ;
-(id)cornerMaskEffectingEdges:(BOOL)arg1 ;
-(void)_applyToLayer:(id)arg1 ;
-(BOOL)_isCornerWithRadius:(double)arg1 continuous:(BOOL)arg2 mask:(unsigned long long)arg3 ;
@end

