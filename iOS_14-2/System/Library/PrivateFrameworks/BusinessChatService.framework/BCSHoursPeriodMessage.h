/*
* Generated on Thursday, January 14, 2021 at 2:27:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)dictionaryRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(id)hoursAtIndex:(unsigned long long)arg1 ;
-(void)addHours:(id)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setHours:(NSMutableArray *)arg1 ;
-(NSMutableArray *)hours;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hoursCount;
-(void)clearHours;
@end

