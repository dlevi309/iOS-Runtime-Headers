/*
* Generated on Monday, March 1, 2021 at 2:30:32 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
	SCD_Struct_GE85 _flags;

}

@property (assign,nonatomic) BOOL hasResultsApplied; 
@property (assign,nonatomic) BOOL resultsApplied; 
@property (assign,nonatomic) BOOL hasStatus; 
@property (assign,nonatomic) int status; 
@property (assign,nonatomic) BOOL hasResponseUuid; 
@property (assign,nonatomic) GEOSessionID responseUuid; 
@property (nonatomic,retain) NSMutableArray * routeInfos; 
+(BOOL)isValid:(id)arg1 ;
+(Class)routeInfoType;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(int)status;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setStatus:(int)arg1 ;
-(id)statusAsString:(int)arg1 ;
-(int)StringAsStatus:(id)arg1 ;
-(void)setHasStatus:(BOOL)arg1 ;
-(BOOL)hasStatus;
-(void)readAll:(BOOL)arg1 ;
-(void)addRouteInfo:(id)arg1 ;
-(unsigned long long)routeInfosCount;
-(void)clearRouteInfos;
-(id)routeInfoAtIndex:(unsigned long long)arg1 ;
-(BOOL)resultsApplied;
-(void)setResultsApplied:(BOOL)arg1 ;
-(void)setHasResultsApplied:(BOOL)arg1 ;
-(BOOL)hasResultsApplied;
-(GEOSessionID)responseUuid;
-(void)setResponseUuid:(GEOSessionID)arg1 ;
-(void)setHasResponseUuid:(BOOL)arg1 ;
-(BOOL)hasResponseUuid;
-(NSMutableArray *)routeInfos;
-(void)setRouteInfos:(NSMutableArray *)arg1 ;
@end

