/*
* Generated on Monday, March 1, 2021 at 2:31:32 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/CoreServices/RawCamera.bundle/RawCamera
*/

#import <RawCamera/RawCamera-Structs.h>
#import <CoreImage/CIFilter.h>

@interface RAWFilter : CIFilter
+(id)filterWithName:(id)arg1 ;
+(id)filterWithDefaultsForClass:(Class)arg1 ;
+(id)filterWithDefaultsForName:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)takeAttributesFromDictionary:(id)arg1 ;
-(void)takeAttributesFromDictionary:(id)arg1 forKeys:(id)arg2 ;
-(id)apply:(id)arg1 image:(id)arg2 arguments:(id)arg3 inoutSpace:(CGColorSpaceRef)arg4 isPremultiplied:(BOOL)arg5 ;
-(id)apply:(id)arg1 image:(id)arg2 extent:(CGRect)arg3 roiCallback:(/*^block*/id)arg4 arguments:(id)arg5 inoutSpace:(CGColorSpaceRef)arg6 isAlphaOne:(BOOL)arg7 ;
-(id)apply:(id)arg1 image:(id)arg2 arguments:(id)arg3 inoutSpace:(CGColorSpaceRef)arg4 isPremultiplied:(BOOL)arg5 isAlphaOne:(BOOL)arg6 ;
-(void)setPrimitiveNumberValue:(id)arg1 inVariable:(id*)arg2 forKey:(id)arg3 ;
-(id)apply:(id)arg1 image:(id)arg2 extent:(CGRect)arg3 roiCallback:(/*^block*/id)arg4 arguments:(id)arg5 inoutSpace:(CGColorSpaceRef)arg6 ;
-(id)applyMatrixToImage:(id)arg1 vectorR:(id)arg2 vectorG:(id)arg3 vectorB:(id)arg4 vectorBias:(id)arg5 inSpace:(CGColorSpaceRef)arg6 outSpace:(CGColorSpaceRef)arg7 ;
@end

