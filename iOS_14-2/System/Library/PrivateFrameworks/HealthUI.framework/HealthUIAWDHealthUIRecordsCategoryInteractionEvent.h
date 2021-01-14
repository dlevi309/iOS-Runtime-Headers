/*
* Generated on Thursday, January 14, 2021 at 2:24:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
*/

#import <HealthUI/HealthUI-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface HealthUIAWDHealthUIRecordsCategoryInteractionEvent : PBCodable <NSCopying> {

	unsigned long long _timestamp;
	int _categoryID;
	int _type;
	SCD_Struct_He16 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;              //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) BOOL hasCategoryID; 
@property (assign,nonatomic) int categoryID;                            //@synthesize categoryID=_categoryID - In the implementation block
@property (assign,nonatomic) BOOL hasType; 
@property (assign,nonatomic) int type;                                  //@synthesize type=_type - In the implementation block
-(id)dictionaryRepresentation;
-(id)typeAsString:(int)arg1 ;
-(void)setHasType:(BOOL)arg1 ;
-(int)StringAsType:(id)arg1 ;
-(unsigned long long)timestamp;
-(BOOL)hasType;
-(void)mergeFrom:(id)arg1 ;
-(void)setType:(int)arg1 ;
-(id)description;
-(void)setCategoryID:(int)arg1 ;
-(int)categoryID;
-(int)type;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(unsigned long long)hash;
-(BOOL)hasTimestamp;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setHasCategoryID:(BOOL)arg1 ;
-(BOOL)hasCategoryID;
-(id)categoryIDAsString:(int)arg1 ;
-(int)StringAsCategoryID:(id)arg1 ;
@end

