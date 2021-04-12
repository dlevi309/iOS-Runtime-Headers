/*
* Generated on Monday, March 1, 2021 at 2:31:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)currencyCode;
-(NSString *)identifier;
-(void)setIdentifier:(NSString *)arg1 ;
-(void)setCurrencyCode:(NSString *)arg1 ;
-(NSDecimalNumber *)amount;
-(void)setAmount:(NSDecimalNumber *)arg1 ;
-(unsigned long long)actionType;
-(void)setActionType:(unsigned long long)arg1 ;
-(unsigned long long)redemptionType;
-(void)setRedemptionType:(unsigned long long)arg1 ;
@end

