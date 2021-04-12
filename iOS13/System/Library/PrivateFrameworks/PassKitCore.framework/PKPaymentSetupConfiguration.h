/*
* Generated on Monday, March 1, 2021 at 2:31:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSURL, NSArray;

@interface PKPaymentSetupConfiguration : NSObject <NSSecureCoding> {

	NSString* _referrerIdentifier;
	NSURL* _originatingURL;
	NSString* _merchantIdentifier;
	NSArray* _signedFields;
	NSString* _signature;

}

@property (nonatomic,retain) NSURL * originatingURL;                   //@synthesize originatingURL=_originatingURL - In the implementation block
@property (nonatomic,copy) NSString * merchantIdentifier;              //@synthesize merchantIdentifier=_merchantIdentifier - In the implementation block
@property (nonatomic,copy) NSArray * signedFields;                     //@synthesize signedFields=_signedFields - In the implementation block
@property (nonatomic,copy) NSString * signature;                       //@synthesize signature=_signature - In the implementation block
@property (nonatomic,copy) NSString * referrerIdentifier;              //@synthesize referrerIdentifier=_referrerIdentifier - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)signature;
-(void)setSignature:(NSString *)arg1 ;
-(void)setOriginatingURL:(NSURL *)arg1 ;
-(void)setMerchantIdentifier:(NSString *)arg1 ;
-(void)setReferrerIdentifier:(NSString *)arg1 ;
-(void)setSignedFields:(NSArray *)arg1 ;
-(NSString *)merchantIdentifier;
-(NSString *)referrerIdentifier;
-(NSURL *)originatingURL;
-(NSArray *)signedFields;
@end

