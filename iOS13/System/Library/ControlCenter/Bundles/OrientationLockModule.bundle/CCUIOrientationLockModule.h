/*
* Generated on Monday, March 1, 2021 at 2:33:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/ControlCenter/Bundles/OrientationLockModule.bundle/OrientationLockModule
*/

#import <ControlCenterUIKit/CCUIToggleModule.h>
#import <libobjc.A.dylib/CCUIInternalContentModule.h>

@protocol CCUIControlCenterSystemAgent;
@class NSString;

@interface CCUIOrientationLockModule : CCUIToggleModule <CCUIInternalContentModule> {

	id<CCUIControlCenterSystemAgent> _systemAgent;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) UIViewController*<CCUIContentModuleContentViewController> contentViewController; 
@property (nonatomic,readonly) UIViewController*<CCUIContentModuleBackgroundViewController> backgroundViewController; 
-(void)dealloc;
-(BOOL)isSelected;
-(void)setSelected:(BOOL)arg1 ;
-(void)_updateState;
-(id)glyphPackageDescription;
-(id)glyphState;
-(void)_observeSystemNotifications;
-(void)_unobserveSystemNotifications;
-(void)_updateForDarkerSystemColorsChange;
-(id)initWithSystemAgent:(id)arg1 ;
@end

