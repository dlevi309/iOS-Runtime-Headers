/*
* Generated on Monday, March 1, 2021 at 2:34:40 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/BusinessChatService.framework/BusinessChatService
*/

#import <BusinessChatService/BusinessChatService-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray;

@interface BCSHoursMessage : PBCodable <NSCopying> {

	SCD_Struct_BC6* _days;
	NSMutableArray* _timeRanges;

}

@property (nonatomic,readonly) unsigned long long daysCount; 
@property (nonatomic,readonly) int* days; 
@property (nonatomic,retain) NSMutableArray * timeRanges;                 //@synthesize timeRanges=_timeRanges - In the implementation block
+(Class)timeRangeType;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)clearTimeRanges;
-(unsigned long long)daysCount;
-(void)clearDays;
-(unsigned long long)timeRangesCount;
-(int*)days;
-(void)setDays:(int*)arg1 count:(unsigned long long)arg2 ;
-(id)daysAsString:(int)arg1 ;
-(int)StringAsDays:(id)arg1 ;
-(NSMutableArray *)timeRanges;
-(void)addTimeRange:(id)arg1 ;
-(void)addDay:(int)arg1 ;
-(id)timeRangeAtIndex:(unsigned long long)arg1 ;
-(int)dayAtIndex:(unsigned long long)arg1 ;
-(void)setTimeRanges:(NSMutableArray *)arg1 ;
@end

