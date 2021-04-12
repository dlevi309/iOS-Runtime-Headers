/*
* Generated on Thursday, January 14, 2021 at 2:28:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ProactiveContextClient.framework/ProactiveContextClient
*/

#import <ProactiveContextClient/ProactiveContextClient-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface ATXModePBEvent : PBCodable <NSCopying> {

	double _endDate;
	double _startDate;
	int _intValue;
	NSString* _jsonMeta;
	int _mode;
	NSString* _strValue;
	int _type;
	NSString* _uuid;
	SCD_Struct_AT1 _has;

}

@property (nonatomic,retain) NSString * uuid;                  //@synthesize uuid=_uuid - In the implementation block
@property (assign,nonatomic) int type;                         //@synthesize type=_type - In the implementation block
@property (assign,nonatomic) BOOL hasMode; 
@property (assign,nonatomic) int mode;                         //@synthesize mode=_mode - In the implementation block
@property (assign,nonatomic) BOOL hasIntValue; 
@property (assign,nonatomic) int intValue;                     //@synthesize intValue=_intValue - In the implementation block
@property (nonatomic,readonly) BOOL hasStrValue; 
@property (nonatomic,retain) NSString * strValue;              //@synthesize strValue=_strValue - In the implementation block
@property (assign,nonatomic) BOOL hasStartDate; 
@property (assign,nonatomic) double startDate;                 //@synthesize startDate=_startDate - In the implementation block
@property (assign,nonatomic) BOOL hasEndDate; 
@property (assign,nonatomic) double endDate;                   //@synthesize endDate=_endDate - In the implementation block
@property (nonatomic,readonly) BOOL hasJsonMeta; 
@property (nonatomic,retain) NSString * jsonMeta;              //@synthesize jsonMeta=_jsonMeta - In the implementation block
-(id)dictionaryRepresentation;
-(double)endDate;
-(int)mode;
-(NSString *)uuid;
-(BOOL)hasMode;
-(id)typeAsString:(int)arg1 ;
-(void)setStartDate:(double)arg1 ;
-(int)StringAsType:(id)arg1 ;
-(double)startDate;
-(BOOL)hasStartDate;
-(void)setHasStartDate:(BOOL)arg1 ;
-(void)setHasEndDate:(BOOL)arg1 ;
-(void)setEndDate:(double)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setType:(int)arg1 ;
-(void)setMode:(int)arg1 ;
-(void)setIntValue:(int)arg1 ;
-(void)setHasIntValue:(BOOL)arg1 ;
-(BOOL)hasIntValue;
-(id)description;
-(void)setHasMode:(BOOL)arg1 ;
-(id)modeAsString:(int)arg1 ;
-(int)StringAsMode:(id)arg1 ;
-(int)type;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(int)intValue;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setUuid:(NSString *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)hasEndDate;
-(void)setStrValue:(NSString *)arg1 ;
-(void)setJsonMeta:(NSString *)arg1 ;
-(BOOL)hasStrValue;
-(BOOL)hasJsonMeta;
-(NSString *)strValue;
-(NSString *)jsonMeta;
@end

