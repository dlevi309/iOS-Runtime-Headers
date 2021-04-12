/*
* Generated on Thursday, January 14, 2021 at 2:20:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/_UISceneMetricsCalculating.h>

@class UIWindowScene, NSString;

@interface _UIScenefbsSceneBasedMetricsCalculator : NSObject <_UISceneMetricsCalculating> {

	UIWindowScene* _scene;

}

@property (assign,setter=_setScene:,nonatomic,__weak) UIWindowScene * _scene;              //@synthesize scene=_scene - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(UIWindowScene *)_scene;
-(void)_setScene:(id)arg1 ;
-(void)_updateMetricsOnWindows:(id)arg1 animated:(BOOL)arg2 ;
@end

