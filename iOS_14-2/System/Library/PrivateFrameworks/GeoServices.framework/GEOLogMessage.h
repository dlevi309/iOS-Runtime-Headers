/*
* Generated on Thursday, January 14, 2021 at 2:20:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
	struct {
		unsigned has_groupRetryCount : 1;
		unsigned has_logMessageType : 1;
	}  _flags;

}

@property (assign,nonatomic) BOOL hasGroupRetryCount; 
@property (assign,nonatomic) unsigned groupRetryCount; 
@property (nonatomic,retain) NSMutableArray * logMsgEvents; 
@property (assign,nonatomic) BOOL hasLogMessageType; 
@property (assign,nonatomic) int logMessageType; 
+(Class)logMsgEventType;
+(BOOL)isValid:(id)arg1 ;
-(id)dictionaryRepresentation;
-(id)logMsgEventAtIndex:(unsigned long long)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(id)jsonRepresentation;
-(void)addLogMsgEvent:(id)arg1 ;
-(void)setLogMsgEvents:(NSMutableArray *)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setHasGroupRetryCount:(BOOL)arg1 ;
-(unsigned long long)logMsgEventsCount;
-(void)setGroupRetryCount:(unsigned)arg1 ;
-(void)setLogMessageType:(int)arg1 ;
-(NSMutableArray *)logMsgEvents;
-(id)initWithDictionary:(id)arg1 ;
-(id)description;
-(id)logMessageTypeAsString:(int)arg1 ;
-(BOOL)hasGroupRetryCount;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(int)StringAsLogMessageType:(id)arg1 ;
-(int)logMessageType;
-(unsigned)groupRetryCount;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)clearLogMsgEvents;
-(void)setHasLogMessageType:(BOOL)arg1 ;
-(BOOL)hasLogMessageType;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

