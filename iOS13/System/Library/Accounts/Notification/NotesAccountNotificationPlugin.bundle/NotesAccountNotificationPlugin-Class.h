/*
* Generated on Monday, March 1, 2021 at 2:33:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Accounts/Notification/NotesAccountNotificationPlugin.bundle/NotesAccountNotificationPlugin
*/

#import <libobjc.A.dylib/ACDAccountNotificationPlugin.h>

@protocol OS_dispatch_queue;
@class NSObject, NSString;

@interface NotesAccountNotificationPlugin : NSObject <ACDAccountNotificationPlugin> {

	NSObject*<OS_dispatch_queue> _dispatchQueue;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> dispatchQueue;              //@synthesize dispatchQueue=_dispatchQueue - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)relevantAccountTypeIdentifiers;
-(id)init;
-(void)dealloc;
-(NSObject*<OS_dispatch_queue>)dispatchQueue;
-(void)setDispatchQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(BOOL)account:(id)arg1 willChangeWithType:(int)arg2 inStore:(id)arg3 oldAccount:(id)arg4 ;
-(void)account:(id)arg1 didChangeWithType:(int)arg2 inStore:(id)arg3 oldAccount:(id)arg4 ;
-(void)applicationInstalledOrUninstalled:(id)arg1 ;
-(void)acAccount:(id)arg1 wasDeletedInStore:(id)arg2 ;
-(BOOL)shouldProcessChangeType:(int)arg1 forACAccount:(id)arg2 ;
-(void)deleteSpotlightDomainIfNecessaryForAccount:(id)arg1 oldAccount:(id)arg2 ;
-(void)fetchAndSetMigrationStateForACAccount:(id)arg1 inStore:(id)arg2 ;
-(void)acAccount:(id)arg1 wasModifiedInStore:(id)arg2 ;
-(void)deleteAccountForACAccount:(id)arg1 ;
-(void)deleteLegacyAccountForACAccount:(id)arg1 ;
-(void)updateAccountForParentACAccount:(id)arg1 inStore:(id)arg2 ;
-(void)updateLegacyAccountForParentACAccount:(id)arg1 ;
-(void)deleteSpotlightDomainForAccount:(id)arg1 ;
-(BOOL)isModernNotesPrimaryACAccount:(id)arg1 ;
@end

