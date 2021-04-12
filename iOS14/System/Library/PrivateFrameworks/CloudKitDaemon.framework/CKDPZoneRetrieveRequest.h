/*
* Generated on Thursday, January 14, 2021 at 2:26:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
*/

#import <CloudKitDaemon/CloudKitDaemon-Structs.h>
#import <ProtocolBuffer/PBRequest.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData, CKDPRecordZoneIdentifier;

@interface CKDPZoneRetrieveRequest : PBRequest <NSCopying> {

	NSData* _continuationMarker;
	CKDPRecordZoneIdentifier* _zoneIdentifier;
	BOOL _onlyFetchPCSInfo;
	SCD_Struct_CK1 _has;

}

@property (nonatomic,readonly) BOOL hasZoneIdentifier; 
@property (nonatomic,retain) CKDPRecordZoneIdentifier * zoneIdentifier;              //@synthesize zoneIdentifier=_zoneIdentifier - In the implementation block
@property (assign,nonatomic) BOOL hasOnlyFetchPCSInfo; 
@property (assign,nonatomic) BOOL onlyFetchPCSInfo;                                  //@synthesize onlyFetchPCSInfo=_onlyFetchPCSInfo - In the implementation block
@property (nonatomic,readonly) BOOL hasContinuationMarker; 
@property (nonatomic,retain) NSData * continuationMarker;                            //@synthesize continuationMarker=_continuationMarker - In the implementation block
+(id)options;
-(id)dictionaryRepresentation;
-(void)setOnlyFetchPCSInfo:(BOOL)arg1 ;
-(CKDPRecordZoneIdentifier *)zoneIdentifier;
-(Class)responseClass;
-(void)setZoneIdentifier:(CKDPRecordZoneIdentifier *)arg1 ;
-(BOOL)hasZoneIdentifier;
-(BOOL)hasContinuationMarker;
-(unsigned)requestTypeCode;
-(void)mergeFrom:(id)arg1 ;
-(id)description;
-(NSData *)continuationMarker;
-(BOOL)onlyFetchPCSInfo;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setContinuationMarker:(NSData *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setHasOnlyFetchPCSInfo:(BOOL)arg1 ;
-(BOOL)hasOnlyFetchPCSInfo;
@end

