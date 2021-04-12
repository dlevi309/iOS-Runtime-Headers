/*
* Generated on Monday, March 1, 2021 at 2:33:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
*/

#import <CloudKitDaemon/CloudKitDaemon-Structs.h>
#import <ProtocolBuffer/PBRequest.h>
#import <libobjc.A.dylib/NSCopying.h>

@class CKDPAssetsToDownload, CKDPRequestedFields, NSData, CKDPRecordZoneIdentifier;

@interface CKDPRecordRetrieveChangesRequest : PBRequest <NSCopying> {

	CKDPAssetsToDownload* _assetsToDownload;
	unsigned _maxChanges;
	int _requestedChangeTypes;
	CKDPRequestedFields* _requestedFields;
	NSData* _syncContinuationToken;
	CKDPRecordZoneIdentifier* _zoneIdentifier;
	BOOL _ignoreCallingDeviceChanges;
	BOOL _newestFirst;
	SCD_Struct_CK17 _has;

}

@property (nonatomic,readonly) BOOL hasSyncContinuationToken; 
@property (nonatomic,retain) NSData * syncContinuationToken;                         //@synthesize syncContinuationToken=_syncContinuationToken - In the implementation block
@property (nonatomic,readonly) BOOL hasZoneIdentifier; 
@property (nonatomic,retain) CKDPRecordZoneIdentifier * zoneIdentifier;              //@synthesize zoneIdentifier=_zoneIdentifier - In the implementation block
@property (nonatomic,readonly) BOOL hasRequestedFields; 
@property (nonatomic,retain) CKDPRequestedFields * requestedFields;                  //@synthesize requestedFields=_requestedFields - In the implementation block
@property (assign,nonatomic) BOOL hasMaxChanges; 
@property (assign,nonatomic) unsigned maxChanges;                                    //@synthesize maxChanges=_maxChanges - In the implementation block
@property (assign,nonatomic) BOOL hasRequestedChangeTypes; 
@property (assign,nonatomic) int requestedChangeTypes;                               //@synthesize requestedChangeTypes=_requestedChangeTypes - In the implementation block
@property (nonatomic,readonly) BOOL hasAssetsToDownload; 
@property (nonatomic,retain) CKDPAssetsToDownload * assetsToDownload;                //@synthesize assetsToDownload=_assetsToDownload - In the implementation block
@property (assign,nonatomic) BOOL hasNewestFirst; 
@property (assign,nonatomic) BOOL newestFirst;                                       //@synthesize newestFirst=_newestFirst - In the implementation block
@property (assign,nonatomic) BOOL hasIgnoreCallingDeviceChanges; 
@property (assign,nonatomic) BOOL ignoreCallingDeviceChanges;                        //@synthesize ignoreCallingDeviceChanges=_ignoreCallingDeviceChanges - In the implementation block
+(id)options;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(unsigned)requestTypeCode;
-(Class)responseClass;
-(void)setZoneIdentifier:(CKDPRecordZoneIdentifier *)arg1 ;
-(BOOL)hasZoneIdentifier;
-(CKDPRecordZoneIdentifier *)zoneIdentifier;
-(CKDPRequestedFields *)requestedFields;
-(void)setRequestedFields:(CKDPRequestedFields *)arg1 ;
-(BOOL)hasRequestedFields;
-(void)setAssetsToDownload:(CKDPAssetsToDownload *)arg1 ;
-(BOOL)hasAssetsToDownload;
-(CKDPAssetsToDownload *)assetsToDownload;
-(void)setMaxChanges:(unsigned)arg1 ;
-(void)setHasMaxChanges:(BOOL)arg1 ;
-(BOOL)hasMaxChanges;
-(unsigned)maxChanges;
-(void)setNewestFirst:(BOOL)arg1 ;
-(void)setHasNewestFirst:(BOOL)arg1 ;
-(BOOL)hasNewestFirst;
-(BOOL)newestFirst;
-(void)setSyncContinuationToken:(NSData *)arg1 ;
-(BOOL)hasSyncContinuationToken;
-(NSData *)syncContinuationToken;
-(void)setRequestedChangeTypes:(int)arg1 ;
-(void)setIgnoreCallingDeviceChanges:(BOOL)arg1 ;
-(int)requestedChangeTypes;
-(void)setHasRequestedChangeTypes:(BOOL)arg1 ;
-(BOOL)hasRequestedChangeTypes;
-(id)requestedChangeTypesAsString:(int)arg1 ;
-(int)StringAsRequestedChangeTypes:(id)arg1 ;
-(void)setHasIgnoreCallingDeviceChanges:(BOOL)arg1 ;
-(BOOL)hasIgnoreCallingDeviceChanges;
-(BOOL)ignoreCallingDeviceChanges;
@end

