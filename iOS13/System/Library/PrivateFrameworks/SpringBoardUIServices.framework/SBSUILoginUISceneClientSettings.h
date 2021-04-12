/*
* Generated on Monday, March 1, 2021 at 2:32:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(long long)rotationMode;
-(unsigned long long)wallpaperMode;
-(long long)idleTimerMode;
-(NSString *)statusBarUserNameOverride;

@end


@class NSString;

@interface SBSUILoginUISceneClientSettings : UIApplicationSceneClientSettings <SBSUILoginUISceneClientSettings>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) long long idleTimerMode; 
@property (nonatomic,copy,readonly) NSString * statusBarUserNameOverride; 
@property (nonatomic,readonly) long long rotationMode; 
@property (nonatomic,readonly) unsigned long long wallpaperMode; 
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(id)keyDescriptionForSetting:(unsigned long long)arg1 ;
-(id)valueDescriptionForFlag:(long long)arg1 object:(id)arg2 ofSetting:(unsigned long long)arg3 ;
-(long long)rotationMode;
-(unsigned long long)wallpaperMode;
-(long long)idleTimerMode;
-(NSString *)statusBarUserNameOverride;
@end

