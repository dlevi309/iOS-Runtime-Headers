/*
* Generated on Thursday, January 14, 2021 at 2:24:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <HomeUI/HomeUI-Structs.h>
#import <UIKitCore/UINavigationController.h>
#import <libobjc.A.dylib/HUViewControllerCustomDismissing.h>

@class NSString;

@interface HUQuickControlNavigationController : UINavigationController <HUViewControllerCustomDismissing>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(CGSize)preferredContentSize;
-(BOOL)_canShowWhileLocked;
-(void)viewDidLoad;
-(id)hu_prepareForDismissalAnimated:(BOOL)arg1 ;
@end

