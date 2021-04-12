/*
* Generated on Thursday, January 14, 2021 at 2:20:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
+(id)defaultFormat;
+(id)formatForTraitCollection:(id)arg1 ;
+(id)preferredFormat;
-(BOOL)opaque;
-(void)setOpaque:(BOOL)arg1 ;
-(long long)preferredRange;
-(void)setPrefersExtendedRange:(BOOL)arg1 ;
-(id)init;
-(BOOL)_grayscale;
-(double)scale;
-(void)_setOverrideColorSpace:(CGColorSpaceRef)arg1 ;
-(BOOL)_wantsAlphaMask;
-(BOOL)prefersExtendedRange;
-(void)setPreferredRange:(long long)arg1 ;
-(void)_setWantsAlphaMask:(BOOL)arg1 ;
-(void)setScale:(double)arg1 ;
-(CGColorSpaceRef)_overrideColorSpace;
-(void)_setOverrideBitsPerComponent:(long long)arg1 ;
-(long long)_overrideBitsPerComponent;
-(void)_setGrayscale:(BOOL)arg1 ;
-(double)_contextScale;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
@end

