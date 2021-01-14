/*
* Generated on Thursday, January 14, 2021 at 2:28:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
*/


@class PKPaymentTransaction, NSString, NSArray, NSDate;

@interface NPKPeerPaymentTransactionDetails : NSObject {

	PKPaymentTransaction* _transaction;
	NSString* _serviceIdentifier;
	unsigned long long _paymentStatus;
	NSArray* _availableActions;
	NSDate* _availableActionsFetchDate;

}

@property (nonatomic,retain) PKPaymentTransaction * transaction;              //@synthesize transaction=_transaction - In the implementation block
@property (nonatomic,retain) NSString * serviceIdentifier;                    //@synthesize serviceIdentifier=_serviceIdentifier - In the implementation block
@property (assign,nonatomic) unsigned long long paymentStatus;                //@synthesize paymentStatus=_paymentStatus - In the implementation block
@property (nonatomic,retain) NSArray * availableActions;                      //@synthesize availableActions=_availableActions - In the implementation block
@property (nonatomic,retain) NSDate * availableActionsFetchDate;              //@synthesize availableActionsFetchDate=_availableActionsFetchDate - In the implementation block
-(void)setTransaction:(PKPaymentTransaction *)arg1 ;
-(PKPaymentTransaction *)transaction;
-(void)setServiceIdentifier:(NSString *)arg1 ;
-(unsigned long long)paymentStatus;
-(void)setPaymentStatus:(unsigned long long)arg1 ;
-(NSString *)serviceIdentifier;
-(id)description;
-(NSArray *)availableActions;
-(void)setAvailableActions:(NSArray *)arg1 ;
-(NSDate *)availableActionsFetchDate;
-(void)setAvailableActionsFetchDate:(NSDate *)arg1 ;
@end

