/*
* Generated on Monday, March 1, 2021 at 2:31:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class PKAppletSubcredential, NSSet, NSString, PKAppletSubcredentialEntitlement;

@interface PKSharedCredentialGroup : NSObject <NSSecureCoding> {

	BOOL _revoked;
	PKAppletSubcredential* _credential;
	NSSet* _sharedCredentials;
	NSSet* _receipts;
	NSString* _recipientHandle;
	PKAppletSubcredentialEntitlement* _entitlement;

}

@property (nonatomic,readonly) PKAppletSubcredential * credential;                          //@synthesize credential=_credential - In the implementation block
@property (nonatomic,readonly) NSSet * sharedCredentials;                                   //@synthesize sharedCredentials=_sharedCredentials - In the implementation block
@property (nonatomic,readonly) NSSet * receipts;                                            //@synthesize receipts=_receipts - In the implementation block
@property (nonatomic,readonly) NSString * recipientHandle;                                  //@synthesize recipientHandle=_recipientHandle - In the implementation block
@property (nonatomic,readonly) PKAppletSubcredentialEntitlement * entitlement;              //@synthesize entitlement=_entitlement - In the implementation block
@property (getter=isRevoked,nonatomic,readonly) BOOL revoked;                               //@synthesize revoked=_revoked - In the implementation block
@property (nonatomic,readonly) BOOL hasBeenAccepted; 
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)isRevoked;
-(PKAppletSubcredential *)credential;
-(PKAppletSubcredentialEntitlement *)entitlement;
-(NSString *)recipientHandle;
-(NSSet *)sharedCredentials;
-(NSSet *)receipts;
-(void)parseGroupItems;
-(id)initWithCredential:(id)arg1 sharedCredentials:(id)arg2 receipts:(id)arg3 ;
-(BOOL)hasBeenAccepted;
@end

