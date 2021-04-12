/*
* Generated on Monday, March 1, 2021 at 2:30:15 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIGraphicsRendererFormat.h>

@interface UIGraphicsImageRendererFormat : UIGraphicsRendererFormat {

	CGColorSpaceRef _overrideColorSpace;
	BOOL _opaque;
	long long _overrideBitsPerComponent;
	double _scale;
	long long _preferredRange;

}

@property (assign,setter=_setOverrideColorSpace:,getter=_overrideColorSpace,nonatomic) CGColorSpaceRef _overrideColorSpace; 
@property (assign,setter=_setOverrideBitsPerComponent:,getter=_overrideBitsPerComponent,nonatomic) long long _overrideBitsPerComponent;              //@synthesize overrideBitsPerComponent=_overrideBitsPerComponent - In the implementation block
@property (getter=_contextScale,nonatomic,readonly) double _contextScale; 
@property (assign,setter=_setWantsAlphaMask:,getter=_wantsAlphaMask,nonatomic) BOOL _wantsAlphaMask; 
@property (assign,setter=_setGrayscale:,getter=_grayscale,nonatomic) BOOL _grayscale; 
@property (assign,nonatomic) double scale;                                                                                                           //@synthesize scale=_scale - In the implementation block
@property (assign,nonatomic) BOOL opaque;                                                                                                            //@synthesize opaque=_opaque - In the implementation block
@property (assign,nonatomic) BOOL prefersExtendedRange; 
@property (assign,nonatomic) long long preferredRange;                                                                                               //@synthesize preferredRange=_preferredRange - In the implementation block
+(id)preferredFormat;
+(id)defaultFormat;
+(id)formatForTraitCollection:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(id)copyWithZone:(NSZone*)arg1 ;
-(double)scale;
-(void)setScale:(double)arg1 ;
-(void)setOpaque:(BOOL)arg1 ;
-(void)setPreferredRange:(long long)arg1 ;
-(BOOL)opaque;
-(void)_setOverrideColorSpace:(CGColorSpaceRef)arg1 ;
-(void)_setOverrideBitsPerComponent:(long long)arg1 ;
-(void)setPrefersExtendedRange:(BOOL)arg1 ;
-(CGColorSpaceRef)_overrideColorSpace;
-(long long)_overrideBitsPerComponent;
-(long long)preferredRange;
-(BOOL)prefersExtendedRange;
-(BOOL)_wantsAlphaMask;
-(BOOL)_grayscale;
-(double)_contextScale;
-(void)_setWantsAlphaMask:(BOOL)arg1 ;
-(void)_setGrayscale:(BOOL)arg1 ;
@end

