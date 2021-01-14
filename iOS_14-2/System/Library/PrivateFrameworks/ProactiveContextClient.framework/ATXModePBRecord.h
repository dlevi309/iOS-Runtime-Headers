/*
* Generated on Thursday, January 14, 2021 at 2:28:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ProactiveContextClient.framework/ProactiveContextClient
*/

#import <ProactiveContextClient/ProactiveContextClient-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray, NSString;

@interface ATXModePBRecord : PBCodable <NSCopying> {

	unsigned long long _timestamp;
	NSMutableArray* _events;
	int _timezone;
	NSString* _userID;
	SCD_Struct_AT3 _has;

}

@property (nonatomic,readonly) BOOL hasUserID; 
@property (nonatomic,retain) NSString * userID;                         //@synthesize userID=_userID - In the implementation block
@property (nonatomic,retain) NSMutableArray * events;                   //@synthesize events=_events - In the implementation block
@property (assign,nonatomic) BOOL hasTimezone; 
@property (assign,nonatomic) int timezone;                              //@synthesize timezone=_timezone - In the implementation block
@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;              //@synthesize timestamp=_timestamp - In the implementation block
+(Class)eventsType;
-(id)dictionaryRepresentation;
-(int)timezone;
-(void)setUserID:(NSString *)arg1 ;
-(void)addEvents:(id)arg1 ;
-(BOOL)hasUserID;
-(NSString *)userID;
-(void)clearEvents;
-(void)setEvents:(NSMutableArray *)arg1 ;
-(unsigned long long)timestamp;
-(void)mergeFrom:(id)arg1 ;
-(id)eventsAtIndex:(unsigned long long)arg1 ;
-(id)description;
-(void)setHasTimezone:(BOOL)arg1 ;
-(BOOL)hasTimezone;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(unsigned long long)hash;
-(BOOL)hasTimestamp;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(NSMutableArray *)events;
-(unsigned long long)eventsCount;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setTimezone:(int)arg1 ;
@end

