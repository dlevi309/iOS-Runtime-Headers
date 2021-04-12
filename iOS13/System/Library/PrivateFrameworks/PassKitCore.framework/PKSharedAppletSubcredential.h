/*
* Generated on Monday, March 1, 2021 at 2:31:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <PassKitCore/PassKitCore-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, PKAppletSubcredentialEntitlement, PKSharedAppletSubcredentialMetadata;

@interface PKSharedAppletSubcredential : NSObject <NSSecureCoding, NSCopying> {

	BOOL _canBeRevoked;
	NSString* _identifier;
	NSString* _name;
	long long _state;
	PKAppletSubcredentialEntitlement* _entitlement;
	PKSharedAppletSubcredentialMetadata* _metadata;

}

@property (nonatomic,copy) NSString * identifier;                                         //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy) NSString * name;                                               //@synthesize name=_name - In the implementation block
@property (assign,nonatomic) long long state;                                             //@synthesize state=_state - In the implementation block
@property (nonatomic,retain) PKAppletSubcredentialEntitlement * entitlement;              //@synthesize entitlement=_entitlement - In the implementation block
@property (nonatomic,retain) PKSharedAppletSubcredentialMetadata * metadata;              //@synthesize metadata=_metadata - In the implementation block
@property (assign,nonatomic) BOOL canBeRevoked;                                           //@synthesize canBeRevoked=_canBeRevoked - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)description;
-(NSString *)name;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(NSString *)identifier;
-(void)setIdentifier:(NSString *)arg1 ;
-(long long)state;
-(void)setState:(long long)arg1 ;
-(void)setMetadata:(PKSharedAppletSubcredentialMetadata *)arg1 ;
-(PKSharedAppletSubcredentialMetadata *)metadata;
-(PKAppletSubcredentialEntitlement *)entitlement;
-(void)setEntitlement:(PKAppletSubcredentialEntitlement *)arg1 ;
-(id)initWithSharedCredentialManifestItem:(id)arg1 credential:(id)arg2 ;
-(id)initWithIdentifier:(id)arg1 sharingInvitationReceipt:(id)arg2 ;
-(id)updateWithSharedCredentialManifestItem:(id)arg1 credential:(id)arg2 ;
-(BOOL)canBeRevoked;
-(void)setCanBeRevoked:(BOOL)arg1 ;
@end

