/*
* Generated on Monday, March 1, 2021 at 2:31:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface PKAccessPassProvisioningConfiguration : NSObject <NSSecureCoding> {

	NSString* _pairingPassword;
	NSString* _issuerName;
	NSString* _appIdentifier;

}

@property (nonatomic,copy) NSString * appIdentifier;                //@synthesize appIdentifier=_appIdentifier - In the implementation block
@property (nonatomic,copy) NSString * pairingPassword;              //@synthesize pairingPassword=_pairingPassword - In the implementation block
@property (nonatomic,copy) NSString * issuerName;                   //@synthesize issuerName=_issuerName - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(id)dictionaryRepresentation;
-(void)setAppIdentifier:(NSString *)arg1 ;
-(NSString *)appIdentifier;
-(NSString *)pairingPassword;
-(void)setPairingPassword:(NSString *)arg1 ;
-(NSString *)issuerName;
-(void)setIssuerName:(NSString *)arg1 ;
@end

