/*
* Generated on Thursday, January 14, 2021 at 2:25:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/

#import <HealthDaemon/HealthDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface HDAWDHealthKitClinicalOntologyDownloadEvent : PBCodable <NSCopying> {

	long long _currentOntologyVersion;
	long long _hoursSinceLastAssetDownload;
	unsigned long long _timestamp;
	int _downloadPhase;
	SCD_Struct_HD10 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;                       //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) BOOL hasCurrentOntologyVersion; 
@property (assign,nonatomic) long long currentOntologyVersion;                   //@synthesize currentOntologyVersion=_currentOntologyVersion - In the implementation block
@property (assign,nonatomic) BOOL hasHoursSinceLastAssetDownload; 
@property (assign,nonatomic) long long hoursSinceLastAssetDownload;              //@synthesize hoursSinceLastAssetDownload=_hoursSinceLastAssetDownload - In the implementation block
@property (assign,nonatomic) BOOL hasDownloadPhase; 
@property (assign,nonatomic) int downloadPhase;                                  //@synthesize downloadPhase=_downloadPhase - In the implementation block
-(id)dictionaryRepresentation;
-(unsigned long long)timestamp;
-(void)mergeFrom:(id)arg1 ;
-(id)description;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(unsigned long long)hash;
-(int)downloadPhase;
-(BOOL)hasTimestamp;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setDownloadPhase:(int)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setCurrentOntologyVersion:(long long)arg1 ;
-(void)setHoursSinceLastAssetDownload:(long long)arg1 ;
-(void)setHasCurrentOntologyVersion:(BOOL)arg1 ;
-(BOOL)hasCurrentOntologyVersion;
-(void)setHasHoursSinceLastAssetDownload:(BOOL)arg1 ;
-(BOOL)hasHoursSinceLastAssetDownload;
-(void)setHasDownloadPhase:(BOOL)arg1 ;
-(BOOL)hasDownloadPhase;
-(id)downloadPhaseAsString:(int)arg1 ;
-(int)StringAsDownloadPhase:(id)arg1 ;
-(long long)currentOntologyVersion;
-(long long)hoursSinceLastAssetDownload;
@end

