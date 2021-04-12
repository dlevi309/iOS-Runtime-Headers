/*
* Generated on Monday, March 1, 2021 at 2:35:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotoImaging.framework/PhotoImaging
*/

#import <PhotoImaging/PhotoImaging-Structs.h>
#import <PhotoImaging/PIAdjustmentController.h>

@interface PICropAdjustmentController : PIAdjustmentController

@property (assign,nonatomic) CGRect cropRect; 
@property (assign,nonatomic) long long constraintWidth; 
@property (assign,nonatomic) long long constraintHeight; 
@property (assign,nonatomic) double angle; 
@property (assign,nonatomic) double angleRadians; 
@property (assign,nonatomic) double pitch; 
@property (assign,nonatomic) double pitchRadians; 
@property (assign,nonatomic) double yaw; 
@property (assign,nonatomic) double yawRadians; 
@property (assign,nonatomic) BOOL autoCropped; 
@property (assign,getter=isSmart,nonatomic) BOOL smart; 
@property (assign,getter=isOriginalCrop,nonatomic) BOOL originalCrop; 
+(id)yawKey;
+(id)pitchKey;
+(id)angleKey;
+(id)originalCropKey;
+(id)smartKey;
+(id)heightKey;
+(id)widthKey;
+(id)yOriginKey;
+(id)xOriginKey;
+(id)constraintHeightKey;
+(id)constraintWidthKey;
-(double)pitch;
-(double)yaw;
-(double)angle;
-(void)setAngle:(double)arg1 ;
-(void)setPitch:(double)arg1 ;
-(void)setYaw:(double)arg1 ;
-(CGRect)cropRect;
-(void)setCropRect:(CGRect)arg1 ;
-(void)setOriginalCrop:(BOOL)arg1 ;
-(BOOL)isSmart;
-(void)setSmart:(BOOL)arg1 ;
-(void)setAngleRadians:(double)arg1 ;
-(void)setConstraintHeight:(long long)arg1 ;
-(void)setConstraintWidth:(long long)arg1 ;
-(long long)constraintHeight;
-(long long)constraintWidth;
-(double)yawRadians;
-(double)pitchRadians;
-(BOOL)isCropIdentityForImageSize:(CGSize)arg1 ;
-(BOOL)isOriginalCrop;
-(void)setAutoCropped:(BOOL)arg1 ;
-(double)angleRadians;
-(void)setYawRadians:(double)arg1 ;
-(void)setPitchRadians:(double)arg1 ;
-(BOOL)autoCropped;
-(id)initWithAdjustment:(id)arg1 ;
-(id)visualInputKeys;
-(BOOL)isSettingEqual:(id)arg1 forKey:(id)arg2 ;
-(BOOL)isGeometryIdentityForImageSize:(CGSize)arg1 ;
-(BOOL)isCropConstrained;
@end

