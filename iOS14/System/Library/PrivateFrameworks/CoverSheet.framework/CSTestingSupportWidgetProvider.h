/*
* Generated on Thursday, January 14, 2021 at 2:26:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)newWidgetListViewControllerWithSettings:(WGWidgetListSettings)arg1 ;
-(id)newWidgetGroupViewControllerWithSettings:(WGWidgetListSettings)arg1 ;
@end

