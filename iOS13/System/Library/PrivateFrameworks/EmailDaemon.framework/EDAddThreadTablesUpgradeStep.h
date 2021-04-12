/*
* Generated on Monday, March 1, 2021 at 2:33:22 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/EmailDaemon.framework/EmailDaemon
*/

#import <libobjc.A.dylib/EDTableUpgradeStep.h>

@class NSString;

@interface EDAddThreadTablesUpgradeStep : NSObject <EDTableUpgradeStep>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(int)runWithConnection:(id)arg1 ;
+(id)threadSendersTableSchema;
+(id)threadRecipientsTableSchema;
+(id)threadScopesTableSchema;
+(id)threadsTableSchema;
+(id)threadMailboxesTableSchema;
+(id)_schemaWithMessagesTable:(id)arg1 mailboxesTable:(id)arg2 conversationsTable:(id)arg3 ;
@end

