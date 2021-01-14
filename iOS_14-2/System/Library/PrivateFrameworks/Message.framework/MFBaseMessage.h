/*
* Generated on Thursday, January 14, 2021 at 2:22:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
*/


@protocol MFBaseMessage <NSObject>
@property (nonatomic,readonly) unsigned uid; 
@property (nonatomic,readonly) unsigned dateReceivedInterval; 
@property (nonatomic,readonly) unsigned dateSentInterval; 
@property (nonatomic,readonly) long long conversationHash; 
@property (nonatomic,readonly) long long mailboxID; 
@property (nonatomic,readonly) long long messageIDHash; 
@property (nonatomic,readonly) BOOL flagged; 
@property (nonatomic,readonly) BOOL read; 
@property (nonatomic,readonly) BOOL deleted; 
@property (nonatomic,readonly) BOOL senderVIP; 
@property (getter=isKnownToHaveAttachments,nonatomic,readonly) BOOL knownToHaveAttachments; 
@property (getter=isLibraryMessage,nonatomic,readonly) BOOL libraryMessage; 
@property (nonatomic,readonly) long long libraryID; 
@required
-(unsigned)uid;
-(BOOL)flagged;
-(BOOL)senderVIP;
-(long long)messageIDHash;
-(unsigned)dateReceivedInterval;
-(unsigned)dateSentInterval;
-(long long)conversationHash;
-(BOOL)isKnownToHaveAttachments;
-(BOOL)read;
-(long long)libraryID;
-(BOOL)deleted;
-(long long)mailboxID;
-(id)copyMessageInfo;
-(BOOL)isLibraryMessage;

@end

