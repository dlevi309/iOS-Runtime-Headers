/*
* Generated on Thursday, January 14, 2021 at 2:21:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <PassKitCore/PassKitCore-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray, NSString;

@interface PKProtobufPaymentClientUpdate : PBCodable <NSCopying> {

	NSMutableArray* _paymentSummaryItems;
	NSString* _remotePaymentRequestIdentifier;
	NSString* _selectedAID;
	NSMutableArray* _shippingMethods;
	unsigned _status;
	SCD_Struct_PK13 _has;

}

@property (nonatomic,readonly) BOOL hasRemotePaymentRequestIdentifier; 
@property (nonatomic,retain) NSString * remotePaymentRequestIdentifier;              //@synthesize remotePaymentRequestIdentifier=_remotePaymentRequestIdentifier - In the implementation block
@property (assign,nonatomic) BOOL hasStatus; 
@property (assign,nonatomic) unsigned status;                                        //@synthesize status=_status - In the implementation block
@property (nonatomic,retain) NSMutableArray * paymentSummaryItems;                   //@synthesize paymentSummaryItems=_paymentSummaryItems - In the implementation block
@property (nonatomic,retain) NSMutableArray * shippingMethods;                       //@synthesize shippingMethods=_shippingMethods - In the implementation block
@property (nonatomic,readonly) BOOL hasSelectedAID; 
@property (nonatomic,retain) NSString * selectedAID;                                 //@synthesize selectedAID=_selectedAID - In the implementation block
+(Class)paymentSummaryItemsType;
+(Class)shippingMethodsType;
-(id)dictionaryRepresentation;
-(void)setHasStatus:(BOOL)arg1 ;
-(void)setRemotePaymentRequestIdentifier:(NSString *)arg1 ;
-(BOOL)hasRemotePaymentRequestIdentifier;
-(NSString *)remotePaymentRequestIdentifier;
-(void)setShippingMethods:(NSMutableArray *)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)hasStatus;
-(id)description;
-(unsigned long long)paymentSummaryItemsCount;
-(void)clearPaymentSummaryItems;
-(id)paymentSummaryItemsAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)shippingMethodsCount;
-(void)clearShippingMethods;
-(id)shippingMethodsAtIndex:(unsigned long long)arg1 ;
-(BOOL)hasSelectedAID;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)setPaymentSummaryItems:(NSMutableArray *)arg1 ;
-(void)setStatus:(unsigned)arg1 ;
-(NSString *)selectedAID;
-(void)addShippingMethods:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)addPaymentSummaryItems:(id)arg1 ;
-(void)setSelectedAID:(NSString *)arg1 ;
-(void)writeTo:(id)arg1 ;
-(NSMutableArray *)paymentSummaryItems;
-(NSMutableArray *)shippingMethods;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned)status;
@end

