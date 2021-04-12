/*
* Generated on Monday, March 1, 2021 at 2:34:36 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
*/

#import <ActionKit/FATObject.h>

@class NSNumber, NSSet, NSString;

@interface EDAMSubscriptionInfo : FATObject {

	NSNumber* _currentTime;
	NSNumber* _currentlySubscribed;
	NSNumber* _subscriptionRecurring;
	NSNumber* _subscriptionExpirationDate;
	NSNumber* _subscriptionPending;
	NSNumber* _subscriptionCancellationPending;
	NSSet* _serviceLevelsEligibleForPurchase;
	NSString* _currentSku;
	NSNumber* _validUntil;
	NSNumber* _itunesReceiptRequested;

}

@property (nonatomic,retain) NSNumber * currentTime;                                  //@synthesize currentTime=_currentTime - In the implementation block
@property (nonatomic,retain) NSNumber * currentlySubscribed;                          //@synthesize currentlySubscribed=_currentlySubscribed - In the implementation block
@property (nonatomic,retain) NSNumber * subscriptionRecurring;                        //@synthesize subscriptionRecurring=_subscriptionRecurring - In the implementation block
@property (nonatomic,retain) NSNumber * subscriptionExpirationDate;                   //@synthesize subscriptionExpirationDate=_subscriptionExpirationDate - In the implementation block
@property (nonatomic,retain) NSNumber * subscriptionPending;                          //@synthesize subscriptionPending=_subscriptionPending - In the implementation block
@property (nonatomic,retain) NSNumber * subscriptionCancellationPending;              //@synthesize subscriptionCancellationPending=_subscriptionCancellationPending - In the implementation block
@property (nonatomic,retain) NSSet * serviceLevelsEligibleForPurchase;                //@synthesize serviceLevelsEligibleForPurchase=_serviceLevelsEligibleForPurchase - In the implementation block
@property (nonatomic,retain) NSString * currentSku;                                   //@synthesize currentSku=_currentSku - In the implementation block
@property (nonatomic,retain) NSNumber * validUntil;                                   //@synthesize validUntil=_validUntil - In the implementation block
@property (nonatomic,retain) NSNumber * itunesReceiptRequested;                       //@synthesize itunesReceiptRequested=_itunesReceiptRequested - In the implementation block
+(id)structName;
+(id)structFields;
-(NSNumber *)currentTime;
-(void)setCurrentTime:(NSNumber *)arg1 ;
-(NSNumber *)subscriptionExpirationDate;
-(void)setSubscriptionExpirationDate:(NSNumber *)arg1 ;
-(NSNumber *)validUntil;
-(NSNumber *)currentlySubscribed;
-(void)setCurrentlySubscribed:(NSNumber *)arg1 ;
-(NSNumber *)subscriptionRecurring;
-(void)setSubscriptionRecurring:(NSNumber *)arg1 ;
-(NSNumber *)subscriptionPending;
-(void)setSubscriptionPending:(NSNumber *)arg1 ;
-(NSNumber *)subscriptionCancellationPending;
-(void)setSubscriptionCancellationPending:(NSNumber *)arg1 ;
-(NSSet *)serviceLevelsEligibleForPurchase;
-(void)setServiceLevelsEligibleForPurchase:(NSSet *)arg1 ;
-(NSString *)currentSku;
-(void)setCurrentSku:(NSString *)arg1 ;
-(void)setValidUntil:(NSNumber *)arg1 ;
-(NSNumber *)itunesReceiptRequested;
-(void)setItunesReceiptRequested:(NSNumber *)arg1 ;
@end

