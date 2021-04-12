/*
* Generated on Thursday, January 14, 2021 at 2:28:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
*/


#import <ProVideo/ProVideo-Structs.h>
@interface PVColorSpace : NSObject {

	int _type;

}

@property (nonatomic,readonly) unsigned jfx_getCVPixelFormatForDisplay; 
@property (nonatomic,readonly) unsigned jfx_getCVPixelFormatForExport; 
+(id)jfx_compareAndChooseGreaterColorSpace:(id)arg1 right:(id)arg2 ;
+(id)jfx_compareAndChooseLesserColorSpace:(id)arg1 right:(id)arg2 ;
+(id)jfx_getColorSpaceFromColorPrimaries:(CFStringRef)arg1 transferFunction:(CFStringRef)arg2 matrix:(const CFStringRef)arg3 ;
+(id)jfx_getColorSpaceFromCGColorSpace:(CGColorSpaceRef)arg1 ;
+(id)jfx_getColorSpaceFromPixelBuffer:(CVBufferRef)arg1 ;
+(id)jfx_getColorSpaceFromCaptureColorSpace:(long long)arg1 ;
+(id)jfx_getColorSpaceFromImageBuffer:(id)arg1 ;
+(BOOL)JFX_isRec709Gamma:(CFStringRef)arg1 transferFunction:(CFStringRef)arg2 matrix:(const CFStringRef)arg3 ;
+(BOOL)JFX_isP3D65:(CFStringRef)arg1 transferFunction:(CFStringRef)arg2 matrix:(const CFStringRef)arg3 ;
+(BOOL)JFX_isRec601Gamma:(CFStringRef)arg1 transferFunction:(CFStringRef)arg2 matrix:(const CFStringRef)arg3 ;
+(BOOL)JFX_isRec709Linear:(CFStringRef)arg1 transferFunction:(CFStringRef)arg2 matrix:(const CFStringRef)arg3 ;
+(BOOL)JFX_isP3HLG:(CFStringRef)arg1 transferFunction:(CFStringRef)arg2 matrix:(const CFStringRef)arg3 ;
+(BOOL)JFX_isP3PQ:(CFStringRef)arg1 transferFunction:(CFStringRef)arg2 matrix:(const CFStringRef)arg3 ;
+(BOOL)JFX_isRec2100HLG:(CFStringRef)arg1 transferFunction:(CFStringRef)arg2 matrix:(const CFStringRef)arg3 ;
+(BOOL)JFX_isRec2100PQ:(CFStringRef)arg1 transferFunction:(CFStringRef)arg2 matrix:(const CFStringRef)arg3 ;
+(BOOL)JFX_isRec2020Linear:(CFStringRef)arg1 transferFunction:(CFStringRef)arg2 matrix:(const CFStringRef)arg3 ;
+(id)JFX_nclcDictionaryForColorSpace:(id)arg1 ;
+(BOOL)JFX_compareTriplets:(CFStringRef)arg1 transferFunction:(CFStringRef)arg2 matrix:(const CFStringRef)arg3 validNCLCTriplets:(id)arg4 ;
+(id)sRGBColorSpace;
+(id)preferredDisplayColorSpace;
+(id)rec709GammaColorSpace;
+(id)preferredExportColorSpace;
+(id)p3d65GammaColorSpace;
+(id)rec601GammaColorSpace;
+(id)rec709LinearColorSpace;
+(id)p3HLGGammaColorSpace;
+(id)p3PQGammaColorSpace;
+(id)rec2100HLGColorSpace;
+(id)rec2100PQColorSpace;
+(id)rec2020LinearColorSpace;
+(id)extendedSRGBColorSpace;
+(id)extendedLinearSRGBColorSpace;
+(id)pvColorSpaceFromCGColorSpace:(CGColorSpaceRef)arg1 ;
+(id)pvColorSpaceForCVPixelBuffer:(CVBufferRef)arg1 ;
+(id)rec2020HLGColorSpace;
+(id)rec2020PQColorSpace;
-(unsigned)jfx_getCVPixelFormatForExport;
-(void)jfx_attachColorSpaceToPixelBuffer:(CVBufferRef)arg1 ;
-(unsigned)jfx_getCVPixelFormatForDisplay;
-(id)initWithType:(int)arg1 ;
-(id)name;
-(id)description;
-(unsigned long long)hash;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)isHDRSpace;
-(id)nclcTriplet;
-(BOOL)isRec2100HLGColorSpace;
-(BOOL)isWideGamutSpace;
-(BOOL)isP3d65GammaColorSpace;
-(CGColorSpaceRef)cgColorSpace;
-(BOOL)isExtendedSRGBColorSpace;
-(BOOL)isSRGBColorSpace;
-(BOOL)isRec709GammaColorSpace;
-(BOOL)isEqualToCGColorSpace:(CGColorSpaceRef)arg1 ;
-(BOOL)isRec2100PQColorSpace;
-(BOOL)isExtendedLinearSRGBColorSpace;
-(BOOL)isRec2020LinearColorSpace;
-(BOOL)isP3HLGGammaColorSpace;
-(BOOL)isP3PQGammaColorSpace;
-(BOOL)isRec601GammaColorSpace;
-(BOOL)isRec709LinearColorSpace;
-(BOOL)isRec2020HLGColorSpace;
-(BOOL)isRec2020PQColorSpace;
@end

