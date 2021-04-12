/*
* Generated on Monday, March 1, 2021 at 2:35:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
*/


#import <NeutrinoCore/NeutrinoCore-Structs.h>
@class NSArray;

@interface NUSpace : NSObject {

	NSArray* _transformStack;

}

@property (retain) NSArray * transformStack;              //@synthesize transformStack=_transformStack - In the implementation block
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)appendTransform:(id)arg1 ;
-(id)initWithTransformStack:(id)arg1 ;
-(CGPoint)transformPoint:(CGPoint)arg1 toSpace:(id)arg2 ;
-(CGPoint)transformPointForward:(CGPoint)arg1 ;
-(CGPoint)transformPointBackward:(CGPoint)arg1 ;
-(SCD_Struct_NU4)transformTime:(SCD_Struct_NU4)arg1 ;
-(SCD_Struct_NU4)transformTime:(SCD_Struct_NU4)arg1 toSpace:(id)arg2 ;
-(SCD_Struct_NU4)transformTimeBackward:(SCD_Struct_NU4)arg1 ;
-(BOOL)isEqualToSpace:(id)arg1 ;
-(NSArray *)transformStack;
-(void)setTransformStack:(NSArray *)arg1 ;
@end

