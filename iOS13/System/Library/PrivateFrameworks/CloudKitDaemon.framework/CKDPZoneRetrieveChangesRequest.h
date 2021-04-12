/*
* Generated on Monday, March 1, 2021 at 2:33:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
*/

#import <CloudKitDaemon/CloudKitDaemon-Structs.h>
#import <ProtocolBuffer/PBRequest.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData;

@interface CKDPZoneRetrieveChangesRequest : PBRequest <NSCopying> {

	unsigned _maxChangedZones;
	NSData* _syncContinuationToken;
	SCD_Struct_CK1 _has;

}

@property (nonatomic,readonly) BOOL hasSyncContinuationToken; 
@property (nonatomic,retain) NSData * syncContinuationToken;               //@synthesize syncContinuationToken=_syncContinuationToken - In the implementation block
@property (assign,nonatomic) BOOL hasMaxChangedZones; 
@property (assign,nonatomic) unsigned maxChangedZones;                     //@synthesize maxChangedZones=_maxChangedZones - In the implementation block
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
-(void)setSyncContinuationToken:(NSData *)arg1 ;
-(BOOL)hasSyncContinuationToken;
-(NSData *)syncContinuationToken;
-(void)setMaxChangedZones:(unsigned)arg1 ;
-(void)setHasMaxChangedZones:(BOOL)arg1 ;
-(BOOL)hasMaxChangedZones;
-(unsigned)maxChangedZones;
@end

