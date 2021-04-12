/*
* Generated on Monday, March 1, 2021 at 2:32:43 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
*/

#import <NewsTransport/NewsTransport-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class COMAPPLEFELDSPARPROTOCOLLIVERPOOLCohortList, NSString;

@interface NTPBArticleTopic : PBCodable <NSCopying> {

	COMAPPLEFELDSPARPROTOCOLLIVERPOOLCohortList* _cohorts;
	NSString* _tagID;
	BOOL _isEligibleForGrouping;
	BOOL _isEligibleForGroupingIfFavorited;
	BOOL _isHidden;
	SCD_Struct_NT4 _has;

}

@property (nonatomic,readonly) BOOL hasTagID; 
@property (nonatomic,retain) NSString * tagID;                                                   //@synthesize tagID=_tagID - In the implementation block
@property (nonatomic,readonly) BOOL hasCohorts; 
@property (nonatomic,retain) COMAPPLEFELDSPARPROTOCOLLIVERPOOLCohortList * cohorts;              //@synthesize cohorts=_cohorts - In the implementation block
@property (assign,nonatomic) BOOL hasIsHidden; 
@property (assign,nonatomic) BOOL isHidden;                                                      //@synthesize isHidden=_isHidden - In the implementation block
@property (assign,nonatomic) BOOL hasIsEligibleForGrouping; 
@property (assign,nonatomic) BOOL isEligibleForGrouping;                                         //@synthesize isEligibleForGrouping=_isEligibleForGrouping - In the implementation block
@property (assign,nonatomic) BOOL hasIsEligibleForGroupingIfFavorited; 
@property (assign,nonatomic) BOOL isEligibleForGroupingIfFavorited;                              //@synthesize isEligibleForGroupingIfFavorited=_isEligibleForGroupingIfFavorited - In the implementation block
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)isHidden;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)setIsHidden:(BOOL)arg1 ;
-(NSString *)tagID;
-(BOOL)isEligibleForGrouping;
-(void)setIsEligibleForGrouping:(BOOL)arg1 ;
-(BOOL)isEligibleForGroupingIfFavorited;
-(void)setIsEligibleForGroupingIfFavorited:(BOOL)arg1 ;
-(void)setTagID:(NSString *)arg1 ;
-(void)setCohorts:(COMAPPLEFELDSPARPROTOCOLLIVERPOOLCohortList *)arg1 ;
-(COMAPPLEFELDSPARPROTOCOLLIVERPOOLCohortList *)cohorts;
-(BOOL)hasTagID;
-(BOOL)hasCohorts;
-(void)setHasIsHidden:(BOOL)arg1 ;
-(BOOL)hasIsHidden;
-(void)setHasIsEligibleForGrouping:(BOOL)arg1 ;
-(BOOL)hasIsEligibleForGrouping;
-(void)setHasIsEligibleForGroupingIfFavorited:(BOOL)arg1 ;
-(BOOL)hasIsEligibleForGroupingIfFavorited;
@end

