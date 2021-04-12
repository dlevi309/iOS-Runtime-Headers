/*
* Generated on Monday, March 1, 2021 at 2:30:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
*/

#import <CoreDuet/CoreDuet-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray;

@interface _DKPRChangeSet : PBCodable <NSCopying> {

	NSMutableArray* _deleteEventIDs;
	NSMutableArray* _events;

}

@property (nonatomic,retain) NSMutableArray * events;                      //@synthesize events=_events - In the implementation block
@property (nonatomic,retain) NSMutableArray * deleteEventIDs;              //@synthesize deleteEventIDs=_deleteEventIDs - In the implementation block
+(Class)eventsType;
+(Class)deleteEventIDType;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(NSMutableArray *)events;
-(void)setEvents:(NSMutableArray *)arg1 ;
-(void)setDeleteEventIDs:(NSMutableArray *)arg1 ;
-(NSMutableArray *)deleteEventIDs;
-(void)addEvents:(id)arg1 ;
-(void)addDeleteEventID:(id)arg1 ;
-(unsigned long long)eventsCount;
-(void)clearEvents;
-(id)eventsAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)deleteEventIDsCount;
-(void)clearDeleteEventIDs;
-(id)deleteEventIDAtIndex:(unsigned long long)arg1 ;
@end

