/*
* Generated on Monday, March 1, 2021 at 2:33:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
*/


@protocol TSDGLDataBufferAccessor <NSObject>
@required
-(void)setGLfloat:(float)arg1 forAttribute:(id)arg2 atIndex:(unsigned long long)arg3;
-(float)GLfloatForAttribute:(id)arg1 atIndex:(unsigned long long)arg2;
-(void)setCGFloat:(double)arg1 forAttribute:(id)arg2 atIndex:(unsigned long long)arg3;
-(SCD_Struct_TS78*)GLPoint2DForAttribute:(id)arg1 atIndex:(unsigned long long)arg2;
-(void)setGLPoint2D:(SCD_Struct_TS78)arg1 forAttribute:(id)arg2 atIndex:(unsigned long long)arg3;
-(SCD_Struct_TS79*)GLPoint3DForAttribute:(id)arg1 atIndex:(unsigned long long)arg2;
-(void)setGLPoint3D:(SCD_Struct_TS79)arg1 forAttribute:(id)arg2 atIndex:(unsigned long long)arg3;
-(SCD_Struct_TS80*)GLPoint4DForAttribute:(id)arg1 atIndex:(unsigned long long)arg2;
-(void)setGLPoint4D:(SCD_Struct_TS80)arg1 forAttribute:(id)arg2 atIndex:(unsigned long long)arg3;

@end

