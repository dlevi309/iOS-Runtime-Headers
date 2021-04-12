/*
* Generated on Monday, March 1, 2021 at 2:35:46 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
*/


@class NSNumberFormatter, NSString;

@interface NPKPeerPaymentNumberFormatter : NSObject {

	NSNumberFormatter* _decimalNumberFormatter;
	NSNumberFormatter* _nonDecimalNumberFormatter;
	NSString* _currencyCode;

}

@property (nonatomic,copy) NSString * currencyCode;              //@synthesize currencyCode=_currencyCode - In the implementation block
-(id)init;
-(id)currencySymbol;
-(NSString *)currencyCode;
-(id)stringFromNumber:(id)arg1 ;
-(void)setCurrencyCode:(NSString *)arg1 ;
-(id)initWithCurrencyCode:(id)arg1 ;
@end

