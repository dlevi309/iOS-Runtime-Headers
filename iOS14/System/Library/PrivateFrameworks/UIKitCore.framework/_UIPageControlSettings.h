/*
* Generated on Thursday, January 14, 2021 at 2:20:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <PrototypeTools/PTSettings.h>

@class _UIPageControlIndicatorSettings, _UIPageControlPlatterSettings;

@interface _UIPageControlSettings : PTSettings {

	_UIPageControlIndicatorSettings* _indicatorSettings;
	_UIPageControlPlatterSettings* _platterSettings;

}

@property (nonatomic,retain) _UIPageControlIndicatorSettings * indicatorSettings;              //@synthesize indicatorSettings=_indicatorSettings - In the implementation block
@property (nonatomic,retain) _UIPageControlPlatterSettings * platterSettings;                  //@synthesize platterSettings=_platterSettings - In the implementation block
+(id)settingsControllerModule;
-(_UIPageControlIndicatorSettings *)indicatorSettings;
-(_UIPageControlPlatterSettings *)platterSettings;
-(void)setPlatterSettings:(_UIPageControlPlatterSettings *)arg1 ;
-(void)setIndicatorSettings:(_UIPageControlIndicatorSettings *)arg1 ;
@end

