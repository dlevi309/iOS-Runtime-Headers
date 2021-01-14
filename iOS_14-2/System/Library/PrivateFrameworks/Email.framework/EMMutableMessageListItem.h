/*
* Generated on Thursday, January 14, 2021 at 2:23:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(BOOL)isBlocked;
-(void)setCount:(unsigned long long)arg1;
-(ECSubject *)subject;
-(BOOL)isVIP;
-(NSArray *)mailboxObjectIDs;
-(NSArray *)mailboxes;
-(NSArray *)senderList;
-(void)setHasAttachments:(BOOL)arg1;
-(void)setConversationNotificationLevel:(long long)arg1;
-(void)set_internalID:(long long)arg1;
-(ECMessageFlags *)flags;
-(void)setToList:(id)arg1;
-(void)setSenderList:(id)arg1;
-(void)setCcList:(id)arg1;
-(BOOL)hasAttachments;
-(NSArray *)toList;
-(void)setIsToMe:(BOOL)arg1;
-(void)setIsCCMe:(BOOL)arg1;
-(NSArray *)ccList;
-(BOOL)isToMe;
-(BOOL)isCCMe;
-(unsigned long long)count;
-(long long)conversationID;
-(void)setDate:(id)arg1;
-(void)setConversationID:(long long)arg1;
-(void)setIsBlocked:(BOOL)arg1;
-(NSString *)summary;
-(void)setFlags:(id)arg1;
-(NSDate *)date;
-(void)setSummary:(id)arg1;
-(void)setMailboxes:(id)arg1;
-(long long)conversationNotificationLevel;
-(void)setMailboxObjectIDs:(id)arg1;
-(BOOL)hasUnflagged;
-(NSIndexSet *)flagColors;
-(id<EMCollectionItemID>)displayMessageItemID;
-(void)setHasUnflagged:(BOOL)arg1;
-(void)setFlagColors:(id)arg1;
-(void)setDisplayMessageItemID:(id)arg1;
-(void)setSubject:(id)arg1;
-(void)setIsVIP:(BOOL)arg1;
-(long long)_internalID;

@end

