/*
* Generated on Thursday, January 14, 2021 at 2:21:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/

#import <NewsCore/NewsCore-Structs.h>
#import <ProtocolBuffer/PBRequest.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData, FCCKPQuery, FCCKPRequestedFields, FCCKPRecordZoneIdentifier;

@interface FCCKPQueryRetrieveRequest : PBRequest <NSCopying> {

	NSData* _continuationMarker;
	unsigned _limit;
	FCCKPQuery* _query;
	FCCKPRequestedFields* _requestedFields;
	FCCKPRecordZoneIdentifier* _zoneIdentifier;
	SCD_Struct_FC4 _has;

}

@property (nonatomic,readonly) BOOL hasQuery; 
@property (nonatomic,retain) FCCKPQuery * query;                                      //@synthesize query=_query - In the implementation block
@property (nonatomic,readonly) BOOL hasContinuationMarker; 
@property (nonatomic,retain) NSData * continuationMarker;                             //@synthesize continuationMarker=_continuationMarker - In the implementation block
@property (assign,nonatomic) BOOL hasLimit; 
@property (assign,nonatomic) unsigned limit;                                          //@synthesize limit=_limit - In the implementation block
@property (nonatomic,readonly) BOOL hasZoneIdentifier; 
@property (nonatomic,retain) FCCKPRecordZoneIdentifier * zoneIdentifier;              //@synthesize zoneIdentifier=_zoneIdentifier - In the implementation block
@property (nonatomic,readonly) BOOL hasRequestedFields; 
@property (nonatomic,retain) FCCKPRequestedFields * requestedFields;                  //@synthesize requestedFields=_requestedFields - In the implementation block
+(id)options;
-(void)setLimit:(unsigned)arg1 ;
-(id)dictionaryRepresentation;
-(FCCKPQuery *)query;
-(FCCKPRecordZoneIdentifier *)zoneIdentifier;
-(Class)responseClass;
-(void)setZoneIdentifier:(FCCKPRecordZoneIdentifier *)arg1 ;
-(unsigned)limit;
-(BOOL)hasZoneIdentifier;
-(BOOL)hasLimit;
-(BOOL)hasContinuationMarker;
-(void)setHasLimit:(BOOL)arg1 ;
-(unsigned)requestTypeCode;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)hasQuery;
-(id)description;
-(BOOL)hasRequestedFields;
-(NSData *)continuationMarker;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)setQuery:(FCCKPQuery *)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setContinuationMarker:(NSData *)arg1 ;
-(void)setRequestedFields:(FCCKPRequestedFields *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(FCCKPRequestedFields *)requestedFields;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
@end

