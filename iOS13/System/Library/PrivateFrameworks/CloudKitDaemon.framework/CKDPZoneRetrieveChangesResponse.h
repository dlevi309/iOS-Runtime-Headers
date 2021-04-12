/*
* Generated on Monday, March 1, 2021 at 2:33:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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

