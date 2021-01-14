/*
* Generated on Thursday, January 14, 2021 at 2:24:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/iCloudQuotaDaemon.framework/iCloudQuotaDaemon
*/


@class ACAccount, ACAccountStore, NSString;

@interface ICQOfferUpdateRequestContext : NSObject {

	BOOL _zeroAction;
	ACAccount* _account;
	ACAccountStore* _accountStore;
	NSString* _buttonId;
	NSString* _offerId;

}

@property (nonatomic,retain) ACAccount * account;                              //@synthesize account=_account - In the implementation block
@property (nonatomic,retain) ACAccountStore * accountStore;                    //@synthesize accountStore=_accountStore - In the implementation block
@property (nonatomic,copy) NSString * buttonId;                                //@synthesize buttonId=_buttonId - In the implementation block
@property (nonatomic,retain) NSString * offerId;                               //@synthesize offerId=_offerId - In the implementation block
@property (assign,getter=isZeroAction,nonatomic) BOOL zeroAction;              //@synthesize zeroAction=_zeroAction - In the implementation block
-(ACAccount *)account;
-(void)setAccount:(ACAccount *)arg1 ;
-(NSString *)offerId;
-(ACAccountStore *)accountStore;
-(void)setAccountStore:(ACAccountStore *)arg1 ;
-(NSString *)buttonId;
-(void)setOfferId:(NSString *)arg1 ;
-(void)setButtonId:(NSString *)arg1 ;
-(void)setZeroAction:(BOOL)arg1 ;
-(BOOL)isZeroAction;
@end

