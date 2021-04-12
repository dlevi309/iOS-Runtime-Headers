/*
* Generated on Monday, March 1, 2021 at 2:32:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/EmailCore.framework/EmailCore
*/

#import <EmailCore/ECAccount.h>

@class NSDate;

@interface ECIMAPAccount : ECAccount {

	NSDate* _dateOfLastSync;

}

@property (assign,nonatomic) BOOL compactWhenClosingMailboxes; 
@property (assign,nonatomic) long long daysBetweenSyncs; 
@property (nonatomic,copy) NSDate * dateOfLastSync;                               //@synthesize dateOfLastSync=_dateOfLastSync - In the implementation block
@property (assign,nonatomic) BOOL queriedUserToSetPathPrefix; 
@property (assign,nonatomic) BOOL shouldUseGmailLabelStores; 
@property (nonatomic,readonly) BOOL shouldUseGmailLabelStoresIsSet; 
@property (assign,nonatomic) BOOL needsGmailLablesCleanup; 
@property (assign,nonatomic) BOOL hasServerDefinedAllMailMailbox; 
@property (assign,nonatomic) BOOL hasServerDefinedArchiveMailbox; 
@property (assign,nonatomic) BOOL hasServerDefinedDraftsMailbox; 
@property (assign,nonatomic) BOOL hasServerDefinedJunkMailbox; 
@property (assign,nonatomic) BOOL hasServerDefinedSentMailbox; 
@property (assign,nonatomic) BOOL hasServerDefinedTrashMailbox; 
@property (assign,nonatomic) BOOL ignoreServerDefinedArchiveMailbox; 
@property (assign,nonatomic) BOOL ignoreServerDefinedDraftsMailbox; 
@property (assign,nonatomic) BOOL ignoreServerDefinedJunkMailbox; 
@property (assign,nonatomic) BOOL ignoreServerDefinedSentMailbox; 
@property (assign,nonatomic) BOOL ignoreServerDefinedTrashMailbox; 
+(id)standardPorts;
+(id)standardSSLPorts;
-(long long)defaultSecurePortNumber;
-(long long)defaultPortNumber;
-(id)_hostnameFromParentAccount:(id)arg1 ;
-(id)portNumberObject;
-(id)usesSSLObject;
-(BOOL)compactWhenClosingMailboxes;
-(void)setCompactWhenClosingMailboxes:(BOOL)arg1 ;
-(long long)daysBetweenSyncs;
-(void)setDaysBetweenSyncs:(long long)arg1 ;
-(void)clearDaysBetweenSyncs;
-(BOOL)queriedUserToSetPathPrefix;
-(void)setQueriedUserToSetPathPrefix:(BOOL)arg1 ;
-(void)clearQueriedUserToSetPathPrefix;
-(BOOL)shouldUseGmailLabelStores;
-(void)setShouldUseGmailLabelStores:(BOOL)arg1 ;
-(BOOL)shouldUseGmailLabelStoresIsSet;
-(BOOL)needsGmailLablesCleanup;
-(void)setNeedsGmailLablesCleanup:(BOOL)arg1 ;
-(BOOL)hasServerDefinedAllMailMailbox;
-(void)setHasServerDefinedAllMailMailbox:(BOOL)arg1 ;
-(BOOL)hasServerDefinedArchiveMailbox;
-(void)setHasServerDefinedArchiveMailbox:(BOOL)arg1 ;
-(BOOL)hasServerDefinedDraftsMailbox;
-(void)setHasServerDefinedDraftsMailbox:(BOOL)arg1 ;
-(BOOL)hasServerDefinedJunkMailbox;
-(void)setHasServerDefinedJunkMailbox:(BOOL)arg1 ;
-(BOOL)hasServerDefinedSentMailbox;
-(void)setHasServerDefinedSentMailbox:(BOOL)arg1 ;
-(BOOL)hasServerDefinedTrashMailbox;
-(void)setHasServerDefinedTrashMailbox:(BOOL)arg1 ;
-(BOOL)ignoreServerDefinedArchiveMailbox;
-(void)setIgnoreServerDefinedArchiveMailbox:(BOOL)arg1 ;
-(BOOL)ignoreServerDefinedDraftsMailbox;
-(void)setIgnoreServerDefinedDraftsMailbox:(BOOL)arg1 ;
-(BOOL)ignoreServerDefinedJunkMailbox;
-(void)setIgnoreServerDefinedJunkMailbox:(BOOL)arg1 ;
-(BOOL)ignoreServerDefinedSentMailbox;
-(void)setIgnoreServerDefinedSentMailbox:(BOOL)arg1 ;
-(BOOL)ignoreServerDefinedTrashMailbox;
-(void)setIgnoreServerDefinedTrashMailbox:(BOOL)arg1 ;
-(NSDate *)dateOfLastSync;
-(void)setDateOfLastSync:(NSDate *)arg1 ;
@end

