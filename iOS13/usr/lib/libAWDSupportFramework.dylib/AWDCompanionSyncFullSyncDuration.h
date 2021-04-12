/*
* Generated on Monday, March 1, 2021 at 2:35:31 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /usr/lib/libAWDSupportFramework.dylib
*/

#import <libAWDSupportFramework.dylib/libAWDSupportFramework.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface AWDCompanionSyncFullSyncDuration : PBCodable <NSCopying> {

	unsigned long long _syncDuration;
	unsigned long long _timestamp;
	NSString* _service;
	BOOL _isMaster;
	SCD_Struct_AW4 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;                 //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,readonly) BOOL hasService; 
@property (nonatomic,retain) NSString * service;                           //@synthesize service=_service - In the implementation block
@property (assign,nonatomic) BOOL hasIsMaster; 
@property (assign,nonatomic) BOOL isMaster;                                //@synthesize isMaster=_isMaster - In the implementation block
@property (assign,nonatomic) BOOL hasSyncDuration; 
@property (assign,nonatomic) unsigned long long syncDuration;              //@synthesize syncDuration=_syncDuration - In the implementation block
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(unsigned long long)timestamp;
-(BOOL)hasTimestamp;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(NSString *)service;
-(BOOL)isMaster;
-(void)setService:(NSString *)arg1 ;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(BOOL)hasService;
-(void)setIsMaster:(BOOL)arg1 ;
-(void)setSyncDuration:(unsigned long long)arg1 ;
-(void)setHasIsMaster:(BOOL)arg1 ;
-(BOOL)hasIsMaster;
-(void)setHasSyncDuration:(BOOL)arg1 ;
-(BOOL)hasSyncDuration;
-(unsigned long long)syncDuration;
@end

