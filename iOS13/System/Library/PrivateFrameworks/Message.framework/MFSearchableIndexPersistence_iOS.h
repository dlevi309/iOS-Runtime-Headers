/*
* Generated on Monday, March 1, 2021 at 2:31:47 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
+(id)searchableIndexItemsFromMessages:(id)arg1 type:(long long)arg2 ;
-(id)searchableIndexItemsFromMessages:(id)arg1 type:(long long)arg2 ;
-(id)_verificationDataFromMessage:(id)arg1 messageIDTransactionIDDictionary:(id)arg2 ;
-(id)additionalFilterClause;
-(id)messagesWhere:(id)arg1 sortedBy:(id)arg2 limit:(long long)arg3 ;
-(void)attachmentItemMetadataForAttachmentID:(id)arg1 messagePersistentID:(id)arg2 name:(id)arg3 result:(/*^block*/id)arg4 ;
-(id)verificationDataSamplesFromMessageIDTransactionIDDictionary:(id)arg1 ;
@end

