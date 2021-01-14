/*
* Generated on Thursday, January 14, 2021 at 2:28:56 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /usr/lib/libAWDSupportFramework.dylib
*/

#import <libAWDSupportFramework.dylib/libAWDSupportFramework.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface AWDBltDelayToSecondaryDevice : PBCodable <NSCopying> {

	unsigned long long _timestamp;
	unsigned _connectionType;
	unsigned _delayMs;
	NSString* _uniqueid;
	SCD_Struct_AW4 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;              //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,readonly) BOOL hasUniqueid; 
@property (nonatomic,retain) NSString * uniqueid;                       //@synthesize uniqueid=_uniqueid - In the implementation block
@property (assign,nonatomic) BOOL hasDelayMs; 
@property (assign,nonatomic) unsigned delayMs;                          //@synthesize delayMs=_delayMs - In the implementation block
@property (assign,nonatomic) BOOL hasConnectionType; 
@property (assign,nonatomic) unsigned connectionType;                   //@synthesize connectionType=_connectionType - In the implementation block
-(id)dictionaryRepresentation;
-(void)setHasConnectionType:(BOOL)arg1 ;
-(unsigned)connectionType;
-(void)setConnectionType:(unsigned)arg1 ;
-(unsigned long long)timestamp;
-(BOOL)hasConnectionType;
-(void)mergeFrom:(id)arg1 ;
-(id)description;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(unsigned long long)hash;
-(BOOL)hasTimestamp;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
-(void)setDelayMs:(unsigned)arg1 ;
-(void)setUniqueid:(NSString *)arg1 ;
-(BOOL)hasUniqueid;
-(void)setHasDelayMs:(BOOL)arg1 ;
-(BOOL)hasDelayMs;
-(NSString *)uniqueid;
-(unsigned)delayMs;
@end

