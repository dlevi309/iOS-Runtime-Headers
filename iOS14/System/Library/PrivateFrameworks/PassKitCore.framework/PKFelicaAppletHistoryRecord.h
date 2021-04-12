/*
* Generated on Thursday, January 14, 2021 at 2:21:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <PassKitCore/PassKitCore-Structs.h>
#import <PassKitCore/PKTransitAppletHistoryRecord.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSNumber, NSString;

@interface PKFelicaAppletHistoryRecord : PKTransitAppletHistoryRecord <NSCopying> {

	NSNumber* _transactionType;
	NSNumber* _sectorCombination;
	NSNumber* _amountType;
	NSString* _transactionID;

}

@property (nonatomic,copy) NSString * transactionID;                  //@synthesize transactionID=_transactionID - In the implementation block
@property (nonatomic,copy) NSNumber * transactionType;                //@synthesize transactionType=_transactionType - In the implementation block
@property (nonatomic,copy) NSNumber * sectorCombination;              //@synthesize sectorCombination=_sectorCombination - In the implementation block
@property (nonatomic,copy) NSNumber * amountType;                     //@synthesize amountType=_amountType - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)init;
-(NSNumber *)amountType;
-(void)setTransactionType:(NSNumber *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setTransactionID:(NSString *)arg1 ;
-(void)setAmountType:(NSNumber *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)transactionID;
-(void)setSectorCombination:(NSNumber *)arg1 ;
-(NSNumber *)transactionType;
-(NSNumber *)sectorCombination;
-(void)dealloc;
@end

