/*
* Generated on Thursday, January 14, 2021 at 2:21:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray;

@interface GEOETAServiceResponseSummary : PBCodable <NSCopying> {

	GEOSessionID _responseUuid;
	NSMutableArray* _routeInfos;
	int _status;
	BOOL _resultsApplied;
	SCD_Struct_GE37 _flags;

}

@property (assign,nonatomic) BOOL hasResultsApplied; 
@property (assign,nonatomic) BOOL resultsApplied; 
@property (assign,nonatomic) BOOL hasStatus; 
@property (assign,nonatomic) int status; 
@property (assign,nonatomic) BOOL hasResponseUuid; 
@property (assign,nonatomic) GEOSessionID responseUuid; 
@property (nonatomic,retain) NSMutableArray * routeInfos; 
+(Class)routeInfoType;
+(BOOL)isValid:(id)arg1 ;
-(id)dictionaryRepresentation;
-(void)setHasStatus:(BOOL)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(id)jsonRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(NSMutableArray *)routeInfos;
-(id)statusAsString:(int)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(void)setResultsApplied:(BOOL)arg1 ;
-(void)setResponseUuid:(GEOSessionID)arg1 ;
-(void)addRouteInfo:(id)arg1 ;
-(unsigned long long)routeInfosCount;
-(void)clearRouteInfos;
-(id)routeInfoAtIndex:(unsigned long long)arg1 ;
-(GEOSessionID)responseUuid;
-(BOOL)resultsApplied;
-(void)setHasResultsApplied:(BOOL)arg1 ;
-(BOOL)hasResultsApplied;
-(void)setHasResponseUuid:(BOOL)arg1 ;
-(BOOL)hasResponseUuid;
-(void)setRouteInfos:(NSMutableArray *)arg1 ;
-(BOOL)hasStatus;
-(int)StringAsStatus:(id)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)setStatus:(int)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(int)status;
@end

