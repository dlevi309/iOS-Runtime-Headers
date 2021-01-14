/*
* Generated on Thursday, January 14, 2021 at 2:22:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
*/

#import <EmailDaemon/EDSearchableIndexPersistence.h>
#import <libobjc.A.dylib/EFLoggable.h>

@class NSString;

@interface MFSearchableIndexPersistence_iOS : EDSearchableIndexPersistence <EFLoggable>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)log;
-(id)searchableIndexItemsFromMessages:(id)arg1 type:(long long)arg2 ;
-(id)_verificationDataFromMessage:(id)arg1 messageIDTransactionIDDictionary:(id)arg2 ;
-(id)additionalFilterClause;
-(id)messagesWhere:(id)arg1 sortedBy:(id)arg2 limit:(long long)arg3 ;
-(void)attachmentItemMetadataForAttachmentID:(id)arg1 messagePersistentID:(id)arg2 name:(id)arg3 mailboxID:(long long)arg4 result:(/*^block*/id)arg5 ;
-(id)verificationDataSamplesFromMessageIDTransactionIDDictionary:(id)arg1 ;
@end

