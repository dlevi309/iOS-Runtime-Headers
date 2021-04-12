/*
* Generated on Thursday, January 14, 2021 at 2:23:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
*/

#import <NewsTransport/NewsTransport-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray, NSData, NTPBSession;

@interface NTPBSessionBatch : PBCodable <NSCopying> {

	NSMutableArray* _events;
	NSData* _identifier;
	NTPBSession* _session;

}

@property (nonatomic,readonly) BOOL hasSession; 
@property (nonatomic,retain) NTPBSession * session;                //@synthesize session=_session - In the implementation block
@property (nonatomic,retain) NSMutableArray * events;              //@synthesize events=_events - In the implementation block
@property (nonatomic,readonly) BOOL hasIdentifier; 
@property (nonatomic,retain) NSData * identifier;                  //@synthesize identifier=_identifier - In the implementation block
+(Class)eventsType;
-(id)dictionaryRepresentation;
-(void)addEvents:(id)arg1 ;
-(BOOL)hasSession;
-(void)clearEvents;
-(BOOL)hasIdentifier;
-(void)setEvents:(NSMutableArray *)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(NTPBSession *)session;
-(id)eventsAtIndex:(unsigned long long)arg1 ;
-(id)description;
-(void)setSession:(NTPBSession *)arg1 ;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)setIdentifier:(NSData *)arg1 ;
-(NSData *)identifier;
-(NSMutableArray *)events;
-(unsigned long long)eventsCount;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

