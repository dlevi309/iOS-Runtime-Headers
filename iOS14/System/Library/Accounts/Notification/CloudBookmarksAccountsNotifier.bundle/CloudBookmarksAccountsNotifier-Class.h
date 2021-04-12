/*
* Generated on Thursday, January 14, 2021 at 2:29:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Accounts/Notification/CloudBookmarksAccountsNotifier.bundle/CloudBookmarksAccountsNotifier
*/

#import <libobjc.A.dylib/ACDAccountNotificationPlugin.h>

@protocol WBSSafariBookmarksSyncAgentProtocol;
@class NSString;

@interface CloudBookmarksAccountsNotifier : NSObject <ACDAccountNotificationPlugin> {

	id<WBSSafariBookmarksSyncAgentProtocol> _syncAgent;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)account:(id)arg1 didChangeWithType:(int)arg2 inStore:(id)arg3 oldAccount:(id)arg4 ;
@end

