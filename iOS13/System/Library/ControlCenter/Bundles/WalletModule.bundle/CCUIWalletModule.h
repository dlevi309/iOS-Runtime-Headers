/*
* Generated on Monday, March 1, 2021 at 2:34:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/ControlCenter/Bundles/WalletModule.bundle/WalletModule
*/

#import <ControlCenterUIKit/CCUIAppLauncherModule.h>
#import <libobjc.A.dylib/CCUIInternalContentModule.h>

@protocol CCUIControlCenterSystemAgent;
@class NSString;

@interface CCUIWalletModule : CCUIAppLauncherModule <CCUIInternalContentModule> {

	id<CCUIControlCenterSystemAgent> _systemAgent;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) UIViewController*<CCUIContentModuleContentViewController> contentViewController; 
@property (nonatomic,readonly) UIViewController*<CCUIContentModuleBackgroundViewController> backgroundViewController; 
-(void)handleTapWithTouchType:(long long)arg1 ;
-(id)initWithSystemAgent:(id)arg1 ;
@end

