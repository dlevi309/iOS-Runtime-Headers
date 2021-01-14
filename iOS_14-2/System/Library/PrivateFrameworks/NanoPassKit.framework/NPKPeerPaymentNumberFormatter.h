/*
* Generated on Thursday, January 14, 2021 at 2:28:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
*/


@class NSNumberFormatter, NSString;

@interface NPKPeerPaymentNumberFormatter : NSObject {

	NSNumberFormatter* _decimalNumberFormatter;
	NSNumberFormatter* _nonDecimalNumberFormatter;
	NSString* _currencyCode;

}

@property (nonatomic,copy) NSString * currencyCode;              //@synthesize currencyCode=_currencyCode - In the implementation block
-(NSString *)currencyCode;
-(id)currencySymbol;
-(id)init;
-(id)stringFromNumber:(id)arg1 ;
-(void)setCurrencyCode:(NSString *)arg1 ;
-(id)initWithCurrencyCode:(id)arg1 ;
@end

