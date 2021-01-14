/*
* Generated on Thursday, January 14, 2021 at 2:25:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(BOOL)hasServerDefinedArchiveMailbox;
-(void)setHasServerDefinedDraftsMailbox:(BOOL)arg1 ;
-(BOOL)hasServerDefinedJunkMailbox;
-(BOOL)hasServerDefinedAllMailMailbox;
-(BOOL)needsGmailLablesCleanup;
-(void)setShouldUseGmailLabelStores:(BOOL)arg1 ;
-(BOOL)ignoreServerDefinedSentMailbox;
-(void)setDateOfLastSync:(NSDate *)arg1 ;
-(void)clearQueriedUserToSetPathPrefix;
-(BOOL)ignoreServerDefinedArchiveMailbox;
-(BOOL)shouldUseGmailLabelStoresIsSet;
-(void)setIgnoreServerDefinedArchiveMailbox:(BOOL)arg1 ;
-(id)_hostnameFromParentAccount:(id)arg1 ;
-(void)setHasServerDefinedArchiveMailbox:(BOOL)arg1 ;
-(void)setQueriedUserToSetPathPrefix:(BOOL)arg1 ;
-(id)usesSSLObject;
-(void)setHasServerDefinedJunkMailbox:(BOOL)arg1 ;
-(void)setIgnoreServerDefinedDraftsMailbox:(BOOL)arg1 ;
-(NSDate *)dateOfLastSync;
-(void)setCompactWhenClosingMailboxes:(BOOL)arg1 ;
-(void)setIgnoreServerDefinedTrashMailbox:(BOOL)arg1 ;
-(BOOL)hasServerDefinedDraftsMailbox;
-(void)clearDaysBetweenSyncs;
-(void)setHasServerDefinedSentMailbox:(BOOL)arg1 ;
-(void)setIgnoreServerDefinedSentMailbox:(BOOL)arg1 ;
-(BOOL)hasServerDefinedSentMailbox;
-(BOOL)ignoreServerDefinedTrashMailbox;
-(void)setHasServerDefinedTrashMailbox:(BOOL)arg1 ;
-(void)setDaysBetweenSyncs:(long long)arg1 ;
-(BOOL)queriedUserToSetPathPrefix;
-(long long)defaultPortNumber;
-(id)portNumberObject;
-(long long)daysBetweenSyncs;
-(BOOL)ignoreServerDefinedDraftsMailbox;
-(BOOL)hasServerDefinedTrashMailbox;
-(BOOL)ignoreServerDefinedJunkMailbox;
-(void)setNeedsGmailLablesCleanup:(BOOL)arg1 ;
-(BOOL)shouldUseGmailLabelStores;
-(long long)defaultSecurePortNumber;
-(BOOL)compactWhenClosingMailboxes;
-(void)setIgnoreServerDefinedJunkMailbox:(BOOL)arg1 ;
-(void)setHasServerDefinedAllMailMailbox:(BOOL)arg1 ;
@end

