/*
* Generated on Monday, March 1, 2021 at 2:31:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(NSString *)totalGiftAmountString;
-(NSString *)errorString;
-(id)initWithValidationDictionary:(id)arg1 ;
-(NSString *)giftKey;
@end

