/*
* Generated on Monday, March 1, 2021 at 2:35:10 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotoImaging.framework/PhotoImaging
*/

#import <PhotoImaging/PIAdjustmentController.h>

@class NSDictionary;

@interface PIDepthAdjustmentController : PIAdjustmentController

@property (nonatomic,copy) NSDictionary * depthInfo; 
@property (assign,nonatomic) double aperture; 
+(id)depthInfoKey;
+(id)apertureKey;
-(NSDictionary *)depthInfo;
-(void)setAperture:(double)arg1 ;
-(double)aperture;
-(void)setDepthInfo:(NSDictionary *)arg1 ;
-(id)capturedAperture;
-(BOOL)canRenderDepth;
-(id)initWithAdjustment:(id)arg1 ;
@end

