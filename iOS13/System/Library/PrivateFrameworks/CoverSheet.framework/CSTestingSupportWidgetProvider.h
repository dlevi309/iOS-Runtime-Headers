/*
* Generated on Monday, March 1, 2021 at 2:33:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoverSheet.framework/CoverSheet
*/

#import <CoverSheet/CoverSheet-Structs.h>
#import <libobjc.A.dylib/WGWidgetDiscoveryControllerDelegate.h>
#import <libobjc.A.dylib/CSWidgetGroupViewControllerProviding.h>

@class WGWidgetDiscoveryController, NSString;

@interface CSTestingSupportWidgetProvider : NSObject <WGWidgetDiscoveryControllerDelegate, CSWidgetGroupViewControllerProviding> {

	WGWidgetDiscoveryController* _widgetDiscoveryController;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(id)newWidgetGroupViewControllerWithSettings:(WGWidgetListSettings)arg1 ;
@end

