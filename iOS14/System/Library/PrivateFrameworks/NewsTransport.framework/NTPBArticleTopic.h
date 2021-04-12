/*
* Generated on Thursday, January 14, 2021 at 2:23:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
*/

#import <NewsTransport/NewsTransport-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class COMAPPLEFELDSPARPROTOCOLLIVERPOOLCohortList, COMAPPLEFELDSPARPROTOCOLLIVERPOOLConversionStats, NSString;

@interface NTPBArticleTopic : PBCodable <NSCopying> {

	COMAPPLEFELDSPARPROTOCOLLIVERPOOLCohortList* _cohorts;
	COMAPPLEFELDSPARPROTOCOLLIVERPOOLConversionStats* _conversionStats;
	NSString* _tagID;
	BOOL _isEligibleForGrouping;
	BOOL _isEligibleForGroupingIfFavorited;
	BOOL _isHidden;
	SCD_Struct_NT5 _has;

}

@property (nonatomic,readonly) BOOL hasTagID; 
@property (nonatomic,retain) NSString * tagID;                                                                //@synthesize tagID=_tagID - In the implementation block
@property (nonatomic,readonly) BOOL hasCohorts; 
@property (nonatomic,retain) COMAPPLEFELDSPARPROTOCOLLIVERPOOLCohortList * cohorts;                           //@synthesize cohorts=_cohorts - In the implementation block
@property (assign,nonatomic) BOOL hasIsHidden; 
@property (assign,nonatomic) BOOL isHidden;                                                                   //@synthesize isHidden=_isHidden - In the implementation block
@property (assign,nonatomic) BOOL hasIsEligibleForGrouping; 
@property (assign,nonatomic) BOOL isEligibleForGrouping;                                                      //@synthesize isEligibleForGrouping=_isEligibleForGrouping - In the implementation block
@property (assign,nonatomic) BOOL hasIsEligibleForGroupingIfFavorited; 
@property (assign,nonatomic) BOOL isEligibleForGroupingIfFavorited;                                           //@synthesize isEligibleForGroupingIfFavorited=_isEligibleForGroupingIfFavorited - In the implementation block
@property (nonatomic,readonly) BOOL hasConversionStats; 
@property (nonatomic,retain) COMAPPLEFELDSPARPROTOCOLLIVERPOOLConversionStats * conversionStats;              //@synthesize conversionStats=_conversionStats - In the implementation block
-(id)dictionaryRepresentation;
-(NSString *)tagID;
-(BOOL)isHidden;
-(BOOL)isEligibleForGrouping;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)hasCohorts;
-(BOOL)hasTagID;
-(BOOL)hasIsEligibleForGrouping;
-(void)setCohorts:(COMAPPLEFELDSPARPROTOCOLLIVERPOOLCohortList *)arg1 ;
-(id)description;
-(void)setHasIsEligibleForGrouping:(BOOL)arg1 ;
-(COMAPPLEFELDSPARPROTOCOLLIVERPOOLCohortList *)cohorts;
-(BOOL)hasConversionStats;
-(void)setConversionStats:(COMAPPLEFELDSPARPROTOCOLLIVERPOOLConversionStats *)arg1 ;
-(unsigned long long)hash;
-(void)setHasIsEligibleForGroupingIfFavorited:(BOOL)arg1 ;
-(void)setIsEligibleForGroupingIfFavorited:(BOOL)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(BOOL)isEligibleForGroupingIfFavorited;
-(void)setIsEligibleForGrouping:(BOOL)arg1 ;
-(COMAPPLEFELDSPARPROTOCOLLIVERPOOLConversionStats *)conversionStats;
-(void)setHasIsHidden:(BOOL)arg1 ;
-(void)setTagID:(NSString *)arg1 ;
-(void)setIsHidden:(BOOL)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)hasIsEligibleForGroupingIfFavorited;
-(void)dealloc;
-(BOOL)hasIsHidden;
@end

