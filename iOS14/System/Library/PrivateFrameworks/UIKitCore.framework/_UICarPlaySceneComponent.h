/*
* Generated on Thursday, January 14, 2021 at 2:20:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/_UISceneComponentProviding.h>

@class UIScene, UICarPlayApplicationSceneSettings, NSString;

@interface _UICarPlaySceneComponent : NSObject <_UISceneComponentProviding> {

	UIScene* _scene;
	UICarPlayApplicationSceneSettings* _carPlaySceneSettings;

}

@property (nonatomic,retain) UICarPlayApplicationSceneSettings * carPlaySceneSettings;              //@synthesize carPlaySceneSettings=_carPlaySceneSettings - In the implementation block
@property (nonatomic,readonly) BOOL disableFiveRowKeyboards; 
@property (assign,setter=_setScene:,getter=_scene,nonatomic,__weak) UIScene * _scene;               //@synthesize scene=_scene - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(UIScene *)_scene;
-(void)_setScene:(id)arg1 ;
-(id)initWithScene:(id)arg1 ;
-(BOOL)disableFiveRowKeyboards;
-(UICarPlayApplicationSceneSettings *)carPlaySceneSettings;
-(void)setCarPlaySceneSettings:(UICarPlayApplicationSceneSettings *)arg1 ;
@end

