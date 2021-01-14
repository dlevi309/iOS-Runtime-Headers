/*
* Generated on Thursday, January 14, 2021 at 2:27:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
*/


@protocol PVStabilizationDelegate <NSObject>
@optional
-(void)loadWithUserContext:(id)arg1;
-(void)unloadWithUserContext:(id)arg1;
-(BOOL)didStabilize:(id)arg1 time:(SCD_Struct_PM8)arg2 frameData:(CVBufferRef)arg3 inputSize:(CGSize)arg4 cleanAperture:(CGRect)arg5 centeredCleanAperture:(CGRect)arg6 cleanApertureOriginZero:(CGRect)arg7 cropRect:(CGRect)arg8 homography:(/*function pointer*/void*)arg9 homographyMatrix4x4:(/*function pointer*/void*)arg10 userContext:(id)arg11;

@required
-(id)timedStabilizationConfigForTime:(SCD_Struct_PM8)arg1 frameData:(CVBufferRef)arg2 userContext:(id)arg3;

@end

