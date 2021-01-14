/*
* Generated on Thursday, January 14, 2021 at 2:23:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Email.framework/Email
*/

@class NSDate, ECSubject, NSString, NSArray, ECMessageFlags, NSIndexSet, EMObjectID, EFFuture;


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
@property (readonly) EFFuture * displayMessage; 
@property (readonly) BOOL deleteMovesToTrash; 
@property (readonly) BOOL supportsArchiving; 
@property (readonly) BOOL shouldArchiveByDefault; 
@property (readonly) BOOL isEditable; 
@required
-(BOOL)isEditable;
-(BOOL)isBlocked;
-(ECSubject *)subject;
-(BOOL)isVIP;
-(NSArray *)mailboxObjectIDs;
-(NSArray *)mailboxes;
-(NSArray *)senderList;
-(ECMessageFlags *)flags;
-(BOOL)hasAttachments;
-(NSArray *)toList;
-(NSArray *)ccList;
-(BOOL)isToMe;
-(BOOL)isCCMe;
-(unsigned long long)count;
-(long long)conversationID;
-(NSString *)summary;
-(EMObjectID *)displayMessageObjectID;
-(NSDate *)date;
-(BOOL)shouldArchiveByDefault;
-(long long)conversationNotificationLevel;
-(BOOL)hasUnflagged;
-(NSIndexSet *)flagColors;
-(id<EMCollectionItemID>)displayMessageItemID;
-(BOOL)deleteMovesToTrash;
-(EFFuture *)displayMessage;
-(BOOL)supportsArchiving;

@end

