/*
* Generated on Thursday, January 14, 2021 at 2:26:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ManagedConfigurationUI.framework/ManagedConfigurationUI
*/

#import <UIKitCore/UITableViewController.h>
#import <libobjc.A.dylib/PSStateRestoration.h>

@class NSString;

@interface MCUITableViewController : UITableViewController <PSStateRestoration>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_contentSizeCategoryDidChangeNotification:(id)arg1 ;
-(BOOL)canBeShownFromSuspendedState;
-(void)dealloc;
-(void)updateExtendedLayoutIncludesOpaqueBars;
-(void)reloadTableOnContentSizeCategoryChange;
@end

