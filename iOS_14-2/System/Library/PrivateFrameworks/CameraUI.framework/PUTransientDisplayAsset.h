/*
* Generated on Thursday, January 14, 2021 at 2:26:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
*/

@class NSURL, NSString, UIImage;


@protocol PUTransientDisplayAsset <PUDisplayAsset>
@property (nonatomic,copy,readonly) NSURL * persistenceURL; 
@property (getter=isHDR,nonatomic,readonly) BOOL HDR; 
@property (nonatomic,copy,readonly) NSString * burstIdentifier; 
@property (nonatomic,readonly) unsigned long long numberOfRepresentedAssets; 
@property (nonatomic,readonly) UIImage * placeholderImage; 
@required
-(NSURL *)persistenceURL;
-(NSString *)burstIdentifier;
-(unsigned long long)numberOfRepresentedAssets;
-(UIImage *)placeholderImage;
-(BOOL)isHDR;

@end

