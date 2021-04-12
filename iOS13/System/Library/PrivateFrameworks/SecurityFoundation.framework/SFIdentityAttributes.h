/*
* Generated on Monday, March 1, 2021 at 2:33:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) NSString * localizedLabel; 
@property (nonatomic,copy) NSString * localizedDescription; 
@property (nonatomic,copy,readonly) NSString * persistentIdentifier; 
+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)localizedDescription;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)persistentIdentifier;
-(void)setLocalizedDescription:(NSString *)arg1 ;
-(BOOL)hasCertificate;
-(NSString *)localizedLabel;
-(void)setLocalizedLabel:(NSString *)arg1 ;
-(_SFAsymmetricKeySpecifier *)keySpecifier;
-(NSString *)privateKeyDomain;
-(void)setKeySpecifier:(_SFAsymmetricKeySpecifier *)arg1 ;
-(NSString *)identityName;
-(void)setIdentityName:(NSString *)arg1 ;
@end

