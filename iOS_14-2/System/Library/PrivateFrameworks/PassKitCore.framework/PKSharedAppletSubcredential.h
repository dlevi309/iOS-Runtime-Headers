/*
* Generated on Thursday, January 14, 2021 at 2:21:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <PassKitCore/PassKitCore-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, PKAppletSubcredentialEntitlement, PKSharedAppletSubcredentialMetadata;

@interface PKSharedAppletSubcredential : NSObject <NSSecureCoding, NSCopying> {

	BOOL _dataSourceCredentialManifest;
	NSString* _identifier;
	NSString* _name;
	long long _state;
	PKAppletSubcredentialEntitlement* _entitlement;
	PKSharedAppletSubcredentialMetadata* _metadata;

}

@property (nonatomic,copy) NSString * identifier;                                                                  //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy) NSString * name;                                                                        //@synthesize name=_name - In the implementation block
@property (assign,nonatomic) long long state;                                                                      //@synthesize state=_state - In the implementation block
@property (nonatomic,retain) PKAppletSubcredentialEntitlement * entitlement;                                       //@synthesize entitlement=_entitlement - In the implementation block
@property (nonatomic,retain) PKSharedAppletSubcredentialMetadata * metadata;                                       //@synthesize metadata=_metadata - In the implementation block
@property (assign,getter=isDataSourceCredentialManifest,nonatomic) BOOL dataSourceCredentialManifest;              //@synthesize dataSourceCredentialManifest=_dataSourceCredentialManifest - In the implementation block
+(BOOL)supportsSecureCoding;
-(PKAppletSubcredentialEntitlement *)entitlement;
-(void)setDataSourceCredentialManifest:(BOOL)arg1 ;
-(id)initWithSharedCredentialManifestItem:(id)arg1 credential:(id)arg2 ;
-(BOOL)isDataSourceCredentialManifest;
-(id)initWithIdentifier:(id)arg1 sharingInvitationReceipt:(id)arg2 ;
-(id)updateWithSharedCredentialManifestItem:(id)arg1 credential:(id)arg2 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setMetadata:(PKSharedAppletSubcredentialMetadata *)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(NSString *)name;
-(id)description;
-(void)setState:(long long)arg1 ;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(long long)state;
-(void)setEntitlement:(PKAppletSubcredentialEntitlement *)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(void)setIdentifier:(NSString *)arg1 ;
-(NSString *)identifier;
-(PKSharedAppletSubcredentialMetadata *)metadata;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

