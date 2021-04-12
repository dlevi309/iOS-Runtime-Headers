/*
* Generated on Thursday, January 14, 2021 at 2:27:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/VideoSubscriberAccount.framework/VideoSubscriberAccount
*/

#import <VideoSubscriberAccount/VideoSubscriberAccount-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDate, NSArray, NSString, VSSubscriptionSource, NSData;

@interface VSSubscription : NSObject <NSCopying, NSSecureCoding> {

	NSDate* _expirationDate;
	long long _accessLevel;
	NSArray* _tierIdentifiers;
	NSString* _billingIdentifier;
	NSDate* _creationDate;
	NSDate* _modificationDate;
	NSString* _derivedSubscriptionInfo;
	NSString* _providedSubscriptionInfo;
	VSSubscriptionSource* _source;
	NSString* _subscriberIdentifierHash;

}

@property (nonatomic,copy) NSDate * creationDate;                            //@synthesize creationDate=_creationDate - In the implementation block
@property (nonatomic,copy) NSDate * modificationDate;                        //@synthesize modificationDate=_modificationDate - In the implementation block
@property (nonatomic,copy) NSString * subscriptionInfo; 
@property (nonatomic,copy) NSString * derivedSubscriptionInfo;               //@synthesize derivedSubscriptionInfo=_derivedSubscriptionInfo - In the implementation block
@property (nonatomic,copy) NSString * providedSubscriptionInfo;              //@synthesize providedSubscriptionInfo=_providedSubscriptionInfo - In the implementation block
@property (nonatomic,copy) VSSubscriptionSource * source;                    //@synthesize source=_source - In the implementation block
@property (nonatomic,copy,readonly) NSData * versionHash; 
@property (nonatomic,copy) NSString * subscriberIdentifierHash;              //@synthesize subscriberIdentifierHash=_subscriberIdentifierHash - In the implementation block
@property (nonatomic,copy) NSDate * expirationDate;                          //@synthesize expirationDate=_expirationDate - In the implementation block
@property (assign,nonatomic) long long accessLevel;                          //@synthesize accessLevel=_accessLevel - In the implementation block
@property (nonatomic,copy) NSArray * tierIdentifiers;                        //@synthesize tierIdentifiers=_tierIdentifiers - In the implementation block
@property (nonatomic,copy) NSString * billingIdentifier;                     //@synthesize billingIdentifier=_billingIdentifier - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)keyPathsForValuesAffectingSubscriptionInfo;
+(id)keyPathsForValuesAffectingVersionHash;
-(NSDate *)modificationDate;
-(NSData *)versionHash;
-(void)setExpirationDate:(NSDate *)arg1 ;
-(id)init;
-(void)setCreationDate:(NSDate *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(long long)accessLevel;
-(void)setSource:(VSSubscriptionSource *)arg1 ;
-(id)description;
-(NSDate *)creationDate;
-(NSDate *)expirationDate;
-(void)setSubscriptionInfo:(NSString *)arg1 ;
-(void)setModificationDate:(NSDate *)arg1 ;
-(unsigned long long)hash;
-(void)setAccessLevel:(long long)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)subscriptionInfo;
-(void)setNilValueForKey:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(VSSubscriptionSource *)source;
-(NSString *)providedSubscriptionInfo;
-(void)setTierIdentifiers:(NSArray *)arg1 ;
-(void)setSubscriberIdentifierHash:(NSString *)arg1 ;
-(void)setBillingIdentifier:(NSString *)arg1 ;
-(void)setProvidedSubscriptionInfo:(NSString *)arg1 ;
-(NSString *)derivedSubscriptionInfo;
-(void)_updateHash:(id)arg1 withValueForProperty:(id)arg2 ;
-(NSString *)billingIdentifier;
-(NSArray *)tierIdentifiers;
-(NSString *)subscriberIdentifierHash;
-(void)setDerivedSubscriptionInfo:(NSString *)arg1 ;
@end

