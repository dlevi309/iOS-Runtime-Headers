/*
* Generated on Thursday, January 14, 2021 at 2:29:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /usr/lib/libAWDSupportFramework.dylib
*/

#import <libAWDSupportFramework.dylib/libAWDSupportFramework.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface AWDWiFiUIEvent : PBCodable <NSCopying> {

	unsigned long long _timestamp;
	NSString* _process;
	unsigned _stateEnum;
	BOOL _state;
	SCD_Struct_AW4 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;              //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,readonly) BOOL hasProcess; 
@property (nonatomic,retain) NSString * process;                        //@synthesize process=_process - In the implementation block
@property (assign,nonatomic) BOOL hasState; 
@property (assign,nonatomic) BOOL state;                                //@synthesize state=_state - In the implementation block
@property (assign,nonatomic) BOOL hasStateEnum; 
@property (assign,nonatomic) unsigned stateEnum;                        //@synthesize stateEnum=_stateEnum - In the implementation block
-(NSString *)process;
-(void)setProcess:(NSString *)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)hasState;
-(unsigned long long)timestamp;
-(void)mergeFrom:(id)arg1 ;
-(id)description;
-(void)setHasState:(BOOL)arg1 ;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(void)setState:(BOOL)arg1 ;
-(unsigned long long)hash;
-(BOOL)hasTimestamp;
-(BOOL)state;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(BOOL)hasProcess;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
-(void)setStateEnum:(unsigned)arg1 ;
-(void)setHasStateEnum:(BOOL)arg1 ;
-(BOOL)hasStateEnum;
-(unsigned)stateEnum;
@end

