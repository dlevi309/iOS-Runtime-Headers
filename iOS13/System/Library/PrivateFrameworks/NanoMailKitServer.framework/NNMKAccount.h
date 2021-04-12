/*
* Generated on Monday, March 1, 2021 at 2:35:42 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NanoMailKitServer.framework/NanoMailKitServer
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSArray;

@interface NNMKAccount : NSObject <NSSecureCoding> {

	BOOL _shouldArchive;
	NSString* _accountId;
	NSString* _localId;
	NSString* _parentAccountIdentifier;
	NSString* _displayName;
	unsigned long long _sourceType;
	NSArray* _emailAddresses;
	NSString* _username;
	NSString* _defaultEmailAddress;
	unsigned long long _standaloneState;
	NSArray* _mailboxes;

}

@property (nonatomic,retain) NSString * accountId;                            //@synthesize accountId=_accountId - In the implementation block
@property (nonatomic,retain) NSString * localId;                              //@synthesize localId=_localId - In the implementation block
@property (nonatomic,retain) NSString * parentAccountIdentifier;              //@synthesize parentAccountIdentifier=_parentAccountIdentifier - In the implementation block
@property (nonatomic,retain) NSString * displayName;                          //@synthesize displayName=_displayName - In the implementation block
@property (assign,nonatomic) BOOL shouldArchive;                              //@synthesize shouldArchive=_shouldArchive - In the implementation block
@property (assign,nonatomic) unsigned long long sourceType;                   //@synthesize sourceType=_sourceType - In the implementation block
@property (nonatomic,retain) NSArray * emailAddresses;                        //@synthesize emailAddresses=_emailAddresses - In the implementation block
@property (nonatomic,retain) NSString * username;                             //@synthesize username=_username - In the implementation block
@property (nonatomic,copy) NSString * defaultEmailAddress;                    //@synthesize defaultEmailAddress=_defaultEmailAddress - In the implementation block
@property (assign,nonatomic) unsigned long long standaloneState;              //@synthesize standaloneState=_standaloneState - In the implementation block
@property (nonatomic,retain) NSArray * mailboxes;                             //@synthesize mailboxes=_mailboxes - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)generateAccountIdForAccount:(id)arg1 ;
+(id)inboxesFromAccounts:(id)arg1 ;
+(id)generateIdentifierFromEmailsAddresses:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)displayName;
-(void)setDisplayName:(NSString *)arg1 ;
-(NSArray *)emailAddresses;
-(NSString *)username;
-(void)setUsername:(NSString *)arg1 ;
-(NSString *)parentAccountIdentifier;
-(void)setParentAccountIdentifier:(NSString *)arg1 ;
-(unsigned long long)sourceType;
-(void)setSourceType:(unsigned long long)arg1 ;
-(void)setEmailAddresses:(NSArray *)arg1 ;
-(NSString *)accountId;
-(void)setAccountId:(NSString *)arg1 ;
-(NSArray *)mailboxes;
-(NSString *)defaultEmailAddress;
-(void)setDefaultEmailAddress:(NSString *)arg1 ;
-(BOOL)shouldArchive;
-(void)setMailboxes:(NSArray *)arg1 ;
-(void)setShouldArchive:(BOOL)arg1 ;
-(void)setLocalId:(NSString *)arg1 ;
-(NSString *)localId;
-(unsigned long long)standaloneState;
-(void)setStandaloneState:(unsigned long long)arg1 ;
-(BOOL)maySupportStandaloneMode;
-(BOOL)isiCloud;
@end

