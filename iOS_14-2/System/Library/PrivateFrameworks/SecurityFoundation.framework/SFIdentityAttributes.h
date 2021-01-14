/*
* Generated on Thursday, January 14, 2021 at 2:24:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SecurityFoundation.framework/SecurityFoundation
*/

#import <SecurityFoundation/SecurityFoundation-Structs.h>
#import <libobjc.A.dylib/SFKeychainItemAttributes.h>

@class NSString, _SFAsymmetricKeySpecifier;

@interface SFIdentityAttributes : NSObject <SFKeychainItemAttributes> {

	id _identityAttributesInternal;
	NSString* persistentIdentifier;
	NSString* _privateKeyDomain;

}

@property (nonatomic,copy) NSString * identityName; 
@property (nonatomic,copy,readonly) _SFAsymmetricKeySpecifier * keySpecifier; 
@property (nonatomic,readonly) BOOL hasCertificate; 
@property (nonatomic,copy,readonly) NSString * privateKeyDomain;                           //@synthesize privateKeyDomain=_privateKeyDomain - In the implementation block
@property (nonatomic,copy) NSString * localizedLabel; 
@property (nonatomic,copy) NSString * localizedDescription; 
@property (nonatomic,copy,readonly) NSString * persistentIdentifier; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(void)setKeySpecifier:(_SFAsymmetricKeySpecifier *)arg1 ;
-(void)setLocalizedLabel:(NSString *)arg1 ;
-(NSString *)localizedLabel;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)hasCertificate;
-(NSString *)persistentIdentifier;
-(NSString *)localizedDescription;
-(id)initWithCoder:(id)arg1 ;
-(void)setLocalizedDescription:(NSString *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(_SFAsymmetricKeySpecifier *)keySpecifier;
-(NSString *)privateKeyDomain;
-(NSString *)identityName;
-(void)setIdentityName:(NSString *)arg1 ;
@end

