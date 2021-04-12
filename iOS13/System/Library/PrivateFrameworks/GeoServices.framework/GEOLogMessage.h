/*
* Generated on Monday, March 1, 2021 at 2:30:37 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray;

@interface GEOLogMessage : PBCodable <NSCopying> {

	NSMutableArray* _logMsgEvents;
	unsigned _groupRetryCount;
	int _logMessageType;
	SCD_Struct_GE33 _flags;

}

@property (assign,nonatomic) BOOL hasGroupRetryCount; 
@property (assign,nonatomic) unsigned groupRetryCount; 
@property (nonatomic,retain) NSMutableArray * logMsgEvents; 
@property (assign,nonatomic) BOOL hasLogMessageType; 
@property (assign,nonatomic) int logMessageType; 
+(BOOL)isValid:(id)arg1 ;
+(Class)logMsgEventType;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(int)logMessageType;
-(void)addLogMsgEvent:(id)arg1 ;
-(unsigned long long)logMsgEventsCount;
-(void)clearLogMsgEvents;
-(id)logMsgEventAtIndex:(unsigned long long)arg1 ;
-(NSMutableArray *)logMsgEvents;
-(void)setLogMsgEvents:(NSMutableArray *)arg1 ;
-(void)setLogMessageType:(int)arg1 ;
-(void)setHasLogMessageType:(BOOL)arg1 ;
-(BOOL)hasLogMessageType;
-(id)logMessageTypeAsString:(int)arg1 ;
-(int)StringAsLogMessageType:(id)arg1 ;
-(unsigned)groupRetryCount;
-(void)setGroupRetryCount:(unsigned)arg1 ;
-(void)setHasGroupRetryCount:(BOOL)arg1 ;
-(BOOL)hasGroupRetryCount;
@end

