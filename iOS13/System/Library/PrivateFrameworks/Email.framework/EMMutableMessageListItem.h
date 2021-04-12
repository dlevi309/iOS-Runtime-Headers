/*
* Generated on Monday, March 1, 2021 at 2:32:30 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Email.framework/Email
*/

@class NSDate, ECSubject, NSString, NSArray, ECMessageFlags, NSIndexSet;


@protocol EMMutableMessageListItem <EMMessageListItem>
@property (retain) NSDate * date; 
@property (retain) ECSubject * subject; 
@property (copy) NSString * summary; 
@property (copy) NSArray * senderList; 
@property (copy) NSArray * toList; 
@property (copy) NSArray * ccList; 
@property (assign) BOOL isToMe; 
@property (assign) BOOL isCCMe; 
@property (retain) ECMessageFlags * flags; 
@property (assign) BOOL hasUnflagged; 
@property (copy) NSIndexSet * flagColors; 
@property (assign) BOOL isVIP; 
@property (assign) BOOL isBlocked; 
@property (assign) BOOL hasAttachments; 
@property (assign) long long conversationNotificationLevel; 
@property (assign) unsigned long long count; 
@property (assign) long long conversationID; 
@property (copy) NSArray * mailboxObjectIDs; 
@property (copy) NSArray * mailboxes; 
@property (retain) id<EMCollectionItemID> displayMessageItemID; 
@property (assign) long long _internalID; 
@required
-(unsigned long long)count;
-(NSDate *)date;
-(ECMessageFlags *)flags;
-(void)setCount:(unsigned long long)arg1;
-(BOOL)isBlocked;
-(void)setDate:(id)arg1;
-(ECSubject *)subject;
-(void)setSubject:(id)arg1;
-(void)setFlags:(id)arg1;
-(NSString *)summary;
-(BOOL)isVIP;
-(void)setSummary:(id)arg1;
-(long long)_internalID;
-(NSArray *)mailboxes;
-(long long)conversationID;
-(void)setIsVIP:(BOOL)arg1;
-(void)setConversationID:(long long)arg1;
-(void)setSenderList:(id)arg1;
-(void)setToList:(id)arg1;
-(void)setCcList:(id)arg1;
-(NSArray *)senderList;
-(NSArray *)toList;
-(NSArray *)ccList;
-(void)setMailboxes:(id)arg1;
-(void)setIsBlocked:(BOOL)arg1;
-(void)setHasAttachments:(BOOL)arg1;
-(void)setConversationNotificationLevel:(long long)arg1;
-(void)set_internalID:(long long)arg1;
-(void)setIsToMe:(BOOL)arg1;
-(void)setIsCCMe:(BOOL)arg1;
-(BOOL)hasAttachments;
-(NSArray *)mailboxObjectIDs;
-(long long)conversationNotificationLevel;
-(void)setMailboxObjectIDs:(id)arg1;
-(BOOL)isToMe;
-(BOOL)isCCMe;
-(BOOL)hasUnflagged;
-(NSIndexSet *)flagColors;
-(id<EMCollectionItemID>)displayMessageItemID;
-(void)setHasUnflagged:(BOOL)arg1;
-(void)setFlagColors:(id)arg1;
-(void)setDisplayMessageItemID:(id)arg1;

@end

