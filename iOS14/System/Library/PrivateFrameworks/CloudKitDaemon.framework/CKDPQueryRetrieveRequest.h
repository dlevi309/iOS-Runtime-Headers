/*
* Generated on Thursday, January 14, 2021 at 2:26:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
*/

#import <CloudKitDaemon/CloudKitDaemon-Structs.h>
#import <ProtocolBuffer/PBRequest.h>
#import <libobjc.A.dylib/NSCopying.h>

@class CKDPAssetsToDownload, NSData, CKDPQuery, CKDPRequestedFields, CKDPRecordZoneIdentifier;

@interface CKDPQueryRetrieveRequest : PBRequest <NSCopying> {

	CKDPAssetsToDownload* _assetsToDownload;
	NSData* _continuationMarker;
	unsigned _limit;
	CKDPQuery* _query;
	CKDPRequestedFields* _requestedFields;
	CKDPRecordZoneIdentifier* _zoneIdentifier;
	SCD_Struct_CK1 _has;

}

@property (nonatomic,readonly) BOOL hasQuery; 
@property (nonatomic,retain) CKDPQuery * query;                                      //@synthesize query=_query - In the implementation block
@property (nonatomic,readonly) BOOL hasContinuationMarker; 
@property (nonatomic,retain) NSData * continuationMarker;                            //@synthesize continuationMarker=_continuationMarker - In the implementation block
@property (assign,nonatomic) BOOL hasLimit; 
@property (assign,nonatomic) unsigned limit;                                         //@synthesize limit=_limit - In the implementation block
@property (nonatomic,readonly) BOOL hasZoneIdentifier; 
@property (nonatomic,retain) CKDPRecordZoneIdentifier * zoneIdentifier;              //@synthesize zoneIdentifier=_zoneIdentifier - In the implementation block
@property (nonatomic,readonly) BOOL hasRequestedFields; 
@property (nonatomic,retain) CKDPRequestedFields * requestedFields;                  //@synthesize requestedFields=_requestedFields - In the implementation block
@property (nonatomic,readonly) BOOL hasAssetsToDownload; 
@property (nonatomic,retain) CKDPAssetsToDownload * assetsToDownload;                //@synthesize assetsToDownload=_assetsToDownload - In the implementation block
+(id)options;
-(void)setLimit:(unsigned)arg1 ;
-(id)dictionaryRepresentation;
-(CKDPQuery *)query;
-(CKDPRecordZoneIdentifier *)zoneIdentifier;
-(Class)responseClass;
-(void)setZoneIdentifier:(CKDPRecordZoneIdentifier *)arg1 ;
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
-(void)setQuery:(CKDPQuery *)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setContinuationMarker:(NSData *)arg1 ;
-(void)setRequestedFields:(CKDPRequestedFields *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(CKDPRequestedFields *)requestedFields;
-(BOOL)isEqual:(id)arg1 ;
-(void)setAssetsToDownload:(CKDPAssetsToDownload *)arg1 ;
-(BOOL)hasAssetsToDownload;
-(CKDPAssetsToDownload *)assetsToDownload;
@end

