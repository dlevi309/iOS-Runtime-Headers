/*
* Generated on Thursday, January 14, 2021 at 2:21:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <PassKitCore/PassKitCore-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSData, NSArray;

@interface PKPaymentMerchantSession : NSObject <NSSecureCoding, NSCopying> {

	unsigned long long _epochTimestamp;
	unsigned long long _expiresAt;
	NSString* _merchantSessionIdentifier;
	NSString* _nonce;
	NSString* _merchantIdentifier;
	NSString* _operationalAnalyticsIdentifier;
	NSString* _domain;
	NSString* _displayName;
	NSString* _initiativeContext;
	NSString* _initiative;
	NSData* _ampEnrollmentPinning;
	NSArray* _signedFields;
	NSData* _signature;
	NSString* _retryNonce;

}

@property (nonatomic,readonly) unsigned long long epochTimestamp;                      //@synthesize epochTimestamp=_epochTimestamp - In the implementation block
@property (nonatomic,readonly) unsigned long long expiresAt;                           //@synthesize expiresAt=_expiresAt - In the implementation block
@property (nonatomic,readonly) NSString * merchantSessionIdentifier;                   //@synthesize merchantSessionIdentifier=_merchantSessionIdentifier - In the implementation block
@property (nonatomic,readonly) NSString * nonce;                                       //@synthesize nonce=_nonce - In the implementation block
@property (nonatomic,readonly) NSString * merchantIdentifier;                          //@synthesize merchantIdentifier=_merchantIdentifier - In the implementation block
@property (nonatomic,readonly) NSString * operationalAnalyticsIdentifier;              //@synthesize operationalAnalyticsIdentifier=_operationalAnalyticsIdentifier - In the implementation block
@property (nonatomic,readonly) NSString * domain;                                      //@synthesize domain=_domain - In the implementation block
@property (nonatomic,readonly) NSString * displayName;                                 //@synthesize displayName=_displayName - In the implementation block
@property (nonatomic,readonly) NSString * initiativeContext;                           //@synthesize initiativeContext=_initiativeContext - In the implementation block
@property (nonatomic,readonly) NSString * initiative;                                  //@synthesize initiative=_initiative - In the implementation block
@property (nonatomic,readonly) NSData * ampEnrollmentPinning;                          //@synthesize ampEnrollmentPinning=_ampEnrollmentPinning - In the implementation block
@property (nonatomic,readonly) NSArray * signedFields;                                 //@synthesize signedFields=_signedFields - In the implementation block
@property (nonatomic,readonly) NSData * signature;                                     //@synthesize signature=_signature - In the implementation block
@property (nonatomic,retain) NSString * retryNonce;                                    //@synthesize retryNonce=_retryNonce - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)paymentMerchantSessionWithProtobuf:(id)arg1 ;
+(long long)version;
-(NSData *)signature;
-(id)initWithMerchantIdentifier:(id)arg1 merchantSessionIdentifier:(id)arg2 nonce:(id)arg3 epochTimestamp:(unsigned long long)arg4 expiresAt:(unsigned long long)arg5 displayName:(id)arg6 initiativeContext:(id)arg7 initiative:(id)arg8 ampEnrollmentPinning:(id)arg9 operationalAnalyticsIdentifier:(id)arg10 signedFields:(id)arg11 signature:(id)arg12 ;
-(id)initWithMerchantIdentifier:(id)arg1 merchantSessionIdentifier:(id)arg2 nonce:(id)arg3 epochTimestamp:(unsigned long long)arg4 domain:(id)arg5 displayName:(id)arg6 signature:(id)arg7 ;
-(NSString *)merchantSessionIdentifier;
-(NSString *)operationalAnalyticsIdentifier;
-(NSString *)initiativeContext;
-(NSData *)ampEnrollmentPinning;
-(id)initWithMerchantIdentifier:(id)arg1 merchantSessionIdentifier:(id)arg2 nonce:(id)arg3 epochTimestamp:(unsigned long long)arg4 expiresAt:(unsigned long long)arg5 displayName:(id)arg6 initiativeContext:(id)arg7 initiative:(id)arg8 signedFields:(id)arg9 signature:(id)arg10 ;
-(id)initWithMerchantIdentifier:(id)arg1 merchantSessionIdentifier:(id)arg2 nonce:(id)arg3 epochTimestamp:(unsigned long long)arg4 expiresAt:(unsigned long long)arg5 domain:(id)arg6 displayName:(id)arg7 operationalAnalyticsIdentifier:(id)arg8 signature:(id)arg9 ;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)domain;
-(id)initWithDictionary:(id)arg1 ;
-(id)description;
-(unsigned long long)expiresAt;
-(BOOL)supportsURL:(id)arg1 ;
-(id)protobuf;
-(unsigned long long)hash;
-(id)signedData;
-(NSString *)initiative;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)retryNonce;
-(NSString *)nonce;
-(NSString *)merchantIdentifier;
-(NSArray *)signedFields;
-(BOOL)_isModern;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)displayName;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)isEqualToPaymentMerchantSession:(id)arg1 ;
-(unsigned long long)epochTimestamp;
-(void)setRetryNonce:(NSString *)arg1 ;
@end

