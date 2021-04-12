/*
* Generated on Monday, March 1, 2021 at 2:34:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)viewDidLoad;
-(BOOL)_canShowWhileLocked;
-(id)hu_prepareForDismissalAnimated:(BOOL)arg1 ;
@end

