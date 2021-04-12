/*
* Generated on Thursday, January 14, 2021 at 2:26:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
*/

#import <CloudKitDaemon/CloudKitDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray, NSData;

@interface CKDPZoneRetrieveChangesResponse : PBCodable <NSCopying> {

	NSMutableArray* _changedZones;
	int _status;
	NSData* _syncContinuationToken;
	SCD_Struct_CK1 _has;

}

@property (nonatomic,retain) NSMutableArray * changedZones;                //@synthesize changedZones=_changedZones - In the implementation block
@property (nonatomic,readonly) BOOL hasSyncContinuationToken; 
@property (nonatomic,retain) NSData * syncContinuationToken;               //@synthesize syncContinuationToken=_syncContinuationToken - In the implementation block
@property (assign,nonatomic) BOOL hasStatus; 
@property (assign,nonatomic) int status;                                   //@synthesize status=_status - In the implementation block
+(Class)changedZonesType;
-(id)dictionaryRepresentation;
-(void)setHasStatus:(BOOL)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(id)statusAsString:(int)arg1 ;
-(BOOL)hasStatus;
-(int)StringAsStatus:(id)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)setStatus:(int)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(int)status;
-(void)setSyncContinuationToken:(NSData *)arg1 ;
-(BOOL)hasSyncContinuationToken;
-(NSData *)syncContinuationToken;
-(NSMutableArray *)changedZones;
-(void)addChangedZones:(id)arg1 ;
-(unsigned long long)changedZonesCount;
-(void)clearChangedZones;
-(id)changedZonesAtIndex:(unsigned long long)arg1 ;
-(void)setChangedZones:(NSMutableArray *)arg1 ;
@end

