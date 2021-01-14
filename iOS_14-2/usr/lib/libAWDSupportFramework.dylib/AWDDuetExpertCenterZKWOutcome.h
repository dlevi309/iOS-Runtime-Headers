/*
* Generated on Thursday, January 14, 2021 at 2:28:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /usr/lib/libAWDSupportFramework.dylib
*/

#import <libAWDSupportFramework.dylib/libAWDSupportFramework.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface AWDDuetExpertCenterZKWOutcome : PBCodable <NSCopying> {

	unsigned long long _egress;
	unsigned long long _expert;
	unsigned long long _timestamp;
	unsigned _itemsShown;
	BOOL _engaged;
	BOOL _itemSelected;
	BOOL _sameCategorySelected;
	BOOL _typedQuery;
	SCD_Struct_AW12 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;              //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) BOOL hasExpert; 
@property (assign,nonatomic) unsigned long long expert;                 //@synthesize expert=_expert - In the implementation block
@property (assign,nonatomic) BOOL hasEngaged; 
@property (assign,nonatomic) BOOL engaged;                              //@synthesize engaged=_engaged - In the implementation block
@property (assign,nonatomic) BOOL hasItemsShown; 
@property (assign,nonatomic) unsigned itemsShown;                       //@synthesize itemsShown=_itemsShown - In the implementation block
@property (assign,nonatomic) BOOL hasTypedQuery; 
@property (assign,nonatomic) BOOL typedQuery;                           //@synthesize typedQuery=_typedQuery - In the implementation block
@property (assign,nonatomic) BOOL hasItemSelected; 
@property (assign,nonatomic) BOOL itemSelected;                         //@synthesize itemSelected=_itemSelected - In the implementation block
@property (assign,nonatomic) BOOL hasEgress; 
@property (assign,nonatomic) unsigned long long egress;                 //@synthesize egress=_egress - In the implementation block
@property (assign,nonatomic) BOOL hasSameCategorySelected; 
@property (assign,nonatomic) BOOL sameCategorySelected;                 //@synthesize sameCategorySelected=_sameCategorySelected - In the implementation block
-(id)dictionaryRepresentation;
-(BOOL)hasEngaged;
-(unsigned long long)timestamp;
-(void)setEngaged:(BOOL)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(id)description;
-(unsigned long long)expert;
-(unsigned long long)egress;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(unsigned long long)hash;
-(BOOL)engaged;
-(BOOL)hasTimestamp;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setItemSelected:(BOOL)arg1 ;
-(unsigned)itemsShown;
-(BOOL)itemSelected;
-(void)setItemsShown:(unsigned)arg1 ;
-(void)setHasEngaged:(BOOL)arg1 ;
-(void)setExpert:(unsigned long long)arg1 ;
-(void)setHasExpert:(BOOL)arg1 ;
-(BOOL)hasExpert;
-(void)setHasItemsShown:(BOOL)arg1 ;
-(BOOL)hasItemsShown;
-(void)setTypedQuery:(BOOL)arg1 ;
-(void)setHasTypedQuery:(BOOL)arg1 ;
-(BOOL)hasTypedQuery;
-(void)setHasItemSelected:(BOOL)arg1 ;
-(BOOL)hasItemSelected;
-(void)setEgress:(unsigned long long)arg1 ;
-(void)setHasEgress:(BOOL)arg1 ;
-(BOOL)hasEgress;
-(void)setSameCategorySelected:(BOOL)arg1 ;
-(void)setHasSameCategorySelected:(BOOL)arg1 ;
-(BOOL)hasSameCategorySelected;
-(BOOL)typedQuery;
-(BOOL)sameCategorySelected;
@end

