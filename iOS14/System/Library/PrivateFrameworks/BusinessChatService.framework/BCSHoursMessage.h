/*
* Generated on Thursday, January 14, 2021 at 2:27:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BusinessChatService.framework/BusinessChatService
*/

#import <BusinessChatService/BusinessChatService-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray;

@interface BCSHoursMessage : PBCodable <NSCopying> {

	SCD_Struct_BC9* _days;
	NSMutableArray* _timeRanges;

}

@property (nonatomic,readonly) unsigned long long daysCount; 
@property (nonatomic,readonly) int* days; 
@property (nonatomic,retain) NSMutableArray * timeRanges;                 //@synthesize timeRanges=_timeRanges - In the implementation block
+(Class)timeRangeType;
-(int*)days;
-(id)dictionaryRepresentation;
-(id)timeRangeAtIndex:(unsigned long long)arg1 ;
-(void)addDay:(int)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(int)dayAtIndex:(unsigned long long)arg1 ;
-(void)setTimeRanges:(NSMutableArray *)arg1 ;
-(void)addTimeRange:(id)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(unsigned long long)daysCount;
-(void)clearDays;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(NSMutableArray *)timeRanges;
-(void)setDays:(int*)arg1 count:(unsigned long long)arg2 ;
-(unsigned long long)timeRangesCount;
-(void)clearTimeRanges;
-(id)daysAsString:(int)arg1 ;
-(int)StringAsDays:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
@end

