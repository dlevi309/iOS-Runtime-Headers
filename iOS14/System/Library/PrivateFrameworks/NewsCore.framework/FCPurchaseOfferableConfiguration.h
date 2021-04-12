/*
* Generated on Thursday, January 14, 2021 at 2:21:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/


@class NSString;

@interface FCPurchaseOfferableConfiguration : NSObject {

	BOOL _allowsPublisherPhoneApp;
	BOOL _allowsPublisherPadApp;
	BOOL _allowsPublisherWebsite;
	BOOL _preferredOffer;
	NSString* _purchaseID;

}

@property (nonatomic,copy) NSString * purchaseID;                       //@synthesize purchaseID=_purchaseID - In the implementation block
@property (assign,nonatomic) BOOL allowsPublisherPhoneApp;              //@synthesize allowsPublisherPhoneApp=_allowsPublisherPhoneApp - In the implementation block
@property (assign,nonatomic) BOOL allowsPublisherPadApp;                //@synthesize allowsPublisherPadApp=_allowsPublisherPadApp - In the implementation block
@property (assign,nonatomic) BOOL allowsPublisherWebsite;               //@synthesize allowsPublisherWebsite=_allowsPublisherWebsite - In the implementation block
@property (assign,nonatomic) BOOL preferredOffer;                       //@synthesize preferredOffer=_preferredOffer - In the implementation block
-(void)setAllowsPublisherPadApp:(BOOL)arg1 ;
-(void)setPurchaseID:(NSString *)arg1 ;
-(void)setAllowsPublisherWebsite:(BOOL)arg1 ;
-(id)initWithPurchaseID:(id)arg1 allowsPublisherPhoneApp:(BOOL)arg2 allowsPublisherPadApp:(BOOL)arg3 allowsPublisherWebsite:(BOOL)arg4 preferredOffer:(BOOL)arg5 ;
-(BOOL)allowsPublisherPadApp;
-(BOOL)allowsPublisherPhoneApp;
-(NSString *)purchaseID;
-(void)setPreferredOffer:(BOOL)arg1 ;
-(BOOL)preferredOffer;
-(BOOL)allowsPublisherWebsite;
-(void)setAllowsPublisherPhoneApp:(BOOL)arg1 ;
@end

