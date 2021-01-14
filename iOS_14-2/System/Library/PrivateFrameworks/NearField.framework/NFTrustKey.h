/*
* Generated on Thursday, January 14, 2021 at 2:24:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NearField.framework/NearField
*/

#import <NearField/NFTrustObject.h>

@class NSString, NSNumber, NSArray, NSData;

@interface NFTrustKey : NFTrustObject {

	NSString* _identifier;
	NSString* _keyAttestationAuthority;
	NSString* _keyAttestation;
	NSNumber* _counterLimit;
	NSNumber* _counterValue;
	NSArray* _localValidations;
	NSData* _publicKey;

}

@property (nonatomic,retain) NSString * identifier;                           //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,retain) NSData * publicKey;                              //@synthesize publicKey=_publicKey - In the implementation block
@property (nonatomic,retain) NSNumber * counterLimit;                         //@synthesize counterLimit=_counterLimit - In the implementation block
@property (nonatomic,retain) NSNumber * counterValue;                         //@synthesize counterValue=_counterValue - In the implementation block
@property (nonatomic,retain) NSArray * localValidations;                      //@synthesize localValidations=_localValidations - In the implementation block
@property (nonatomic,retain) NSString * keyAttestationAuthority;              //@synthesize keyAttestationAuthority=_keyAttestationAuthority - In the implementation block
@property (nonatomic,retain) NSString * keyAttestation;                       //@synthesize keyAttestation=_keyAttestation - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)keyWithIdentifier:(id)arg1 ;
-(NSData *)publicKey;
-(void)setPublicKey:(NSData *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)keyAttestation;
-(NSString *)keyAttestationAuthority;
-(id)initWithCoder:(id)arg1 ;
-(void)setIdentifier:(NSString *)arg1 ;
-(NSString *)identifier;
-(NSNumber *)counterLimit;
-(NSNumber *)counterValue;
-(NSArray *)localValidations;
-(void)setKeyAttestationAuthority:(NSString *)arg1 ;
-(void)setKeyAttestation:(NSString *)arg1 ;
-(void)setCounterLimit:(NSNumber *)arg1 ;
-(void)setCounterValue:(NSNumber *)arg1 ;
-(void)setLocalValidations:(NSArray *)arg1 ;
@end

