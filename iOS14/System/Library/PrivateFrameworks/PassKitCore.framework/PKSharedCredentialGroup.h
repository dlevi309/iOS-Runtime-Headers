/*
* Generated on Thursday, January 14, 2021 at 2:21:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class PKAppletSubcredential, NSSet, NSString, PKAppletSubcredentialEntitlement;

@interface PKSharedCredentialGroup : NSObject <NSSecureCoding> {

	BOOL _localGroup;
	PKAppletSubcredential* _credential;
	NSSet* _sharedCredentials;
	NSSet* _receipts;
	NSString* _recipientHandle;
	NSString* _recipientName;
	PKAppletSubcredentialEntitlement* _entitlement;
	long long _state;

}

@property (nonatomic,readonly) PKAppletSubcredential * credential;                          //@synthesize credential=_credential - In the implementation block
@property (nonatomic,readonly) NSSet * sharedCredentials;                                   //@synthesize sharedCredentials=_sharedCredentials - In the implementation block
@property (nonatomic,readonly) NSSet * receipts;                                            //@synthesize receipts=_receipts - In the implementation block
@property (nonatomic,readonly) NSString * recipientHandle;                                  //@synthesize recipientHandle=_recipientHandle - In the implementation block
@property (nonatomic,readonly) NSString * recipientName;                                    //@synthesize recipientName=_recipientName - In the implementation block
@property (nonatomic,readonly) PKAppletSubcredentialEntitlement * entitlement;              //@synthesize entitlement=_entitlement - In the implementation block
@property (nonatomic,readonly) long long state;                                             //@synthesize state=_state - In the implementation block
@property (getter=isLocalGroup,nonatomic,readonly) BOOL localGroup;                         //@synthesize localGroup=_localGroup - In the implementation block
+(BOOL)supportsSecureCoding;
-(PKAppletSubcredential *)credential;
-(PKAppletSubcredentialEntitlement *)entitlement;
-(void)encodeWithCoder:(id)arg1 ;
-(void)parseGroupItems;
-(id)initWithCredential:(id)arg1 sharedCredentials:(id)arg2 receipts:(id)arg3 ;
-(NSSet *)receipts;
-(BOOL)isLocalGroup;
-(NSString *)recipientName;
-(id)initWithCoder:(id)arg1 ;
-(long long)state;
-(NSString *)recipientHandle;
-(NSSet *)sharedCredentials;
@end

