/*
* Generated on Monday, March 1, 2021 at 2:31:37 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
*/

#import <MapKit/MapKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSNumber, NSDate, CLLocation;

@interface _MKLocalSearchMerchantParameters : NSObject <NSCopying> {

	NSString* _merchantCode;
	NSString* _rawMerchantCode;
	NSString* _paymentNetwork;
	NSString* _industryCategory;
	NSNumber* _industryCode;
	NSDate* _transactionDate;
	CLLocation* _transactionLocation;

}

@property (nonatomic,copy) NSString * merchantCode;                         //@synthesize merchantCode=_merchantCode - In the implementation block
@property (nonatomic,copy) NSString * rawMerchantCode;                      //@synthesize rawMerchantCode=_rawMerchantCode - In the implementation block
@property (nonatomic,copy) NSString * paymentNetwork;                       //@synthesize paymentNetwork=_paymentNetwork - In the implementation block
@property (nonatomic,copy) NSString * industryCategory;                     //@synthesize industryCategory=_industryCategory - In the implementation block
@property (nonatomic,retain) NSNumber * industryCode;                       //@synthesize industryCode=_industryCode - In the implementation block
@property (nonatomic,retain) NSDate * transactionDate;                      //@synthesize transactionDate=_transactionDate - In the implementation block
@property (nonatomic,retain) CLLocation * transactionLocation;              //@synthesize transactionLocation=_transactionLocation - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSDate *)transactionDate;
-(void)setTransactionDate:(NSDate *)arg1 ;
-(CLLocation *)transactionLocation;
-(void)setTransactionLocation:(CLLocation *)arg1 ;
-(NSNumber *)industryCode;
-(void)setIndustryCode:(NSNumber *)arg1 ;
-(NSString *)paymentNetwork;
-(NSString *)merchantCode;
-(NSString *)rawMerchantCode;
-(NSString *)industryCategory;
-(void)setPaymentNetwork:(NSString *)arg1 ;
-(void)setMerchantCode:(NSString *)arg1 ;
-(void)setRawMerchantCode:(NSString *)arg1 ;
-(void)setIndustryCategory:(NSString *)arg1 ;
@end

