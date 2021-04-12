/*
* Generated on Monday, March 1, 2021 at 2:34:19 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/iCloudQuotaDaemon.framework/iCloudQuotaDaemon
*/


@class NSDictionary, ICQDaemonOfferConditions, NSString, ICQDaemonOfferCriteria;

@interface ICQDaemonOfferStub : NSObject {

	NSDictionary* _serverDict;
	ICQDaemonOfferConditions* _conditionsWhenChosen;

}

@property (nonatomic,readonly) NSString * offerId; 
@property (getter=isBuddyOffer,nonatomic,readonly) BOOL buddyOffer; 
@property (nonatomic,readonly) ICQDaemonOfferCriteria * criteria; 
@property (nonatomic,copy) ICQDaemonOfferConditions * conditionsWhenChosen;              //@synthesize conditionsWhenChosen=_conditionsWhenChosen - In the implementation block
@property (nonatomic,readonly) NSDictionary * serverDictionary; 
-(ICQDaemonOfferCriteria *)criteria;
-(id)initWithServerDictionary:(id)arg1 ;
-(NSDictionary *)serverDictionary;
-(BOOL)isBuddyOffer;
-(NSString *)offerId;
-(ICQDaemonOfferConditions *)conditionsWhenChosen;
-(void)setConditionsWhenChosen:(ICQDaemonOfferConditions *)arg1 ;
@end

