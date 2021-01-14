/*
* Generated on Thursday, January 14, 2021 at 2:23:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardUIServices.framework/SpringBoardUIServices
*/

#import <SpringBoardUIServices/SpringBoardUIServices-Structs.h>
#import <UIKitCore/UIMutableApplicationSceneClientSettings.h>
#import <libobjc.A.dylib/SBSUILoginUISceneClientSettings.h>

@class NSString;

@interface SBSUIMutableLoginUISceneClientSettings : UIMutableApplicationSceneClientSettings <SBSUILoginUISceneClientSettings>

@property (assign,nonatomic) long long idleTimerMode; 
@property (nonatomic,copy) NSString * statusBarUserNameOverride; 
@property (assign,nonatomic) long long rotationMode; 
@property (assign,nonatomic) unsigned long long wallpaperMode; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setWallpaperMode:(unsigned long long)arg1 ;
-(unsigned long long)wallpaperMode;
-(id)valueDescriptionForFlag:(long long)arg1 object:(id)arg2 ofSetting:(unsigned long long)arg3 ;
-(id)keyDescriptionForSetting:(unsigned long long)arg1 ;
-(NSString *)statusBarUserNameOverride;
-(void)setStatusBarUserNameOverride:(NSString *)arg1 ;
-(void)setIdleTimerMode:(long long)arg1 ;
-(long long)idleTimerMode;
-(long long)rotationMode;
-(void)setRotationMode:(long long)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

