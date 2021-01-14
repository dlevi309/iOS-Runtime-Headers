/*
* Generated on Thursday, January 14, 2021 at 2:24:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionClient.framework/AppPredictionClient
*/

#import <AppPredictionClient/AppPredictionClient-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray, NSData;

@interface ATXPBERMEvent : PBCodable <NSCopying> {

	double _dateEngaged;
	unsigned long long _engagementType;
	double _eventDate;
	NSMutableArray* _clientModelIds;
	int _eventType;
	NSData* _executable;
	int _executableType;
	SCD_Struct_AT2 _has;

}

@property (assign,nonatomic) BOOL hasEventDate; 
@property (assign,nonatomic) double eventDate;                               //@synthesize eventDate=_eventDate - In the implementation block
@property (assign,nonatomic) BOOL hasEventType; 
@property (assign,nonatomic) int eventType;                                  //@synthesize eventType=_eventType - In the implementation block
@property (assign,nonatomic) BOOL hasDateEngaged; 
@property (assign,nonatomic) double dateEngaged;                             //@synthesize dateEngaged=_dateEngaged - In the implementation block
@property (assign,nonatomic) BOOL hasEngagementType; 
@property (assign,nonatomic) unsigned long long engagementType;              //@synthesize engagementType=_engagementType - In the implementation block
@property (assign,nonatomic) BOOL hasExecutableType; 
@property (assign,nonatomic) int executableType;                             //@synthesize executableType=_executableType - In the implementation block
@property (nonatomic,readonly) BOOL hasExecutable; 
@property (nonatomic,retain) NSData * executable;                            //@synthesize executable=_executable - In the implementation block
@property (nonatomic,retain) NSMutableArray * clientModelIds;                //@synthesize clientModelIds=_clientModelIds - In the implementation block
+(Class)clientModelIdType;
-(void)setHasEventType:(BOOL)arg1 ;
-(BOOL)hasEventType;
-(id)dictionaryRepresentation;
-(int)StringAsEventType:(id)arg1 ;
-(id)eventTypeAsString:(int)arg1 ;
-(void)setEventType:(int)arg1 ;
-(int)eventType;
-(BOOL)hasEngagementType;
-(unsigned long long)engagementType;
-(void)mergeFrom:(id)arg1 ;
-(void)setEventDate:(double)arg1 ;
-(void)setHasEngagementType:(BOOL)arg1 ;
-(NSMutableArray *)clientModelIds;
-(NSData *)executable;
-(int)executableType;
-(void)setEngagementType:(unsigned long long)arg1 ;
-(id)description;
-(double)eventDate;
-(unsigned long long)hash;
-(BOOL)hasEventDate;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setHasEventDate:(BOOL)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setExecutable:(NSData *)arg1 ;
-(BOOL)hasExecutable;
-(void)setExecutableType:(int)arg1 ;
-(void)setHasExecutableType:(BOOL)arg1 ;
-(BOOL)hasExecutableType;
-(id)executableTypeAsString:(int)arg1 ;
-(int)StringAsExecutableType:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)hasDateEngaged;
-(double)dateEngaged;
-(void)setClientModelIds:(NSMutableArray *)arg1 ;
-(void)setDateEngaged:(double)arg1 ;
-(void)addClientModelId:(id)arg1 ;
-(unsigned long long)clientModelIdsCount;
-(void)clearClientModelIds;
-(id)clientModelIdAtIndex:(unsigned long long)arg1 ;
-(void)setHasDateEngaged:(BOOL)arg1 ;
@end

