/*
* Generated on Thursday, January 14, 2021 at 2:29:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/ControlCenter/Bundles/WalletModule.bundle/WalletModule
*/

#import <ControlCenterUIKit/CCUIAppLauncherModule.h>
#import <libobjc.A.dylib/CCUIInternalContentModule.h>

@protocol CCUIControlCenterSystemAgent;
@class NSString;

@interface CCUIWalletModule : CCUIAppLauncherModule <CCUIInternalContentModule> {

	id<CCUIControlCenterSystemAgent> _systemAgent;

}

@property (nonatomic,readonly) UIViewController*<CCUIContentModuleContentViewController> contentViewController; 
@property (nonatomic,readonly) UIViewController*<CCUIContentModuleBackgroundViewController> backgroundViewController; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithSystemAgent:(id)arg1 ;
-(void)handleTapWithTouchType:(long long)arg1 ;
@end

