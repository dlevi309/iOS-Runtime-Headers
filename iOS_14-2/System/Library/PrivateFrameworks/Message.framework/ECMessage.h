/*
* Generated on Thursday, January 14, 2021 at 2:22:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSArray *)to;
-(NSArray *)cc;
-(NSArray *)bcc;
-(NSArray *)from;
-(id<ECMailAccount>)account;
-(ECSubject *)subject;
-(NSArray *)senders;
-(NSDate *)dateSent;
-(NSSet *)labels;
-(ECMessageFlags *)flags;
-(unsigned long long)numberOfAttachments;
-(long long)conversationID;
-(id<ECMailbox>)mailbox;
-(NSString *)persistentID;
-(NSUUID *)documentID;
-(NSString *)remoteID;
-(id<ECMimePart>)bodyPart;
-(id<ECMessageHeaders>)headers;
-(NSArray *)references;
-(id)bestAlternativePart:(BOOL*)arg1;
-(NSDate *)dateReceived;
-(NSArray *)listUnsubscribe;
-(BOOL)isServerSearchResult;
-(BOOL)isPartOfExistingThread;
-(NSDictionary *)headersDictionary;
-(NSString *)messageIDHeader;
-(ECAngleBracketIDHash *)messageIDHeaderHash;
-(ECAngleBracketIDHash *)listIDHash;

@end

