/*
* Generated on Thursday, January 14, 2021 at 2:23:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardUIServices.framework/SpringBoardUIServices
*/

#import <SpringBoardUIServices/SpringBoardUIServices-Structs.h>
#import <UIKitCore/UIApplicationSceneClientSettings.h>
#import <libobjc.A.dylib/SBSUILoginUISceneClientSettings.h>
@class NSString;


@protocol SBSUILoginUISceneClientSettings <NSObject>
@property (nonatomic,readonly) long long idleTimerMode; 
@property (nonatomic,copy,readonly) NSString * statusBarUserNameOverride; 
@property (nonatomic,readonly) long long rotationMode; 
@property (nonatomic,readonly) unsigned long long wallpaperMode; 
@required
-(unsigned long long)wallpaperMode;
-(NSString *)statusBarUserNameOverride;
-(long long)idleTimerMode;
-(long long)rotationMode;

@end


@class NSString;

@interface SBSUILoginUISceneClientSettings : UIApplicationSceneClientSettings <SBSUILoginUISceneClientSettings>

@property (nonatomic,readonly) long long idleTimerMode; 
@property (nonatomic,copy,readonly) NSString * statusBarUserNameOverride; 
@property (nonatomic,readonly) long long rotationMode; 
@property (nonatomic,readonly) unsigned long long wallpaperMode; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(unsigned long long)wallpaperMode;
-(id)valueDescriptionForFlag:(long long)arg1 object:(id)arg2 ofSetting:(unsigned long long)arg3 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(id)keyDescriptionForSetting:(unsigned long long)arg1 ;
-(NSString *)statusBarUserNameOverride;
-(long long)idleTimerMode;
-(long long)rotationMode;
@end

