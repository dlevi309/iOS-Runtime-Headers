/*
* Generated on Thursday, January 14, 2021 at 2:21:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSDecimalNumber;

@interface PKAccountAction : NSObject <NSSecureCoding> {

	unsigned long long _actionType;
	NSString* _identifier;
	NSDecimalNumber* _amount;
	NSString* _currencyCode;
	unsigned long long _redemptionType;

}

@property (assign,nonatomic) unsigned long long actionType;                  //@synthesize actionType=_actionType - In the implementation block
@property (nonatomic,retain) NSString * identifier;                          //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,retain) NSDecimalNumber * amount;                       //@synthesize amount=_amount - In the implementation block
@property (nonatomic,retain) NSString * currencyCode;                        //@synthesize currencyCode=_currencyCode - In the implementation block
@property (assign,nonatomic) unsigned long long redemptionType;              //@synthesize redemptionType=_redemptionType - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSString *)currencyCode;
-(void)setActionType:(unsigned long long)arg1 ;
-(unsigned long long)actionType;
-(void)encodeWithCoder:(id)arg1 ;
-(unsigned long long)redemptionType;
-(void)setCurrencyCode:(NSString *)arg1 ;
-(void)setAmount:(NSDecimalNumber *)arg1 ;
-(void)setRedemptionType:(unsigned long long)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSDecimalNumber *)amount;
-(void)setIdentifier:(NSString *)arg1 ;
-(NSString *)identifier;
@end

