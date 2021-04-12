/*
* Generated on Monday, March 1, 2021 at 2:34:36 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
*/

#import <ActionKit/FATObject.h>

@class NSNumber, NSString, EDAMUserAttributes, EDAMAccounting, EDAMPremiumInfo, EDAMBusinessUserInfo, EDAMAccountLimits, EDAMSubscriptionInfo, EDAMPricingModel;

@interface EDAMUser : FATObject {

	NSNumber* _id;
	NSString* _username;
	NSString* _email;
	NSString* _name;
	NSString* _timezone;
	NSNumber* _privilege;
	NSNumber* _serviceLevel;
	NSNumber* _created;
	NSNumber* _updated;
	NSNumber* _deleted;
	NSNumber* _active;
	NSString* _shardId;
	EDAMUserAttributes* _attributes;
	EDAMAccounting* _accounting;
	EDAMPremiumInfo* _premiumInfo;
	EDAMBusinessUserInfo* _businessUserInfo;
	NSString* _photoUrl;
	NSNumber* _photoLastUpdated;
	EDAMAccountLimits* _accountLimits;
	EDAMSubscriptionInfo* _subscriptionInfo;
	EDAMPricingModel* _pricingModel;

}

@property (nonatomic,retain) NSNumber * id;                                        //@synthesize id=_id - In the implementation block
@property (nonatomic,retain) NSString * username;                                  //@synthesize username=_username - In the implementation block
@property (nonatomic,retain) NSString * email;                                     //@synthesize email=_email - In the implementation block
@property (nonatomic,retain) NSString * name;                                      //@synthesize name=_name - In the implementation block
@property (nonatomic,retain) NSString * timezone;                                  //@synthesize timezone=_timezone - In the implementation block
@property (nonatomic,retain) NSNumber * privilege;                                 //@synthesize privilege=_privilege - In the implementation block
@property (nonatomic,retain) NSNumber * serviceLevel;                              //@synthesize serviceLevel=_serviceLevel - In the implementation block
@property (nonatomic,retain) NSNumber * created;                                   //@synthesize created=_created - In the implementation block
@property (nonatomic,retain) NSNumber * updated;                                   //@synthesize updated=_updated - In the implementation block
@property (nonatomic,retain) NSNumber * deleted;                                   //@synthesize deleted=_deleted - In the implementation block
@property (nonatomic,retain) NSNumber * active;                                    //@synthesize active=_active - In the implementation block
@property (nonatomic,retain) NSString * shardId;                                   //@synthesize shardId=_shardId - In the implementation block
@property (nonatomic,retain) EDAMUserAttributes * attributes;                      //@synthesize attributes=_attributes - In the implementation block
@property (nonatomic,retain) EDAMAccounting * accounting;                          //@synthesize accounting=_accounting - In the implementation block
@property (nonatomic,retain) EDAMPremiumInfo * premiumInfo;                        //@synthesize premiumInfo=_premiumInfo - In the implementation block
@property (nonatomic,retain) EDAMBusinessUserInfo * businessUserInfo;              //@synthesize businessUserInfo=_businessUserInfo - In the implementation block
@property (nonatomic,retain) NSString * photoUrl;                                  //@synthesize photoUrl=_photoUrl - In the implementation block
@property (nonatomic,retain) NSNumber * photoLastUpdated;                          //@synthesize photoLastUpdated=_photoLastUpdated - In the implementation block
@property (nonatomic,retain) EDAMAccountLimits * accountLimits;                    //@synthesize accountLimits=_accountLimits - In the implementation block
@property (nonatomic,retain) EDAMSubscriptionInfo * subscriptionInfo;              //@synthesize subscriptionInfo=_subscriptionInfo - In the implementation block
@property (nonatomic,retain) EDAMPricingModel * pricingModel;                      //@synthesize pricingModel=_pricingModel - In the implementation block
+(id)structName;
+(id)structFields;
-(NSString *)name;
-(void)setName:(NSString *)arg1 ;
-(EDAMUserAttributes *)attributes;
-(void)setAttributes:(EDAMUserAttributes *)arg1 ;
-(void)setActive:(NSNumber *)arg1 ;
-(NSNumber *)deleted;
-(NSString *)username;
-(void)setUsername:(NSString *)arg1 ;
-(NSString *)timezone;
-(NSNumber *)active;
-(NSString *)email;
-(void)setEmail:(NSString *)arg1 ;
-(NSNumber *)created;
-(void)setCreated:(NSNumber *)arg1 ;
-(void)setTimezone:(NSString *)arg1 ;
-(void)setDeleted:(NSNumber *)arg1 ;
-(EDAMSubscriptionInfo *)subscriptionInfo;
-(void)setSubscriptionInfo:(EDAMSubscriptionInfo *)arg1 ;
-(NSNumber *)updated;
-(void)setUpdated:(NSNumber *)arg1 ;
-(NSNumber *)id;
-(void)setId:(NSNumber *)arg1 ;
-(NSNumber *)privilege;
-(void)setPrivilege:(NSNumber *)arg1 ;
-(EDAMAccounting *)accounting;
-(NSString *)shardId;
-(void)setShardId:(NSString *)arg1 ;
-(NSNumber *)serviceLevel;
-(void)setServiceLevel:(NSNumber *)arg1 ;
-(void)setAccounting:(EDAMAccounting *)arg1 ;
-(EDAMPremiumInfo *)premiumInfo;
-(void)setPremiumInfo:(EDAMPremiumInfo *)arg1 ;
-(EDAMBusinessUserInfo *)businessUserInfo;
-(void)setBusinessUserInfo:(EDAMBusinessUserInfo *)arg1 ;
-(NSString *)photoUrl;
-(void)setPhotoUrl:(NSString *)arg1 ;
-(NSNumber *)photoLastUpdated;
-(void)setPhotoLastUpdated:(NSNumber *)arg1 ;
-(EDAMAccountLimits *)accountLimits;
-(void)setAccountLimits:(EDAMAccountLimits *)arg1 ;
-(EDAMPricingModel *)pricingModel;
-(void)setPricingModel:(EDAMPricingModel *)arg1 ;
@end

