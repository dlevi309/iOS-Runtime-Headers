/*
* Generated on Monday, March 1, 2021 at 2:35:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(unsigned long long)count;
-(BOOL)isEmpty;
-(SCD_Struct_NU8)bounds;
-(id)initWithRect:(SCD_Struct_NU8)arg1 ;
-(BOOL)intersectsRect:(SCD_Struct_NU8)arg1 ;
-(double)density;
-(BOOL)intersectsRegion:(id)arg1 ;
-(id)initWithRegion:(id)arg1 ;
-(double)area;
-(BOOL)isEqualToRegion:(id)arg1 ;
-(id)regionByAddingRegion:(id)arg1 ;
-(void)enumerateRects:(/*^block*/id)arg1 ;
-(BOOL)includesRect:(SCD_Struct_NU8)arg1 ;
-(BOOL)includesRegion:(id)arg1 ;
-(id)regionByAddingRect:(SCD_Struct_NU8)arg1 ;
-(id)regionByRemovingRect:(SCD_Struct_NU8)arg1 ;
-(id)regionByRemovingRegion:(id)arg1 ;
-(id)regionByClippingToRect:(SCD_Struct_NU8)arg1 ;
-(id)regionByClippingToRegion:(id)arg1 ;
-(id)regionByExcludingRect:(SCD_Struct_NU8)arg1 ;
-(id)regionByExcludingRegion:(id)arg1 ;
-(id)regionByTranslatingBy:(SCD_Struct_NU7)arg1 ;
-(id)regionByGrowingBy:(SCD_Struct_NU7)arg1 ;
-(id)regionByGrowingBy:(SCD_Struct_NU7)arg1 inRect:(SCD_Struct_NU8)arg2 ;
-(id)regionByShrinkingBy:(SCD_Struct_NU7)arg1 ;
-(id)regionByShrinkingBy:(SCD_Struct_NU7)arg1 inRect:(SCD_Struct_NU8)arg2 ;
-(id)regionByApplyingOrientation:(long long)arg1 imageSize:(SCD_Struct_NU7)arg2 ;
-(id)regionByFlippingInRect:(SCD_Struct_NU8)arg1 ;
-(id)regionByScalingBy:(CGPoint)arg1 withRounding:(long long)arg2 ;
-(id)regionByApplyingAffineTransform:(CGAffineTransform)arg1 roundPolicy:(long long)arg2 ;
-(id)convertImageRegion:(id)arg1 fromRect:(SCD_Struct_NU8)arg2 toRect:(SCD_Struct_NU8)arg3 ;
-(id)regionWithSubregionsOfMinimumDensity:(double)arg1 ;
@end

