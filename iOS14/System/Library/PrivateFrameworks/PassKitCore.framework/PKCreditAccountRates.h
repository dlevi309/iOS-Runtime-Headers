/*
* Generated on Thursday, January 14, 2021 at 2:21:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <PassKitCore/PassKitCore-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSDecimalNumber;

@interface PKCreditAccountRates : NSObject <NSSecureCoding, NSCopying> {

	NSDecimalNumber* _aprForPurchases;

}

@property (nonatomic,copy) NSDecimalNumber * aprForPurchases;              //@synthesize aprForPurchases=_aprForPurchases - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)formattedAPRForPurchasesPercentageString;
-(NSDecimalNumber *)aprForPurchases;
-(void)setAprForPurchases:(NSDecimalNumber *)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(id)jsonString;
-(id)description;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)jsonDictionaryRepresentation;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

