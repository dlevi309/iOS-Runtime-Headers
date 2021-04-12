/*
* Generated on Monday, March 1, 2021 at 2:31:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)dealloc;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(NSString *)transactionID;
-(void)setTransactionID:(NSString *)arg1 ;
-(void)setTransactionType:(NSNumber *)arg1 ;
-(NSNumber *)transactionType;
-(NSNumber *)amountType;
-(void)setAmountType:(NSNumber *)arg1 ;
-(NSNumber *)sectorCombination;
-(void)setSectorCombination:(NSNumber *)arg1 ;
@end

