/*
* Generated on Thursday, January 14, 2021 at 2:20:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
*/

#import <libobjc.A.dylib/AMSBagConsumer_Project.h>
#import <libobjc.A.dylib/AMSBagConsumer.h>

@class NSNumber, NSString, NSSet;

@interface AMSDeviceOffer : NSObject <AMSBagConsumer_Project, AMSBagConsumer> {

	BOOL _downgrading;
	BOOL _subscribed;
	NSNumber* _adamId;
	NSString* _description;
	NSSet* _serialNumbers;
	NSString* _offerIdentifier;

}

@property (nonatomic,copy) NSNumber * adamId;                                    //@synthesize adamId=_adamId - In the implementation block
@property (nonatomic,copy) NSString * description;                               //@synthesize description=_description - In the implementation block
@property (assign,getter=isDowngrading,nonatomic) BOOL downgrading;              //@synthesize downgrading=_downgrading - In the implementation block
@property (nonatomic,copy) NSString * offerIdentifier;                           //@synthesize offerIdentifier=_offerIdentifier - In the implementation block
@property (nonatomic,readonly) unsigned long long offerType; 
@property (nonatomic,readonly) NSSet * serialNumbers;                            //@synthesize serialNumbers=_serialNumbers - In the implementation block
@property (assign,getter=isSubscribed,nonatomic) BOOL subscribed;                //@synthesize subscribed=_subscribed - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * debugDescription; 
+(id)bagKeySet;
+(id)bagSubProfile;
+(void)addRequiredBagKeysToAggregator:(id)arg1 ;
+(id)bagSubProfileVersion;
+(id)offersSetFromArray:(id)arg1 ;
+(id)createBagForSubProfile;
-(id)initWithDictionary:(id)arg1 ;
-(NSString *)description;
-(unsigned long long)hash;
-(void)setSubscribed:(BOOL)arg1 ;
-(BOOL)isSubscribed;
-(void)setDescription:(NSString *)arg1 ;
-(unsigned long long)offerType;
-(NSNumber *)adamId;
-(NSString *)offerIdentifier;
-(void)setAdamId:(NSNumber *)arg1 ;
-(BOOL)isDowngrading;
-(id)initWithOfferIdentifier:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(NSSet *)serialNumbers;
-(void)setDowngrading:(BOOL)arg1 ;
-(void)setOfferIdentifier:(NSString *)arg1 ;
@end

