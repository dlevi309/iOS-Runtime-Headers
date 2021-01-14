/*
* Generated on Thursday, January 14, 2021 at 2:28:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(double)angle;
-(CGRect)cropRect;
-(double)pitch;
-(void)setCropRect:(CGRect)arg1 ;
-(double)yaw;
-(double)yawRadians;
-(double)pitchRadians;
-(BOOL)isCropIdentityForImageSize:(CGSize)arg1 ;
-(void)setAutoCropped:(BOOL)arg1 ;
-(BOOL)isOriginalCrop;
-(double)angleRadians;
-(void)setYawRadians:(double)arg1 ;
-(void)setPitchRadians:(double)arg1 ;
-(BOOL)autoCropped;
-(void)setAngleRadians:(double)arg1 ;
-(BOOL)isSmart;
-(void)setAngle:(double)arg1 ;
-(void)setYaw:(double)arg1 ;
-(void)setSmart:(BOOL)arg1 ;
-(long long)constraintHeight;
-(long long)constraintWidth;
-(void)setPitch:(double)arg1 ;
-(void)setConstraintWidth:(long long)arg1 ;
-(void)setConstraintHeight:(long long)arg1 ;
-(void)setOriginalCrop:(BOOL)arg1 ;
-(id)initWithAdjustment:(id)arg1 ;
-(BOOL)isSettingEqual:(id)arg1 forKey:(id)arg2 ;
-(id)visualInputKeys;
-(BOOL)isGeometryIdentityForImageSize:(CGSize)arg1 ;
-(BOOL)isCropConstrained;
@end

