/*
* Generated on Thursday, January 14, 2021 at 2:25:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
*/

#import <NeutrinoCore/NeutrinoCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>

@interface NURegion : NSObject <NSCopying, NSMutableCopying> {

	Region* _imp;

}
+(id)region;
+(id)regionWithRect:(SCD_Struct_NU8)arg1 ;
+(id)regionWithRegion:(id)arg1 ;
-(SCD_Struct_NU8)bounds;
-(double)density;
-(id)init;
-(double)area;
-(unsigned long long)count;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)initWithRegion:(id)arg1 ;
-(BOOL)intersectsRect:(SCD_Struct_NU8)arg1 ;
-(BOOL)intersectsRegion:(id)arg1 ;
-(id)initWithRect:(SCD_Struct_NU8)arg1 ;
-(unsigned long long)hash;
-(BOOL)isEmpty;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
-(BOOL)isEqualToRegion:(id)arg1 ;
-(void)enumerateRects:(/*^block*/id)arg1 ;
-(BOOL)includesRect:(SCD_Struct_NU8)arg1 ;
-(BOOL)includesRegion:(id)arg1 ;
-(id)regionByClippingToRect:(SCD_Struct_NU8)arg1 ;
-(id)regionByAddingRect:(SCD_Struct_NU8)arg1 ;
-(id)regionByAddingRegion:(id)arg1 ;
-(id)regionByRemovingRect:(SCD_Struct_NU8)arg1 ;
-(id)regionByRemovingRegion:(id)arg1 ;
-(id)regionByClippingToRegion:(id)arg1 ;
-(id)regionByExcludingRect:(SCD_Struct_NU8)arg1 ;
-(id)regionByExcludingRegion:(id)arg1 ;
-(id)regionByScalingBy:(CGPoint)arg1 withRounding:(long long)arg2 ;
-(id)regionByTranslatingBy:(SCD_Struct_NU7)arg1 ;
-(id)regionByGrowingBy:(SCD_Struct_NU7)arg1 ;
-(id)regionByGrowingBy:(SCD_Struct_NU7)arg1 inRect:(SCD_Struct_NU8)arg2 ;
-(id)regionByShrinkingBy:(SCD_Struct_NU7)arg1 ;
-(id)regionByShrinkingBy:(SCD_Struct_NU7)arg1 inRect:(SCD_Struct_NU8)arg2 ;
-(id)regionByApplyingOrientation:(long long)arg1 imageSize:(SCD_Struct_NU7)arg2 ;
-(id)regionByApplyingAffineTransform:(CGAffineTransform)arg1 roundPolicy:(long long)arg2 ;
-(id)regionByFlippingInRect:(SCD_Struct_NU8)arg1 ;
-(id)convertImageRegion:(id)arg1 fromRect:(SCD_Struct_NU8)arg2 toRect:(SCD_Struct_NU8)arg3 ;
-(id)regionWithSubregionsOfMinimumDensity:(double)arg1 ;
@end

