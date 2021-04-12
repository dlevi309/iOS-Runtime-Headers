/*
* Generated on Thursday, January 14, 2021 at 2:21:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSString *)signature;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setReferrerIdentifier:(NSString *)arg1 ;
-(NSString *)referrerIdentifier;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)merchantIdentifier;
-(void)setMerchantIdentifier:(NSString *)arg1 ;
-(void)setSignature:(NSString *)arg1 ;
-(NSURL *)originatingURL;
-(void)setOriginatingURL:(NSURL *)arg1 ;
-(NSArray *)signedFields;
-(void)setSignedFields:(NSArray *)arg1 ;
@end

