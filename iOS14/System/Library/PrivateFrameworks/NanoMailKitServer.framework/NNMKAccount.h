/*
* Generated on Thursday, January 14, 2021 at 2:26:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
+(id)inboxesFromAccounts:(id)arg1 ;
+(id)generateIdentifierFromEmailsAddresses:(id)arg1 ;
+(id)generateAccountIdForAccount:(id)arg1 ;
-(unsigned long long)sourceType;
-(void)setEmailAddresses:(NSArray *)arg1 ;
-(void)setLocalId:(NSString *)arg1 ;
-(void)setUsername:(NSString *)arg1 ;
-(void)setStandaloneState:(unsigned long long)arg1 ;
-(NSArray *)mailboxes;
-(NSString *)localId;
-(void)encodeWithCoder:(id)arg1 ;
-(NSArray *)emailAddresses;
-(unsigned long long)standaloneState;
-(void)setSourceType:(unsigned long long)arg1 ;
-(void)setAccountId:(NSString *)arg1 ;
-(NSString *)username;
-(id)description;
-(BOOL)isiCloud;
-(void)setDefaultEmailAddress:(NSString *)arg1 ;
-(BOOL)shouldArchive;
-(void)setDisplayName:(NSString *)arg1 ;
-(NSString *)parentAccountIdentifier;
-(id)initWithCoder:(id)arg1 ;
-(void)setParentAccountIdentifier:(NSString *)arg1 ;
-(NSString *)defaultEmailAddress;
-(BOOL)maySupportStandaloneMode;
-(void)setMailboxes:(NSArray *)arg1 ;
-(void)setShouldArchive:(BOOL)arg1 ;
-(NSString *)accountId;
-(NSString *)displayName;
-(BOOL)isEqual:(id)arg1 ;
@end

