/*
* Generated on Monday, March 1, 2021 at 2:35:12 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
*/


#import <ProVideo/ProVideo-Structs.h>
@interface PVColorSpace : NSObject {

	int _type;

}
+(id)sRGBColorSpace;
+(id)extendedSRGBColorSpace;
+(id)pvColorSpaceFromCGColorSpace:(CGColorSpaceRef)arg1 ;
+(id)p3d65GammaColorSpace;
+(id)rec601GammaColorSpace;
+(id)rec601LinearColorSpace;
+(id)rec709GammaColorSpace;
+(id)rec709LinearColorSpace;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)name;
-(id)initWithType:(int)arg1 ;
-(CGColorSpaceRef)cgColorSpace;
-(BOOL)isP3d65GammaColorSpace;
-(BOOL)isWideGamutSpace;
-(BOOL)isExtendedSRGBColorSpace;
-(BOOL)isSRGBColorSpace;
-(BOOL)isEqualToCGColorSpace:(CGColorSpaceRef)arg1 ;
-(BOOL)isRec601GammaColorSpace;
-(BOOL)isRec601LinearColorSpace;
-(BOOL)isRec709GammaColorSpace;
-(BOOL)isRec709LinearColorSpace;
@end

