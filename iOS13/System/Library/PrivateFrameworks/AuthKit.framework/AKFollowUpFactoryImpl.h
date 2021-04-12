/*
* Generated on Monday, March 1, 2021 at 2:31:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AuthKit.framework/AuthKit
*/

#import <libobjc.A.dylib/AKFollowUpItemFactory.h>

@class NSString;

@interface AKFollowUpFactoryImpl : NSObject <AKFollowUpItemFactory>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)_clearAction;
-(id)_itemFromPayload:(id)arg1 withAltDSID:(id)arg2 ;
-(id)_actionsFromPayload:(id)arg1 ;
-(id)_notificationFromPayload:(id)arg1 ;
-(id)_actionFromInfo:(id)arg1 ;
-(id)actionWithTitle:(id)arg1 andActionKey:(id)arg2 ;
-(id)itemsForAltDSID:(id)arg1 fromIDMSPayload:(id)arg2 ;
-(id)itemIdentifiersRequiringNotificationClearFromPayload:(id)arg1 ;
-(BOOL)IsFollowUpItemNotificationForced:(id)arg1 ;
@end

