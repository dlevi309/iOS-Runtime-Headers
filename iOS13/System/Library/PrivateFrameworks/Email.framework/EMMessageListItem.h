/*
* Generated on Monday, March 1, 2021 at 2:32:30 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Email.framework/Email
*/

@class NSDate, ECSubject, NSString, NSArray, ECMessageFlags, NSIndexSet, EMObjectID, EMMessage;


@protocol EMMessageListItem <EMCollectionItem,EMObject>
@property (readonly) NSDate * date; 
@property (readonly) ECSubject * subject; 
@property (copy,readonly) NSString * summary; 
@property (copy,readonly) NSArray * senderList; 
@property (copy,readonly) NSArray * toList; 
@property (copy,readonly) NSArray * ccList; 
@property (readonly) ECMessageFlags * flags; 
@property (readonly) BOOL hasUnflagged; 
@property (copy,readonly) NSIndexSet * flagColors; 
@property (readonly) BOOL isVIP; 
@property (readonly) BOOL isBlocked; 
@property (readonly) BOOL isToMe; 
@property (readonly) BOOL isCCMe; 
@property (readonly) BOOL hasAttachments; 
@property (readonly) long long conversationNotificationLevel; 
@property (readonly) unsigned long long count; 
@property (readonly) long long conversationID; 
@property (copy,readonly) NSArray * mailboxObjectIDs; 
@property (copy,readonly) NSArray * mailboxes; 
@property (readonly) id<EMCollectionItemID> displayMessageItemID; 
@property (readonly) EMObjectID * displayMessageObjectID; 
@property (readonly) EMMessage * displayMessage; 
@property (readonly) BOOL deleteMovesToTrash; 
@property (readonly) BOOL supportsArchiving; 
@property (readonly) BOOL shouldArchiveByDefault; 
@property (readonly) BOOL isEditable; 
@required
-(unsigned long long)count;
-(NSDate *)date;
-(ECMessageFlags *)flags;
-(BOOL)isBlocked;
-(ECSubject *)subject;
-(BOOL)isEditable;
-(EMMessage *)displayMessage;
-(NSString *)summary;
-(BOOL)isVIP;
-(NSArray *)mailboxes;
-(BOOL)shouldArchiveByDefault;
-(long long)conversationID;
-(BOOL)supportsArchiving;
-(NSArray *)senderList;
-(NSArray *)toList;
-(NSArray *)ccList;
-(BOOL)hasAttachments;
-(EMObjectID *)displayMessageObjectID;
-(NSArray *)mailboxObjectIDs;
-(long long)conversationNotificationLevel;
-(BOOL)isToMe;
-(BOOL)isCCMe;
-(BOOL)hasUnflagged;
-(NSIndexSet *)flagColors;
-(id<EMCollectionItemID>)displayMessageItemID;
-(BOOL)deleteMovesToTrash;

@end

