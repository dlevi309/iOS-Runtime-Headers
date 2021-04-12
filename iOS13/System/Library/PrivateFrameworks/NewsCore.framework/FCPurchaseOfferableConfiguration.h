/*
* Generated on Monday, March 1, 2021 at 2:32:40 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(NSString *)purchaseID;
-(void)setPurchaseID:(NSString *)arg1 ;
-(id)initWithPurchaseID:(id)arg1 allowsPublisherPhoneApp:(BOOL)arg2 allowsPublisherPadApp:(BOOL)arg3 allowsPublisherWebsite:(BOOL)arg4 preferredOffer:(BOOL)arg5 ;
-(BOOL)allowsPublisherPhoneApp;
-(void)setAllowsPublisherPhoneApp:(BOOL)arg1 ;
-(BOOL)allowsPublisherPadApp;
-(void)setAllowsPublisherPadApp:(BOOL)arg1 ;
-(BOOL)allowsPublisherWebsite;
-(void)setAllowsPublisherWebsite:(BOOL)arg1 ;
-(BOOL)preferredOffer;
-(void)setPreferredOffer:(BOOL)arg1 ;
@end

