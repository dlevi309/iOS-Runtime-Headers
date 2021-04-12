/*
* Generated on Thursday, January 14, 2021 at 2:23:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/AppStoreDaemon
*/

#import <AppStoreDaemon/AppStoreDaemon-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSNumber, NSDate, NSString;

@interface ASDIAPInfo : NSObject <NSCopying, NSMutableCopying, NSSecureCoding> {

	BOOL _autoRenewStatus;
	BOOL _hasUsedFreeOffer;
	BOOL _hasUsedIntroPricingOffer;
	unsigned char _type;
	NSNumber* _adamId;
	NSNumber* _appAdamId;
	NSDate* _expirationDate;
	NSDate* _lastModifiedDate;
	NSDate* _purchaseDate;
	NSString* _subscriptionFamilyId;

}

@property (nonatomic,retain) NSNumber * adamId;                               //@synthesize adamId=_adamId - In the implementation block
@property (nonatomic,retain) NSNumber * appAdamId;                            //@synthesize appAdamId=_appAdamId - In the implementation block
@property (assign,nonatomic) BOOL autoRenewStatus;                            //@synthesize autoRenewStatus=_autoRenewStatus - In the implementation block
@property (nonatomic,retain) NSDate * expirationDate;                         //@synthesize expirationDate=_expirationDate - In the implementation block
@property (nonatomic,retain) NSDate * lastModifiedDate;                       //@synthesize lastModifiedDate=_lastModifiedDate - In the implementation block
@property (nonatomic,retain) NSDate * purchaseDate;                           //@synthesize purchaseDate=_purchaseDate - In the implementation block
@property (assign,nonatomic) unsigned char type;                              //@synthesize type=_type - In the implementation block
@property (assign,nonatomic) BOOL hasUsedFreeOffer;                           //@synthesize hasUsedFreeOffer=_hasUsedFreeOffer - In the implementation block
@property (assign,nonatomic) BOOL hasUsedIntroPricingOffer;                   //@synthesize hasUsedIntroPricingOffer=_hasUsedIntroPricingOffer - In the implementation block
@property (nonatomic,retain) NSString * subscriptionFamilyId;                 //@synthesize subscriptionFamilyId=_subscriptionFamilyId - In the implementation block
@property (nonatomic,readonly) NSNumber * expirationTimestamp; 
@property (nonatomic,readonly) NSNumber * lastModifiedTimestamp; 
@property (nonatomic,readonly) NSNumber * purchaseTimestamp; 
+(BOOL)supportsSecureCoding;
-(void)setExpirationDate:(NSDate *)arg1 ;
-(BOOL)hasUsedFreeOffer;
-(BOOL)hasUsedIntroPricingOffer;
-(NSDate *)lastModifiedDate;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setPurchaseDate:(NSDate *)arg1 ;
-(NSDate *)purchaseDate;
-(void)setType:(unsigned char)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(id)description;
-(NSNumber *)appAdamId;
-(void)setLastModifiedDate:(NSDate *)arg1 ;
-(NSDate *)expirationDate;
-(NSNumber *)lastModifiedTimestamp;
-(void)setAppAdamId:(NSNumber *)arg1 ;
-(unsigned char)type;
-(id)initWithCoder:(id)arg1 ;
-(NSNumber *)adamId;
-(BOOL)isEqualToIAPInfo:(id)arg1 ;
-(id)_newCopyWithClass:(Class)arg1 zone:(NSZone*)arg2 ;
-(NSNumber *)purchaseTimestamp;
-(BOOL)autoRenewStatus;
-(void)setAutoRenewStatus:(BOOL)arg1 ;
-(void)setHasUsedFreeOffer:(BOOL)arg1 ;
-(void)setHasUsedIntroPricingOffer:(BOOL)arg1 ;
-(NSString *)subscriptionFamilyId;
-(void)setSubscriptionFamilyId:(NSString *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setAdamId:(NSNumber *)arg1 ;
-(NSNumber *)expirationTimestamp;
-(BOOL)isEqual:(id)arg1 ;
@end

