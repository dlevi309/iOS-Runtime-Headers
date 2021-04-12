/*
* Generated on Monday, March 1, 2021 at 2:32:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)identifier;
-(void)setIdentifier:(NSString *)arg1 ;
-(NSData *)publicKey;
-(void)setPublicKey:(NSData *)arg1 ;
-(NSString *)keyAttestation;
-(NSString *)keyAttestationAuthority;
-(NSNumber *)counterLimit;
-(NSNumber *)counterValue;
-(NSArray *)localValidations;
-(void)setKeyAttestationAuthority:(NSString *)arg1 ;
-(void)setKeyAttestation:(NSString *)arg1 ;
-(void)setCounterLimit:(NSNumber *)arg1 ;
-(void)setCounterValue:(NSNumber *)arg1 ;
-(void)setLocalValidations:(NSArray *)arg1 ;
@end

