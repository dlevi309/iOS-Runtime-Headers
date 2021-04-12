/*
* Generated on Thursday, January 14, 2021 at 2:28:56 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)dictionaryRepresentation;
-(BOOL)isMaster;
-(unsigned long long)timestamp;
-(void)mergeFrom:(id)arg1 ;
-(id)description;
-(BOOL)hasService;
-(void)setService:(NSString *)arg1 ;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(unsigned long long)hash;
-(BOOL)hasTimestamp;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(NSString *)service;
-(void)dealloc;
-(void)setIsMaster:(BOOL)arg1 ;
-(void)setSyncDuration:(unsigned long long)arg1 ;
-(void)setHasIsMaster:(BOOL)arg1 ;
-(BOOL)hasIsMaster;
-(void)setHasSyncDuration:(BOOL)arg1 ;
-(BOOL)hasSyncDuration;
-(unsigned long long)syncDuration;
@end

