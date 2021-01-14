/*
* Generated on Thursday, January 14, 2021 at 2:23:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
*/

#import <NewsTransport/NewsTransport-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class COMAPPLEFELDSPARPROTOCOLLIVERPOOLCohortList, NSString;

@interface COMAPPLEFELDSPARPROTOCOLLIVERPOOLTopicCohortScore : PBCodable <NSCopying> {

	COMAPPLEFELDSPARPROTOCOLLIVERPOOLCohortList* _cohorts;
	NSString* _tagId;

}

@property (nonatomic,readonly) BOOL hasTagId; 
@property (nonatomic,retain) NSString * tagId;                                                   //@synthesize tagId=_tagId - In the implementation block
@property (nonatomic,readonly) BOOL hasCohorts; 
@property (nonatomic,retain) COMAPPLEFELDSPARPROTOCOLLIVERPOOLCohortList * cohorts;              //@synthesize cohorts=_cohorts - In the implementation block
-(id)dictionaryRepresentation;
-(NSString *)tagId;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)hasCohorts;
-(void)setCohorts:(COMAPPLEFELDSPARPROTOCOLLIVERPOOLCohortList *)arg1 ;
-(id)description;
-(void)setTagId:(NSString *)arg1 ;
-(COMAPPLEFELDSPARPROTOCOLLIVERPOOLCohortList *)cohorts;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)hasTagId;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

