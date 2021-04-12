/*
* Generated on Monday, March 1, 2021 at 2:33:47 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
*/

#import <AppPredictionInternal/AppPredictionInternal-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, ATXNotificationsPBContext, NSMutableArray;

@interface ATXNotificationsPBRecord : PBCodable <NSCopying> {

	NSString* _bundleId;
	ATXNotificationsPBContext* _context;
	NSMutableArray* _events;
	int _suppActions;
	int _timezone;
	NSString* _topic;
	SCD_Struct_AW3 _has;

}

@property (nonatomic,readonly) BOOL hasBundleId; 
@property (nonatomic,retain) NSString * bundleId;                              //@synthesize bundleId=_bundleId - In the implementation block
@property (nonatomic,readonly) BOOL hasTopic; 
@property (nonatomic,retain) NSString * topic;                                 //@synthesize topic=_topic - In the implementation block
@property (nonatomic,readonly) BOOL hasContext; 
@property (nonatomic,retain) ATXNotificationsPBContext * context;              //@synthesize context=_context - In the implementation block
@property (nonatomic,retain) NSMutableArray * events;                          //@synthesize events=_events - In the implementation block
@property (assign,nonatomic) BOOL hasSuppActions; 
@property (assign,nonatomic) int suppActions;                                  //@synthesize suppActions=_suppActions - In the implementation block
@property (assign,nonatomic) BOOL hasTimezone; 
@property (assign,nonatomic) int timezone;                                     //@synthesize timezone=_timezone - In the implementation block
+(Class)eventsType;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(ATXNotificationsPBContext *)context;
-(void)setContext:(ATXNotificationsPBContext *)arg1 ;
-(void)writeTo:(id)arg1 ;
-(NSString *)topic;
-(NSString *)bundleId;
-(void)setBundleId:(NSString *)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(NSMutableArray *)events;
-(void)setEvents:(NSMutableArray *)arg1 ;
-(void)addEvents:(id)arg1 ;
-(unsigned long long)eventsCount;
-(void)clearEvents;
-(id)eventsAtIndex:(unsigned long long)arg1 ;
-(int)timezone;
-(void)setTopic:(NSString *)arg1 ;
-(void)setTimezone:(int)arg1 ;
-(BOOL)hasTimezone;
-(BOOL)hasContext;
-(BOOL)hasBundleId;
-(void)setHasTimezone:(BOOL)arg1 ;
-(BOOL)hasTopic;
-(void)setSuppActions:(int)arg1 ;
-(void)setHasSuppActions:(BOOL)arg1 ;
-(BOOL)hasSuppActions;
-(int)suppActions;
@end

