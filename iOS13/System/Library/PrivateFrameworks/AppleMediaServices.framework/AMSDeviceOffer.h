/*
* Generated on Monday, March 1, 2021 at 2:31:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
+(id)bagSubProfile;
+(id)bagSubProfileVersion;
+(id)bagKeySet;
+(void)addRequiredBagKeysToAggregator:(id)arg1 ;
+(id)offersSetFromArray:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(id)initWithDictionary:(id)arg1 ;
-(void)setDescription:(NSString *)arg1 ;
-(NSNumber *)adamId;
-(void)setAdamId:(NSNumber *)arg1 ;
-(NSString *)offerIdentifier;
-(void)setOfferIdentifier:(NSString *)arg1 ;
-(unsigned long long)offerType;
-(void)setSubscribed:(BOOL)arg1 ;
-(id)initWithOfferIdentifier:(id)arg1 ;
-(BOOL)isDowngrading;
-(BOOL)isSubscribed;
-(NSSet *)serialNumbers;
-(void)setDowngrading:(BOOL)arg1 ;
@end

