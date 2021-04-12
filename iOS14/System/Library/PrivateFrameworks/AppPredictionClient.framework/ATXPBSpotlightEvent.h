/*
* Generated on Thursday, January 14, 2021 at 2:24:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionClient.framework/AppPredictionClient
*/

#import <AppPredictionClient/AppPredictionClient-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSMutableArray, ATXPBSpotlightEventMetadata;

@interface ATXPBSpotlightEvent : PBCodable <NSCopying> {

	double _date;
	NSString* _actionBlendingCacheId;
	NSString* _actionConsumerSubType;
	NSMutableArray* _actionSuggestionIds;
	NSString* _appBlendingCacheId;
	NSString* _appConsumerSubType;
	NSMutableArray* _appSuggestionIds;
	int _eventType;
	ATXPBSpotlightEventMetadata* _metadata;
	SCD_Struct_AT5 _has;

}

@property (assign,nonatomic) BOOL hasDate; 
@property (assign,nonatomic) double date;                                         //@synthesize date=_date - In the implementation block
@property (assign,nonatomic) BOOL hasEventType; 
@property (assign,nonatomic) int eventType;                                       //@synthesize eventType=_eventType - In the implementation block
@property (nonatomic,readonly) BOOL hasAppConsumerSubType; 
@property (nonatomic,retain) NSString * appConsumerSubType;                       //@synthesize appConsumerSubType=_appConsumerSubType - In the implementation block
@property (nonatomic,readonly) BOOL hasActionConsumerSubType; 
@property (nonatomic,retain) NSString * actionConsumerSubType;                    //@synthesize actionConsumerSubType=_actionConsumerSubType - In the implementation block
@property (nonatomic,readonly) BOOL hasAppBlendingCacheId; 
@property (nonatomic,retain) NSString * appBlendingCacheId;                       //@synthesize appBlendingCacheId=_appBlendingCacheId - In the implementation block
@property (nonatomic,readonly) BOOL hasActionBlendingCacheId; 
@property (nonatomic,retain) NSString * actionBlendingCacheId;                    //@synthesize actionBlendingCacheId=_actionBlendingCacheId - In the implementation block
@property (nonatomic,retain) NSMutableArray * appSuggestionIds;                   //@synthesize appSuggestionIds=_appSuggestionIds - In the implementation block
@property (nonatomic,retain) NSMutableArray * actionSuggestionIds;                //@synthesize actionSuggestionIds=_actionSuggestionIds - In the implementation block
@property (nonatomic,readonly) BOOL hasMetadata; 
@property (nonatomic,retain) ATXPBSpotlightEventMetadata * metadata;              //@synthesize metadata=_metadata - In the implementation block
+(Class)appSuggestionIdsType;
+(Class)actionSuggestionIdsType;
-(void)setHasEventType:(BOOL)arg1 ;
-(BOOL)hasEventType;
-(id)dictionaryRepresentation;
-(int)StringAsEventType:(id)arg1 ;
-(BOOL)hasDate;
-(id)eventTypeAsString:(int)arg1 ;
-(void)setEventType:(int)arg1 ;
-(int)eventType;
-(BOOL)hasMetadata;
-(void)mergeFrom:(id)arg1 ;
-(void)setDate:(double)arg1 ;
-(void)setMetadata:(ATXPBSpotlightEventMetadata *)arg1 ;
-(id)description;
-(void)setHasDate:(BOOL)arg1 ;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(double)date;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(ATXPBSpotlightEventMetadata *)metadata;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(NSString *)appBlendingCacheId;
-(NSString *)actionBlendingCacheId;
-(NSMutableArray *)appSuggestionIds;
-(NSMutableArray *)actionSuggestionIds;
-(NSString *)appConsumerSubType;
-(NSString *)actionConsumerSubType;
-(void)setAppConsumerSubType:(NSString *)arg1 ;
-(void)setActionConsumerSubType:(NSString *)arg1 ;
-(void)addAppSuggestionIds:(id)arg1 ;
-(void)addActionSuggestionIds:(id)arg1 ;
-(void)setAppBlendingCacheId:(NSString *)arg1 ;
-(void)setActionBlendingCacheId:(NSString *)arg1 ;
-(unsigned long long)appSuggestionIdsCount;
-(void)clearAppSuggestionIds;
-(id)appSuggestionIdsAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)actionSuggestionIdsCount;
-(void)clearActionSuggestionIds;
-(id)actionSuggestionIdsAtIndex:(unsigned long long)arg1 ;
-(BOOL)hasAppConsumerSubType;
-(BOOL)hasActionConsumerSubType;
-(BOOL)hasAppBlendingCacheId;
-(BOOL)hasActionBlendingCacheId;
-(void)setAppSuggestionIds:(NSMutableArray *)arg1 ;
-(void)setActionSuggestionIds:(NSMutableArray *)arg1 ;
@end

