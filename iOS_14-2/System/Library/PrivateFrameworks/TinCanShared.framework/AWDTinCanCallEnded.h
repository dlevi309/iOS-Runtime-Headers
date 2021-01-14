/*
* Generated on Thursday, January 14, 2021 at 2:28:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TinCanShared.framework/TinCanShared
*/

#import <TinCanShared/TinCanShared-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSMutableArray;

@interface AWDTinCanCallEnded : PBCodable <NSCopying> {

	unsigned long long _contactHash;
	unsigned long long _timestamp;
	NSString* _csdCallUUID;
	unsigned _disconnectedReason;
	NSMutableArray* _events;
	SCD_Struct_AW3 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;                //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,readonly) BOOL hasCsdCallUUID; 
@property (nonatomic,retain) NSString * csdCallUUID;                      //@synthesize csdCallUUID=_csdCallUUID - In the implementation block
@property (assign,nonatomic) BOOL hasContactHash; 
@property (assign,nonatomic) unsigned long long contactHash;              //@synthesize contactHash=_contactHash - In the implementation block
@property (nonatomic,retain) NSMutableArray * events;                     //@synthesize events=_events - In the implementation block
@property (assign,nonatomic) BOOL hasDisconnectedReason; 
@property (assign,nonatomic) unsigned disconnectedReason;                 //@synthesize disconnectedReason=_disconnectedReason - In the implementation block
+(Class)eventsType;
-(id)dictionaryRepresentation;
-(void)addEvents:(id)arg1 ;
-(unsigned)disconnectedReason;
-(void)setDisconnectedReason:(unsigned)arg1 ;
-(void)clearEvents;
-(void)setEvents:(NSMutableArray *)arg1 ;
-(unsigned long long)timestamp;
-(void)mergeFrom:(id)arg1 ;
-(id)eventsAtIndex:(unsigned long long)arg1 ;
-(id)description;
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
-(void)setCsdCallUUID:(NSString *)arg1 ;
-(BOOL)hasCsdCallUUID;
-(void)setContactHash:(unsigned long long)arg1 ;
-(void)setHasContactHash:(BOOL)arg1 ;
-(BOOL)hasContactHash;
-(void)setHasDisconnectedReason:(BOOL)arg1 ;
-(BOOL)hasDisconnectedReason;
-(NSString *)csdCallUUID;
-(unsigned long long)contactHash;
@end

