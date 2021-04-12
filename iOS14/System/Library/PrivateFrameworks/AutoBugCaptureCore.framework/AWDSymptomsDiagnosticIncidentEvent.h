/*
* Generated on Thursday, January 14, 2021 at 2:26:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AutoBugCaptureCore.framework/AutoBugCaptureCore
*/

#import <AutoBugCaptureCore/AutoBugCaptureCore-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface AWDSymptomsDiagnosticIncidentEvent : PBCodable <NSCopying> {

	unsigned long long _timestamp;
	unsigned long long _value;
	NSString* _detectedName;
	NSString* _effectiveName;
	NSString* _name;
	int _state;
	int _status;
	int _type;
	SCD_Struct_AW2 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;              //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) BOOL hasType; 
@property (assign,nonatomic) int type;                                  //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) BOOL hasName; 
@property (nonatomic,retain) NSString * name;                           //@synthesize name=_name - In the implementation block
@property (assign,nonatomic) BOOL hasValue; 
@property (assign,nonatomic) unsigned long long value;                  //@synthesize value=_value - In the implementation block
@property (assign,nonatomic) BOOL hasStatus; 
@property (assign,nonatomic) int status;                                //@synthesize status=_status - In the implementation block
@property (assign,nonatomic) BOOL hasState; 
@property (assign,nonatomic) int state;                                 //@synthesize state=_state - In the implementation block
@property (nonatomic,readonly) BOOL hasDetectedName; 
@property (nonatomic,retain) NSString * detectedName;                   //@synthesize detectedName=_detectedName - In the implementation block
@property (nonatomic,readonly) BOOL hasEffectiveName; 
@property (nonatomic,retain) NSString * effectiveName;                  //@synthesize effectiveName=_effectiveName - In the implementation block
-(id)dictionaryRepresentation;
-(void)setHasStatus:(BOOL)arg1 ;
-(id)typeAsString:(int)arg1 ;
-(void)setHasType:(BOOL)arg1 ;
-(BOOL)hasName;
-(BOOL)hasState;
-(int)StringAsType:(id)arg1 ;
-(BOOL)hasValue;
-(unsigned long long)timestamp;
-(BOOL)hasType;
-(void)mergeFrom:(id)arg1 ;
-(void)setType:(int)arg1 ;
-(id)statusAsString:(int)arg1 ;
-(BOOL)hasStatus;
-(NSString *)name;
-(void)setValue:(unsigned long long)arg1 ;
-(int)StringAsStatus:(id)arg1 ;
-(id)description;
-(void)setHasState:(BOOL)arg1 ;
-(void)setHasValue:(BOOL)arg1 ;
-(int)type;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(void)setState:(int)arg1 ;
-(unsigned long long)hash;
-(BOOL)hasTimestamp;
-(int)state;
-(BOOL)readFrom:(id)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(void)setStatus:(int)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)stateAsString:(int)arg1 ;
-(int)StringAsState:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(unsigned long long)value;
-(BOOL)isEqual:(id)arg1 ;
-(int)status;
-(void)setDetectedName:(NSString *)arg1 ;
-(void)setEffectiveName:(NSString *)arg1 ;
-(BOOL)hasDetectedName;
-(BOOL)hasEffectiveName;
-(NSString *)detectedName;
-(NSString *)effectiveName;
@end

