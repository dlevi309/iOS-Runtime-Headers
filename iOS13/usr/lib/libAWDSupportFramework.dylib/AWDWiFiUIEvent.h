/*
* Generated on Monday, March 1, 2021 at 2:35:35 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)state;
-(unsigned long long)timestamp;
-(void)setState:(BOOL)arg1 ;
-(BOOL)hasTimestamp;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(NSString *)process;
-(void)setProcess:(NSString *)arg1 ;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(BOOL)hasState;
-(void)setHasState:(BOOL)arg1 ;
-(BOOL)hasProcess;
-(void)setStateEnum:(unsigned)arg1 ;
-(void)setHasStateEnum:(BOOL)arg1 ;
-(BOOL)hasStateEnum;
-(unsigned)stateEnum;
@end

