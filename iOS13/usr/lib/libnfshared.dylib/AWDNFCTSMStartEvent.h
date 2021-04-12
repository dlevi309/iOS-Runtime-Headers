/*
* Generated on Monday, March 1, 2021 at 2:32:31 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /usr/lib/libnfshared.dylib
*/

#import <libnfshared.dylib/libnfshared.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSData;

@interface AWDNFCTSMStartEvent : PBCodable <NSCopying> {

	unsigned long long _timeDeltaFromReference;
	unsigned long long _timestamp;
	unsigned _idxTableAvail;
	unsigned _persistentAvail;
	unsigned _transientDeselectAvail;
	unsigned _transientResetAvail;
	NSString* _url;
	NSData* _uuidReference;
	SCD_Struct_AW10 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;                           //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) BOOL hasTransientDeselectAvail; 
@property (assign,nonatomic) unsigned transientDeselectAvail;                        //@synthesize transientDeselectAvail=_transientDeselectAvail - In the implementation block
@property (assign,nonatomic) BOOL hasTransientResetAvail; 
@property (assign,nonatomic) unsigned transientResetAvail;                           //@synthesize transientResetAvail=_transientResetAvail - In the implementation block
@property (assign,nonatomic) BOOL hasPersistentAvail; 
@property (assign,nonatomic) unsigned persistentAvail;                               //@synthesize persistentAvail=_persistentAvail - In the implementation block
@property (assign,nonatomic) BOOL hasIdxTableAvail; 
@property (assign,nonatomic) unsigned idxTableAvail;                                 //@synthesize idxTableAvail=_idxTableAvail - In the implementation block
@property (nonatomic,readonly) BOOL hasUuidReference; 
@property (nonatomic,retain) NSData * uuidReference;                                 //@synthesize uuidReference=_uuidReference - In the implementation block
@property (assign,nonatomic) BOOL hasTimeDeltaFromReference; 
@property (assign,nonatomic) unsigned long long timeDeltaFromReference;              //@synthesize timeDeltaFromReference=_timeDeltaFromReference - In the implementation block
@property (nonatomic,readonly) BOOL hasUrl; 
@property (nonatomic,retain) NSString * url;                                         //@synthesize url=_url - In the implementation block
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(NSString *)url;
-(unsigned long long)timestamp;
-(BOOL)hasTimestamp;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setUrl:(NSString *)arg1 ;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(BOOL)hasUrl;
-(void)setUuidReference:(NSData *)arg1 ;
-(BOOL)hasUuidReference;
-(void)setTimeDeltaFromReference:(unsigned long long)arg1 ;
-(void)setHasTimeDeltaFromReference:(BOOL)arg1 ;
-(BOOL)hasTimeDeltaFromReference;
-(NSData *)uuidReference;
-(unsigned long long)timeDeltaFromReference;
-(void)setTransientDeselectAvail:(unsigned)arg1 ;
-(void)setHasTransientDeselectAvail:(BOOL)arg1 ;
-(BOOL)hasTransientDeselectAvail;
-(void)setTransientResetAvail:(unsigned)arg1 ;
-(void)setHasTransientResetAvail:(BOOL)arg1 ;
-(BOOL)hasTransientResetAvail;
-(void)setPersistentAvail:(unsigned)arg1 ;
-(void)setHasPersistentAvail:(BOOL)arg1 ;
-(BOOL)hasPersistentAvail;
-(void)setIdxTableAvail:(unsigned)arg1 ;
-(void)setHasIdxTableAvail:(BOOL)arg1 ;
-(BOOL)hasIdxTableAvail;
-(unsigned)transientDeselectAvail;
-(unsigned)transientResetAvail;
-(unsigned)persistentAvail;
-(unsigned)idxTableAvail;
@end

