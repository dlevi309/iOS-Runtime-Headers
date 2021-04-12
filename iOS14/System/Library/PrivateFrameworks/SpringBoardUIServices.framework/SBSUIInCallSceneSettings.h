/*
* Generated on Thursday, January 14, 2021 at 2:23:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardUIServices.framework/SpringBoardUIServices
*/

#import <SpringBoardUIServices/SpringBoardUIServices-Structs.h>
#import <UIKitCore/UIApplicationSceneSettings.h>

@interface SBSUIInCallSceneSettings : UIApplicationSceneSettings

@property (nonatomic,readonly) long long inCallPresentationMode; 
@property (getter=isAttachedToWindowedAccessory,nonatomic,readonly) BOOL attachedToWindowedAccessory; 
@property (nonatomic,readonly) CGRect windowedAccessoryCutoutFrameInScreen; 
-(long long)inCallPresentationMode;
-(BOOL)isAttachedToWindowedAccessory;
-(CGRect)windowedAccessoryCutoutFrameInScreen;
-(id)valueDescriptionForFlag:(long long)arg1 object:(id)arg2 ofSetting:(unsigned long long)arg3 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(id)keyDescriptionForSetting:(unsigned long long)arg1 ;
@end

