/*
* Generated on Thursday, January 14, 2021 at 2:23:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
*/

#import <NewsTransport/NewsTransport-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData;

@interface NTPBAppleIdSignInResult : PBCodable <NSCopying> {

	int _paidSubscriptionConversionPointType;
	int _signInResult;
	NSData* _subscriptionPurchaseSessionId;
	SCD_Struct_CO1 _has;

}

@property (assign,nonatomic) BOOL hasSignInResult; 
@property (assign,nonatomic) int signInResult;                                         //@synthesize signInResult=_signInResult - In the implementation block
@property (assign,nonatomic) BOOL hasPaidSubscriptionConversionPointType; 
@property (assign,nonatomic) int paidSubscriptionConversionPointType;                  //@synthesize paidSubscriptionConversionPointType=_paidSubscriptionConversionPointType - In the implementation block
@property (nonatomic,readonly) BOOL hasSubscriptionPurchaseSessionId; 
@property (nonatomic,retain) NSData * subscriptionPurchaseSessionId;                   //@synthesize subscriptionPurchaseSessionId=_subscriptionPurchaseSessionId - In the implementation block
-(id)dictionaryRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(int)paidSubscriptionConversionPointType;
-(void)setPaidSubscriptionConversionPointType:(int)arg1 ;
-(void)setHasPaidSubscriptionConversionPointType:(BOOL)arg1 ;
-(BOOL)hasPaidSubscriptionConversionPointType;
-(id)paidSubscriptionConversionPointTypeAsString:(int)arg1 ;
-(int)StringAsPaidSubscriptionConversionPointType:(id)arg1 ;
-(void)setSubscriptionPurchaseSessionId:(NSData *)arg1 ;
-(BOOL)hasSubscriptionPurchaseSessionId;
-(NSData *)subscriptionPurchaseSessionId;
-(id)description;
-(unsigned long long)hash;
-(int)signInResult;
-(void)setSignInResult:(int)arg1 ;
-(void)setHasSignInResult:(BOOL)arg1 ;
-(BOOL)hasSignInResult;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

