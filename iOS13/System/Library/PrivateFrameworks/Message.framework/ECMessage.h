/*
* Generated on Monday, March 1, 2021 at 2:31:47 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
*/

@class NSString, ECSubject, NSArray, NSDate, ECMessageFlags, NSDictionary, ECAngleBracketIDHash, NSSet, NSUUID;


@protocol ECMessage <NSCopying,NSObject>
@property (nonatomic,copy,readonly) NSString * persistentID; 
@property (nonatomic,copy,readonly) ECSubject * subject; 
@property (nonatomic,copy,readonly) NSArray * from; 
@property (nonatomic,copy,readonly) NSArray * to; 
@property (nonatomic,copy,readonly) NSArray * cc; 
@property (nonatomic,copy,readonly) NSArray * bcc; 
@property (nonatomic,copy,readonly) NSArray * senders; 
@property (nonatomic,readonly) NSDate * dateReceived; 
@property (nonatomic,readonly) NSDate * dateSent; 
@property (nonatomic,copy,readonly) NSArray * listUnsubscribe; 
@property (nonatomic,copy,readonly) NSString * remoteID; 
@property (nonatomic,readonly) id<ECMailbox> mailbox; 
@property (nonatomic,readonly) long long conversationID; 
@property (nonatomic,readonly) BOOL isServerSearchResult; 
@property (nonatomic,readonly) ECMessageFlags * flags; 
@property (getter=isPartOfExistingThread,nonatomic,readonly) BOOL partOfExistingThread; 
@property (nonatomic,readonly) id<ECMimePart> bodyPart; 
@property (nonatomic,copy,readonly) NSDictionary * headersDictionary; 
@property (nonatomic,copy,readonly) NSString * messageIDHeader; 
@property (nonatomic,readonly) ECAngleBracketIDHash * messageIDHeaderHash; 
@property (readonly) NSSet * labels; 
@property (nonatomic,readonly) id<ECMailAccount> account; 
@property (nonatomic,readonly) id<ECMessageHeaders> headers; 
@property (nonatomic,copy,readonly) NSArray * references; 
@property (nonatomic,copy,readonly) NSUUID * documentID; 
@property (nonatomic,readonly) unsigned long long numberOfAttachments; 
@property (nonatomic,readonly) ECAngleBracketIDHash * listIDHash; 
@required
-(ECMessageFlags *)flags;
-(NSArray *)to;
-(NSArray *)from;
-(id<ECMailAccount>)account;
-(ECSubject *)subject;
-(NSSet *)labels;
-(NSString *)persistentID;
-(NSUUID *)documentID;
-(id<ECMessageHeaders>)headers;
-(NSDate *)dateSent;
-(unsigned long long)numberOfAttachments;
-(NSArray *)senders;
-(NSDate *)dateReceived;
-(id<ECMailbox>)mailbox;
-(NSString *)remoteID;
-(NSArray *)references;
-(id)bestAlternativePart:(BOOL*)arg1;
-(NSArray *)cc;
-(NSArray *)bcc;
-(NSArray *)listUnsubscribe;
-(long long)conversationID;
-(BOOL)isServerSearchResult;
-(BOOL)isPartOfExistingThread;
-(id<ECMimePart>)bodyPart;
-(NSDictionary *)headersDictionary;
-(NSString *)messageIDHeader;
-(ECAngleBracketIDHash *)messageIDHeaderHash;
-(ECAngleBracketIDHash *)listIDHash;

@end

