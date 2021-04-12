/*
* Generated on Thursday, January 14, 2021 at 2:23:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
*/

#import <NewsTransport/NewsTransport-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface COMAPPLEFELDSPARPROTOCOLANALYTICSEVENTSPurchaseOffersItem : PBCodable <NSCopying> {

	NSString* _purchaseId;
	int _purchaseType;
	SCD_Struct_NT3 _has;

}

@property (nonatomic,readonly) BOOL hasPurchaseId; 
@property (nonatomic,retain) NSString * purchaseId;              //@synthesize purchaseId=_purchaseId - In the implementation block
@property (assign,nonatomic) BOOL hasPurchaseType; 
@property (assign,nonatomic) int purchaseType;                   //@synthesize purchaseType=_purchaseType - In the implementation block
-(id)dictionaryRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)hasPurchaseId;
-(id)description;
-(int)purchaseType;
-(void)setPurchaseType:(int)arg1 ;
-(void)setPurchaseId:(NSString *)arg1 ;
-(unsigned long long)hash;
-(void)setHasPurchaseType:(BOOL)arg1 ;
-(BOOL)hasPurchaseType;
-(id)purchaseTypeAsString:(int)arg1 ;
-(int)StringAsPurchaseType:(id)arg1 ;
-(NSString *)purchaseId;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

