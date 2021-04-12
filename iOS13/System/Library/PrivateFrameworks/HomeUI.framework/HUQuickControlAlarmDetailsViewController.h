/*
* Generated on Monday, March 1, 2021 at 2:34:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <HomeUI/HUQuickControlViewController.h>
#import <libobjc.A.dylib/HUQuickControlDetailsViewControllerVendor.h>

@class NSString;

@interface HUQuickControlAlarmDetailsViewController : HUQuickControlViewController <HUQuickControlDetailsViewControllerVendor>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)controlItemPredicate;
-(id)controlItem;
-(id)initWithControlItems:(id)arg1 home:(id)arg2 itemUpdater:(id)arg3 ;
-(BOOL)shouldShowContentForReachabilityState:(BOOL)arg1 ;
-(id)createDetailsViewController;
-(id)secondaryQuickControlPresentationStyle;
@end

