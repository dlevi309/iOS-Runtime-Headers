/*
* Generated on Thursday, January 14, 2021 at 2:26:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BannerKit.framework/BannerKit
*/

#import <BannerKit/BannerKit-Structs.h>
#import <UIKitCore/UIMutableApplicationSceneSettings.h>

@class NSString;

@interface BNMutableSceneSettings : UIMutableApplicationSceneSettings

@property (assign,nonatomic) CGSize containerSize; 
@property (assign,nonatomic) CGSize presentationSize; 
@property (assign,nonatomic) int viewControllerAppearState; 
@property (assign,nonatomic) int bannerAppearState; 
@property (nonatomic,copy) NSString * revocationReason; 
@property (assign,getter=isUserInteractionInProgress,nonatomic) BOOL userInteractionInProgress; 
-(void)setContainerSize:(CGSize)arg1 ;
-(BOOL)isUserInteractionInProgress;
-(CGSize)containerSize;
-(CGSize)presentationSize;
-(void)setPresentationSize:(CGSize)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setUserInteractionInProgress:(BOOL)arg1 ;
-(int)bannerAppearState;
-(int)viewControllerAppearState;
-(NSString *)revocationReason;
-(void)setRevocationReason:(NSString *)arg1 ;
-(void)setViewControllerAppearState:(int)arg1 ;
-(void)setBannerAppearState:(int)arg1 ;
@end

