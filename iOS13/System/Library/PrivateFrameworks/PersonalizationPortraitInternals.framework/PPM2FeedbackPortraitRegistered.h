/*
* Generated on Monday, March 1, 2021 at 2:33:47 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PersonalizationPortraitInternals.framework/PersonalizationPortraitInternals
*/

#import <PersonalizationPortraitInternals/PersonalizationPortraitInternals-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSMutableArray;

@interface PPM2FeedbackPortraitRegistered : PBCodable <NSCopying> {

	NSString* _clientId;
	int _domain;
	NSString* _mappingId;
	NSMutableArray* _records;
	int _type;
	NSString* _variantId;
	BOOL _fromPortrait;
	SCD_Struct_PP3 _has;

}

@property (nonatomic,readonly) BOOL hasClientId; 
@property (nonatomic,retain) NSString * clientId;                   //@synthesize clientId=_clientId - In the implementation block
@property (nonatomic,readonly) BOOL hasVariantId; 
@property (nonatomic,retain) NSString * variantId;                  //@synthesize variantId=_variantId - In the implementation block
@property (assign,nonatomic) BOOL hasDomain; 
@property (assign,nonatomic) int domain;                            //@synthesize domain=_domain - In the implementation block
@property (assign,nonatomic) BOOL hasType; 
@property (assign,nonatomic) int type;                              //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) BOOL hasMappingId; 
@property (nonatomic,retain) NSString * mappingId;                  //@synthesize mappingId=_mappingId - In the implementation block
@property (assign,nonatomic) BOOL hasFromPortrait; 
@property (assign,nonatomic) BOOL fromPortrait;                     //@synthesize fromPortrait=_fromPortrait - In the implementation block
@property (nonatomic,retain) NSMutableArray * records;              //@synthesize records=_records - In the implementation block
+(Class)recordsType;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(int)domain;
-(int)type;
-(void)setType:(int)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(id)typeAsString:(int)arg1 ;
-(int)StringAsType:(id)arg1 ;
-(void)setDomain:(int)arg1 ;
-(NSString *)clientId;
-(BOOL)hasDomain;
-(NSMutableArray *)records;
-(void)setHasType:(BOOL)arg1 ;
-(BOOL)hasType;
-(BOOL)hasClientId;
-(void)setClientId:(NSString *)arg1 ;
-(void)setRecords:(NSMutableArray *)arg1 ;
-(id)domainAsString:(int)arg1 ;
-(int)StringAsDomain:(id)arg1 ;
-(NSString *)mappingId;
-(void)addRecords:(id)arg1 ;
-(unsigned long long)recordsCount;
-(void)clearRecords;
-(id)recordsAtIndex:(unsigned long long)arg1 ;
-(void)setHasDomain:(BOOL)arg1 ;
-(BOOL)hasVariantId;
-(BOOL)hasMappingId;
-(void)setFromPortrait:(BOOL)arg1 ;
-(void)setHasFromPortrait:(BOOL)arg1 ;
-(BOOL)hasFromPortrait;
-(NSString *)variantId;
-(void)setVariantId:(NSString *)arg1 ;
-(void)setMappingId:(NSString *)arg1 ;
-(BOOL)fromPortrait;
@end

