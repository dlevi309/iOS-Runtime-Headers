/*
* Generated on Thursday, January 14, 2021 at 2:25:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
*/

#import <NeutrinoCore/NeutrinoCore-Structs.h>
#import <NeutrinoCore/NUGeometryTransform.h>

@interface NUImageTransform : NUGeometryTransform
-(CGPoint)transformPoint:(CGPoint)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(id)inverseTransform;
-(BOOL)isEqual:(id)arg1 ;
-(id)transformByScaleX:(double)arg1 scaleY:(double)arg2 ;
-(id)transformByTranslateX:(double)arg1 translateY:(double)arg2 ;
-(id)transformByRotateZ:(double)arg1 ;
-(id)transformByRotateX:(double)arg1 y:(double)arg2 z:(double)arg3 ;
-(BOOL)isIdentityImageTransform;
-(CGRect)transformRect:(CGRect)arg1 ;
@end

