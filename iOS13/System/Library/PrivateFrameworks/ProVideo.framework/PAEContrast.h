/*
* Generated on Monday, March 1, 2021 at 2:35:13 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
*/

#import <ProVideo/ProVideo-Structs.h>
#import <ProVideo/PAEFilterDefaultBase.h>

@interface PAEContrast : PAEFilterDefaultBase
-(id)properties;
-(id)initWithAPIManager:(id)arg1 ;
-(BOOL)addParameters;
-(BOOL)canThrowRenderOutput:(id)arg1 withInput:(id)arg2 withInfo:(SCD_Struct_PA79*)arg3 ;
-(BOOL)frameSetup:(SCD_Struct_PA79*)arg1 inputInfo:(SCD_Struct_PA80)arg2 hardware:(BOOL*)arg3 software:(BOOL*)arg4 ;
-(CGPoint)calculateBezier:(double)arg1 startPt:(CGPoint)arg2 controlPoint1:(CGPoint)arg3 controlPoint2:(CGPoint)arg4 endPt:(CGPoint)arg5 ;
-(void)generateLut:(RGBAfPixel*)arg1 forContrast:(double)arg2 andPivot:(double)arg3 ;
@end

