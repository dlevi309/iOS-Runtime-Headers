/*
* Generated on Monday, March 1, 2021 at 2:34:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /usr/lib/libcoreroutine.dylib
*/

#import <libcoreroutine.dylib/RTNotification.h>

@class NSString, NSDate, CLLocation, NSNumber;

@interface RTWalletManagerNotificationPaymentUsed : RTNotification {

	NSString* _passIdentifier;
	NSString* _transactionIdentifier;
	NSDate* _date;
	CLLocation* _location;
	NSNumber* _muid;
	NSNumber* _provider;

}

@property (nonatomic,copy,readonly) NSString * passIdentifier;                     //@synthesize passIdentifier=_passIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSString * transactionIdentifier;              //@synthesize transactionIdentifier=_transactionIdentifier - In the implementation block
@property (nonatomic,readonly) NSDate * date;                                      //@synthesize date=_date - In the implementation block
@property (nonatomic,readonly) CLLocation * location;                              //@synthesize location=_location - In the implementation block
@property (nonatomic,readonly) NSNumber * muid;                                    //@synthesize muid=_muid - In the implementation block
@property (nonatomic,readonly) NSNumber * provider;                                //@synthesize provider=_provider - In the implementation block
-(NSDate *)date;
-(CLLocation *)location;
-(NSNumber *)provider;
-(NSNumber *)muid;
-(NSString *)transactionIdentifier;
-(NSString *)passIdentifier;
-(id)initWithPassIdentifier:(id)arg1 transactionIdentifier:(id)arg2 info:(id)arg3 ;
@end

