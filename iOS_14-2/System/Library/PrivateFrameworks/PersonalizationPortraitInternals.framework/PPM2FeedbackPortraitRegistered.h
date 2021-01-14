/*
* Generated on Thursday, January 14, 2021 at 2:25:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PersonalizationPortraitInternals.framework/PersonalizationPortraitInternals
*/

#import <PersonalizationPortraitInternals/PersonalizationPortraitInternals-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSMutableArray;

@interface PPM2FeedbackPortraitRegistered : PBCodable <NSCopying> {

	NSString* _activeTreatments;
	NSString* _clientId;
	int _domain;
	int _feedbackDomainStatus;
	NSString* _mappingId;
	NSMutableArray* _records;
	int _type;
	SCD_Struct_PP4 _has;

}

@property (nonatomic,readonly) BOOL hasClientId; 
@property (nonatomic,retain) NSString * clientId;                       //@synthesize clientId=_clientId - In the implementation block
@property (assign,nonatomic) BOOL hasDomain; 
@property (assign,nonatomic) int domain;                                //@synthesize domain=_domain - In the implementation block
@property (assign,nonatomic) BOOL hasType; 
@property (assign,nonatomic) int type;                                  //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) BOOL hasMappingId; 
@property (nonatomic,retain) NSString * mappingId;                      //@synthesize mappingId=_mappingId - In the implementation block
@property (nonatomic,retain) NSMutableArray * records;                  //@synthesize records=_records - In the implementation block
@property (nonatomic,readonly) BOOL hasActiveTreatments; 
@property (nonatomic,retain) NSString * activeTreatments;               //@synthesize activeTreatments=_activeTreatments - In the implementation block
@property (assign,nonatomic) BOOL hasFeedbackDomainStatus; 
@property (assign,nonatomic) int feedbackDomainStatus;                  //@synthesize feedbackDomainStatus=_feedbackDomainStatus - In the implementation block
+(Class)recordsType;
-(id)dictionaryRepresentation;
-(void)addRecords:(id)arg1 ;
-(NSString *)activeTreatments;
-(void)setActiveTreatments:(NSString *)arg1 ;
-(id)domainAsString:(int)arg1 ;
-(void)setClientId:(NSString *)arg1 ;
-(id)recordsAtIndex:(unsigned long long)arg1 ;
-(void)setRecords:(NSMutableArray *)arg1 ;
-(BOOL)hasActiveTreatments;
-(id)typeAsString:(int)arg1 ;
-(void)setHasType:(BOOL)arg1 ;
-(void)clearRecords;
-(int)StringAsType:(id)arg1 ;
-(NSMutableArray *)records;
-(unsigned long long)recordsCount;
-(BOOL)hasType;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)hasClientId;
-(NSString *)mappingId;
-(void)setDomain:(int)arg1 ;
-(void)setType:(int)arg1 ;
-(int)domain;
-(id)description;
-(void)setHasFeedbackDomainStatus:(BOOL)arg1 ;
-(BOOL)hasDomain;
-(BOOL)hasFeedbackDomainStatus;
-(NSString *)clientId;
-(int)type;
-(void)setMappingId:(NSString *)arg1 ;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(int)StringAsFeedbackDomainStatus:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)hasMappingId;
-(void)writeTo:(id)arg1 ;
-(void)setHasDomain:(BOOL)arg1 ;
-(int)StringAsDomain:(id)arg1 ;
-(void)setFeedbackDomainStatus:(int)arg1 ;
-(id)feedbackDomainStatusAsString:(int)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(int)feedbackDomainStatus;
-(BOOL)isEqual:(id)arg1 ;
@end

