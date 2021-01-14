/*
* Generated on Thursday, January 14, 2021 at 2:21:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDecimalNumber, NSArray, NSString, NSDictionary;

@interface PKEnteredValueActionItem : NSObject <NSSecureCoding> {

	BOOL _maxAmountIncludesLocalBalance;
	NSDecimalNumber* _minLoadAmount;
	NSDecimalNumber* _maxLoadAmount;
	NSDecimalNumber* _minLoadedBalance;
	NSDecimalNumber* _maxLoadedBalance;
	NSArray* _defaultSuggestions;
	NSArray* _lowBalanceReminderOptions;
	NSString* _currency;
	NSDictionary* _serviceProviderData;

}

@property (nonatomic,copy,readonly) NSDecimalNumber * minLoadAmount;                  //@synthesize minLoadAmount=_minLoadAmount - In the implementation block
@property (nonatomic,copy,readonly) NSDecimalNumber * maxLoadAmount;                  //@synthesize maxLoadAmount=_maxLoadAmount - In the implementation block
@property (nonatomic,copy,readonly) NSDecimalNumber * minLoadedBalance;               //@synthesize minLoadedBalance=_minLoadedBalance - In the implementation block
@property (nonatomic,copy,readonly) NSDecimalNumber * maxLoadedBalance;               //@synthesize maxLoadedBalance=_maxLoadedBalance - In the implementation block
@property (nonatomic,copy,readonly) NSArray * defaultSuggestions;                     //@synthesize defaultSuggestions=_defaultSuggestions - In the implementation block
@property (nonatomic,copy,readonly) NSArray * lowBalanceReminderOptions;              //@synthesize lowBalanceReminderOptions=_lowBalanceReminderOptions - In the implementation block
@property (nonatomic,readonly) BOOL maxAmountIncludesLocalBalance;                    //@synthesize maxAmountIncludesLocalBalance=_maxAmountIncludesLocalBalance - In the implementation block
@property (nonatomic,copy,readonly) NSString * currency;                              //@synthesize currency=_currency - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * serviceProviderData;               //@synthesize serviceProviderData=_serviceProviderData - In the implementation block
@property (nonatomic,copy,readonly) NSDecimalNumber * minAmount; 
@property (nonatomic,copy,readonly) NSDecimalNumber * maxAmount; 
+(BOOL)supportsSecureCoding;
-(NSDecimalNumber *)minLoadAmount;
-(NSDecimalNumber *)maxLoadAmount;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)currency;
-(id)initWithDictionary:(id)arg1 ;
-(NSDecimalNumber *)minAmount;
-(NSDecimalNumber *)maxAmount;
-(id)initWithCoder:(id)arg1 ;
-(NSDictionary *)serviceProviderData;
-(void)_processLocalizableStrings:(/*^block*/id)arg1 ;
-(NSDecimalNumber *)minLoadedBalance;
-(NSDecimalNumber *)maxLoadedBalance;
-(NSArray *)lowBalanceReminderOptions;
-(BOOL)maxAmountIncludesLocalBalance;
-(NSArray *)defaultSuggestions;
@end

