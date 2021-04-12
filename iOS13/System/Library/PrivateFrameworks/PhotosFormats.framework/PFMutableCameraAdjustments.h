/*
* Generated on Monday, March 1, 2021 at 2:32:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(void)setCropRect:(CGRect)arg1 ;
-(void)setPortraitEffectFilterName:(NSString *)arg1 ;
-(void)setEffectFilterName:(NSString *)arg1 ;
-(void)setDepthEnabled:(BOOL)arg1 ;
-(void)setPortraitMetadata:(AVApplePortraitMetadata *)arg1 ;
@end

