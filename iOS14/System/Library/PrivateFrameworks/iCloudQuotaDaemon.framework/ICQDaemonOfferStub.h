/*
* Generated on Thursday, January 14, 2021 at 2:24:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/iCloudQuotaDaemon.framework/iCloudQuotaDaemon
*/


@class NSDictionary, ICQDaemonOfferConditions, NSString, ICQDaemonOfferCriteria;

@interface ICQDaemonOfferStub : NSObject {

	NSDictionary* _serverDict;
	ICQDaemonOfferConditions* _conditionsWhenChosen;

}

@property (nonatomic,readonly) NSString * offerId; 
@property (getter=isBuddyOffer,nonatomic,readonly) BOOL buddyOffer; 
@property (getter=isDefaultOffer,nonatomic,readonly) BOOL defaultOffer; 
@property (nonatomic,readonly) ICQDaemonOfferCriteria * criteria; 
@property (nonatomic,copy) ICQDaemonOfferConditions * conditionsWhenChosen;              //@synthesize conditionsWhenChosen=_conditionsWhenChosen - In the implementation block
@property (nonatomic,readonly) NSDictionary * serverDictionary; 
-(NSString *)offerId;
-(ICQDaemonOfferCriteria *)criteria;
-(id)initWithServerDictionary:(id)arg1 ;
-(NSDictionary *)serverDictionary;
-(BOOL)isBuddyOffer;
-(BOOL)isDefaultOffer;
-(ICQDaemonOfferConditions *)conditionsWhenChosen;
-(void)setConditionsWhenChosen:(ICQDaemonOfferConditions *)arg1 ;
@end

