/*
* Generated on Monday, March 1, 2021 at 2:30:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/_UISceneMetricsCalculating.h>

@class UIWindowScene, NSString;

@interface _UISceneScreenBasedMetricsCalculator : NSObject <_UISceneMetricsCalculating> {

	UIWindowScene* _scene;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,setter=_setScene:,nonatomic,__weak) UIWindowScene * _scene;              //@synthesize scene=_scene - In the implementation block
-(UIWindowScene *)_scene;
-(void)_setScene:(id)arg1 ;
-(void)_updateMetricsOnWindows:(id)arg1 animated:(BOOL)arg2 ;
@end

