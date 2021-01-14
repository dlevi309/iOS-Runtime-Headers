/*
* Generated on Thursday, January 14, 2021 at 2:26:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosFormats.framework/PhotosFormats
*/

#import <PhotosFormats/PhotosFormats-Structs.h>
#import <PhotosFormats/PFCameraAdjustments.h>

@class NSString, AVApplePortraitMetadata;

@interface PFMutableCameraAdjustments : PFCameraAdjustments

@property (nonatomic,copy) NSString * effectFilterName; 
@property (nonatomic,copy) NSString * portraitEffectFilterName; 
@property (nonatomic,retain) AVApplePortraitMetadata * portraitMetadata; 
@property (assign,getter=isDepthEnabled,nonatomic) BOOL depthEnabled; 
@property (assign,nonatomic) CGRect cropRect; 
-(void)setCropRect:(CGRect)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(void)setDepthEnabled:(BOOL)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setPortraitEffectFilterName:(NSString *)arg1 ;
-(void)setEffectFilterName:(NSString *)arg1 ;
-(void)setPortraitMetadata:(AVApplePortraitMetadata *)arg1 ;
@end

