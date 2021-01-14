/*
* Generated on Thursday, January 14, 2021 at 2:23:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
*/

#import <NewsTransport/NewsTransport-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/FCMutableTodayPersonalizationUpdate.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray, NSArray, NSString;

@interface NTPBTodayPersonalizationUpdate : PBCodable <FCMutableTodayPersonalizationUpdate, NSCopying> {

	NSMutableArray* _events;

}

@property (nonatomic,copy,readonly) NSArray * events; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) NSMutableArray * events;               //@synthesize events=_events - In the implementation block
+(Class)eventsType;
-(void)addEvent:(id)arg1 ;
-(id)dictionaryRepresentation;
-(void)addEvents:(id)arg1 ;
-(void)clearEvents;
-(void)setEvents:(NSArray *)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(id)eventsAtIndex:(unsigned long long)arg1 ;
-(NSString *)description;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(NSArray *)events;
-(unsigned long long)eventsCount;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

