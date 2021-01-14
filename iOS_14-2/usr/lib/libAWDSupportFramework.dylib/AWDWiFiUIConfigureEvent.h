/*
* Generated on Thursday, January 14, 2021 at 2:29:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /usr/lib/libAWDSupportFramework.dylib
*/

#import <libAWDSupportFramework.dylib/libAWDSupportFramework.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface AWDWiFiUIConfigureEvent : PBCodable <NSCopying> {

	unsigned long long _timestamp;
	unsigned _previousType;
	NSString* _process;
	unsigned _type;
	SCD_Struct_AW4 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;              //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,readonly) BOOL hasProcess; 
@property (nonatomic,retain) NSString * process;                        //@synthesize process=_process - In the implementation block
@property (assign,nonatomic) BOOL hasType; 
@property (assign,nonatomic) unsigned type;                             //@synthesize type=_type - In the implementation block
@property (assign,nonatomic) BOOL hasPreviousType; 
@property (assign,nonatomic) unsigned previousType;                     //@synthesize previousType=_previousType - In the implementation block
-(NSString *)process;
-(void)setProcess:(NSString *)arg1 ;
-(id)dictionaryRepresentation;
-(void)setHasType:(BOOL)arg1 ;
-(unsigned long long)timestamp;
-(BOOL)hasType;
-(void)mergeFrom:(id)arg1 ;
-(void)setType:(unsigned)arg1 ;
-(id)description;
-(unsigned)type;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(unsigned long long)hash;
-(BOOL)hasTimestamp;
-(BOOL)readFrom:(id)arg1 ;
-(unsigned)previousType;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(BOOL)hasProcess;
-(void)setPreviousType:(unsigned)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
-(void)setHasPreviousType:(BOOL)arg1 ;
-(BOOL)hasPreviousType;
@end

