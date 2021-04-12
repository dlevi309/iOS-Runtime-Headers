/*
* Generated on Thursday, January 14, 2021 at 2:26:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BannerKit.framework/BannerKit
*/

#import <BannerKit/BannerKit-Structs.h>
#import <UIKitCore/UIApplicationSceneSettings.h>

@class NSString;

@interface BNSceneSettings : UIApplicationSceneSettings

@property (nonatomic,readonly) CGSize containerSize; 
@property (nonatomic,readonly) CGSize presentationSize; 
@property (nonatomic,readonly) int viewControllerAppearState; 
@property (nonatomic,readonly) int bannerAppearState; 
@property (nonatomic,copy,readonly) NSString * revocationReason; 
@property (getter=isUserInteractionInProgress,nonatomic,readonly) BOOL userInteractionInProgress; 
-(BOOL)isUserInteractionInProgress;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(CGSize)containerSize;
-(CGSize)presentationSize;
-(int)bannerAppearState;
-(int)viewControllerAppearState;
-(NSString *)revocationReason;
@end

