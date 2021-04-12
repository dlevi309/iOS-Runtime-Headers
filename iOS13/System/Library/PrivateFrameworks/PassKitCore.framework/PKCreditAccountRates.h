/*
* Generated on Monday, March 1, 2021 at 2:31:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(id)jsonDictionaryRepresentation;
-(id)jsonString;
-(id)formattedAPRForPurchasesPercentageString;
-(NSDecimalNumber *)aprForPurchases;
-(void)setAprForPurchases:(NSDecimalNumber *)arg1 ;
@end

