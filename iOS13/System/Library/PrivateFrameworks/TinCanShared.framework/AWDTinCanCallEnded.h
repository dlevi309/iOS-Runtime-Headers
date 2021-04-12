/*
* Generated on Monday, March 1, 2021 at 2:35:23 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(unsigned long long)timestamp;
-(BOOL)hasTimestamp;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(NSMutableArray *)events;
-(void)setEvents:(NSMutableArray *)arg1 ;
-(void)addEvents:(id)arg1 ;
-(unsigned long long)eventsCount;
-(void)clearEvents;
-(id)eventsAtIndex:(unsigned long long)arg1 ;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(unsigned)disconnectedReason;
-(void)setDisconnectedReason:(unsigned)arg1 ;
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

