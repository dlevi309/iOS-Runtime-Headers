/*
* Generated on Monday, March 1, 2021 at 2:31:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <PassKitCore/PassKitCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class PKCurrencyAmount;

@interface PKTransactionAmount : NSObject <NSCopying, NSSecureCoding> {

	PKCurrencyAmount* _amount;

}

@property (nonatomic,retain) PKCurrencyAmount * amount;              //@synthesize amount=_amount - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)dictionaryRepresentation;
-(PKCurrencyAmount *)amount;
-(void)setAmount:(PKCurrencyAmount *)arg1 ;
-(id)initWithTransitAppletAmount:(id)arg1 ;
-(id)initWithCurrencyAmount:(id)arg1 ;
@end

