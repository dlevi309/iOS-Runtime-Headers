/*
* Generated on Thursday, January 14, 2021 at 2:25:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
*/


@class NSString;

@interface SKUIGiftValidationResponse : NSObject {

	NSString* _errorString;
	NSString* _giftKey;
	NSString* _totalGiftAmountString;
	BOOL _valid;

}

@property (nonatomic,readonly) NSString * errorString;                        //@synthesize errorString=_errorString - In the implementation block
@property (nonatomic,readonly) NSString * giftKey;                            //@synthesize giftKey=_giftKey - In the implementation block
@property (nonatomic,readonly) NSString * totalGiftAmountString;              //@synthesize totalGiftAmountString=_totalGiftAmountString - In the implementation block
@property (getter=isValid,nonatomic,readonly) BOOL valid;                     //@synthesize valid=_valid - In the implementation block
-(BOOL)isValid;
-(NSString *)giftKey;
-(NSString *)totalGiftAmountString;
-(NSString *)errorString;
-(id)initWithValidationDictionary:(id)arg1 ;
@end

