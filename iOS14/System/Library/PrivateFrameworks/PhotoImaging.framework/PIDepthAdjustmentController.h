/*
* Generated on Thursday, January 14, 2021 at 2:28:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotoImaging.framework/PhotoImaging
*/

#import <PhotoImaging/PIAdjustmentController.h>

@class NSDictionary, NSNumber;

@interface PIDepthAdjustmentController : PIAdjustmentController

@property (nonatomic,copy) NSDictionary * depthInfo; 
@property (assign,nonatomic) double aperture; 
@property (nonatomic,copy) NSNumber * glassesMatteAllowed; 
+(id)glassesMatteAllowedKey;
+(id)depthInfoKey;
+(id)apertureKey;
-(BOOL)canRenderDepth;
-(void)setAperture:(double)arg1 ;
-(double)aperture;
-(NSNumber *)glassesMatteAllowed;
-(id)capturedAperture;
-(NSDictionary *)depthInfo;
-(void)setDepthInfo:(NSDictionary *)arg1 ;
-(void)setGlassesMatteAllowed:(NSNumber *)arg1 ;
-(id)initWithAdjustment:(id)arg1 ;
@end

