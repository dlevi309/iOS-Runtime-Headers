/*
* Generated on Monday, March 1, 2021 at 2:34:19 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MessageLegacy.framework/MessageLegacy
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
-(BOOL)deleted;
-(long long)libraryID;
-(BOOL)read;
-(id)copyMessageInfo;
-(long long)mailboxID;
-(BOOL)isLibraryMessage;
-(long long)messageIDHash;
-(unsigned)dateReceivedInterval;
-(unsigned)dateSentInterval;
-(long long)conversationHash;
-(BOOL)flagged;
-(BOOL)senderVIP;
-(BOOL)isKnownToHaveAttachments;

@end

