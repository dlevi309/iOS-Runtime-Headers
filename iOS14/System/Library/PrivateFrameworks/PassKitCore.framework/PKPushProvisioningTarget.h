/*
* Generated on Thursday, January 14, 2021 at 2:21:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <PassKitCore/PassKitCore-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSDate;

@interface PKPushProvisioningTarget : NSObject <NSSecureCoding, NSCopying> {

	long long _appleIdentifierType;
	NSString* _appleIdentifier;
	NSString* _policyIdentifier;
	NSString* _provisioningCredentialIdentifier;
	NSString* _cardConfigurationIdentifier;
	NSString* _sharingInstanceIdentifier;
	NSDate* _creationDate;
	NSString* _nonce;

}

@property (nonatomic,readonly) long long appleIdentifierType;                                 //@synthesize appleIdentifierType=_appleIdentifierType - In the implementation block
@property (nonatomic,copy,readonly) NSString * appleIdentifier;                               //@synthesize appleIdentifier=_appleIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSString * policyIdentifier;                              //@synthesize policyIdentifier=_policyIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSString * provisioningCredentialIdentifier;              //@synthesize provisioningCredentialIdentifier=_provisioningCredentialIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSString * cardConfigurationIdentifier;                   //@synthesize cardConfigurationIdentifier=_cardConfigurationIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSString * sharingInstanceIdentifier;                     //@synthesize sharingInstanceIdentifier=_sharingInstanceIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSDate * creationDate;                                    //@synthesize creationDate=_creationDate - In the implementation block
@property (nonatomic,copy,readonly) NSString * nonce;                                         //@synthesize nonce=_nonce - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithAppleIdentifier:(id)arg1 appleIdentifierType:(long long)arg2 pushProvisioningPolicyIdentifier:(id)arg3 provisioningCredentialIdentifier:(id)arg4 cardConfigurationIdentifier:(id)arg5 sharingInstanceIdentifier:(id)arg6 nonce:(id)arg7 ;
-(id)jsonRepresentation;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)cardConfigurationIdentifier;
-(NSDate *)creationDate;
-(unsigned long long)hash;
-(BOOL)isEqualToProvisioningTarget:(id)arg1 ;
-(long long)appleIdentifierType;
-(NSString *)appleIdentifier;
-(NSString *)provisioningCredentialIdentifier;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)policyIdentifier;
-(NSString *)sharingInstanceIdentifier;
-(NSString *)nonce;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

