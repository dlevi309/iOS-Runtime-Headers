/*
* Generated on Thursday, January 14, 2021 at 2:23:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
*/

#import <NewsTransport/NewsTransport-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class COMAPPLEFELDSPARPROTOCOLLIVERPOOLConversionStats, NSString;

@interface COMAPPLEFELDSPARPROTOCOLLIVERPOOLTopicConversionStats : PBCodable <NSCopying> {

	COMAPPLEFELDSPARPROTOCOLLIVERPOOLConversionStats* _conversionStats;
	NSString* _tagId;

}

@property (nonatomic,readonly) BOOL hasConversionStats; 
@property (nonatomic,retain) COMAPPLEFELDSPARPROTOCOLLIVERPOOLConversionStats * conversionStats;              //@synthesize conversionStats=_conversionStats - In the implementation block
@property (nonatomic,readonly) BOOL hasTagId; 
@property (nonatomic,retain) NSString * tagId;                                                                //@synthesize tagId=_tagId - In the implementation block
-(id)dictionaryRepresentation;
-(NSString *)tagId;
-(void)mergeFrom:(id)arg1 ;
-(id)description;
-(void)setTagId:(NSString *)arg1 ;
-(BOOL)hasConversionStats;
-(void)setConversionStats:(COMAPPLEFELDSPARPROTOCOLLIVERPOOLConversionStats *)arg1 ;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)hasTagId;
-(void)writeTo:(id)arg1 ;
-(COMAPPLEFELDSPARPROTOCOLLIVERPOOLConversionStats *)conversionStats;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

