/*
* Generated on Thursday, January 14, 2021 at 2:26:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
*/

#import <CloudDocsDaemon/CloudDocsDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray;

@interface AppTelemetryTelemetryMessage : PBCodable <NSCopying> {

	unsigned long long _token;
	NSMutableArray* _events;
	SCD_Struct_Ap17 _has;

}

@property (nonatomic,retain) NSMutableArray * events;               //@synthesize events=_events - In the implementation block
@property (assign,nonatomic) BOOL hasToken; 
@property (assign,nonatomic) unsigned long long token;              //@synthesize token=_token - In the implementation block
+(Class)eventsType;
-(id)dictionaryRepresentation;
-(void)addEvents:(id)arg1 ;
-(void)clearEvents;
-(void)setEvents:(NSMutableArray *)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(id)eventsAtIndex:(unsigned long long)arg1 ;
-(id)description;
-(BOOL)hasToken;
-(void)setToken:(unsigned long long)arg1 ;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(NSMutableArray *)events;
-(unsigned long long)eventsCount;
-(void)writeTo:(id)arg1 ;
-(unsigned long long)token;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setHasToken:(BOOL)arg1 ;
@end

