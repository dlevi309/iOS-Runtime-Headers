/*
* Generated on Monday, March 1, 2021 at 2:34:40 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/BusinessChatService.framework/BusinessChatService
*/

#import <BusinessChatService/BusinessChatService-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray;

@interface BCSHoursPeriodMessage : PBCodable <NSCopying> {

	NSMutableArray* _hours;

}

@property (nonatomic,retain) NSMutableArray * hours;              //@synthesize hours=_hours - In the implementation block
+(Class)hoursType;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSMutableArray *)hours;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setHours:(NSMutableArray *)arg1 ;
-(unsigned long long)hoursCount;
-(void)clearHours;
-(id)hoursAtIndex:(unsigned long long)arg1 ;
-(void)addHours:(id)arg1 ;
@end

