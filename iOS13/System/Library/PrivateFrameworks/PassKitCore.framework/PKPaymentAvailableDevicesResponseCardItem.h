/*
* Generated on Monday, March 1, 2021 at 2:31:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/


@class NSString, NSNumber;

@interface PKPaymentAvailableDevicesResponseCardItem : NSObject {

	BOOL _supportsInApp;
	NSString* _cardType;
	NSNumber* _cardTypeCode;
	NSString* _currentStatus;

}

@property (nonatomic,copy) NSString * cardType;                   //@synthesize cardType=_cardType - In the implementation block
@property (nonatomic,copy) NSNumber * cardTypeCode;               //@synthesize cardTypeCode=_cardTypeCode - In the implementation block
@property (nonatomic,copy) NSString * currentStatus;              //@synthesize currentStatus=_currentStatus - In the implementation block
@property (assign,nonatomic) BOOL supportsInApp;                  //@synthesize supportsInApp=_supportsInApp - In the implementation block
-(id)initWithDictionary:(id)arg1 ;
-(void)setCurrentStatus:(NSString *)arg1 ;
-(NSString *)currentStatus;
-(NSString *)cardType;
-(void)setCardType:(NSString *)arg1 ;
-(NSNumber *)cardTypeCode;
-(void)setCardTypeCode:(NSNumber *)arg1 ;
-(BOOL)supportsInApp;
-(void)setSupportsInApp:(BOOL)arg1 ;
@end

