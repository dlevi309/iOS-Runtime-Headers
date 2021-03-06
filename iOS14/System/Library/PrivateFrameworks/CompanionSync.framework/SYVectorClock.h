/*
* Generated on Thursday, January 14, 2021 at 2:24:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CompanionSync.framework/CompanionSync
*/

#import <CompanionSync/CompanionSync-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray;

@interface SYVectorClock : PBCodable <NSCopying> {

	NSMutableArray* _clocks;

}

@property (nonatomic,retain) NSMutableArray * clocks;              //@synthesize clocks=_clocks - In the implementation block
+(void)initialize;
+(Class)clocksType;
-(id)dictionaryRepresentation;
-(id)jsonRepresentation;
-(NSMutableArray *)clocks;
-(void)mergeFrom:(id)arg1 ;
-(void)setClocks:(NSMutableArray *)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithJSONRepresentation:(id)arg1 ;
-(unsigned long long)clocksCount;
-(void)incrementClockForPeerID:(id)arg1 ;
-(BOOL)hasClockForPeer:(id)arg1 ;
-(id)clockForPeer:(id)arg1 ;
-(void)addClocks:(id)arg1 ;
-(unsigned long long)clockValueForPeerID:(id)arg1 ;
-(unsigned long long)clockValueForPeer:(id)arg1 ;
-(void)setClockValue:(unsigned long long)arg1 forPeer:(id)arg2 ;
-(void)increaseClockForPeerID:(id)arg1 by:(unsigned long long)arg2 ;
-(BOOL)_setTheory_isEqual:(id)arg1 ;
-(BOOL)hasClockForPeerID:(id)arg1 ;
-(id)clockForPeerID:(id)arg1 ;
-(void)setClockValue:(unsigned long long)arg1 forPeerID:(id)arg2 ;
-(id)compactDictionaryRepresentation;
-(void)increaseClockForPeer:(id)arg1 by:(unsigned long long)arg2 ;
-(void)incrementClockForPeer:(id)arg1 ;
-(void)clearClocks;
-(id)clocksAtIndex:(unsigned long long)arg1 ;
@end

