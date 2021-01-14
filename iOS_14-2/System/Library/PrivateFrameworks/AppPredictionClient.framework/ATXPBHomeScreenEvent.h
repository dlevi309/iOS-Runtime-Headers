/*
* Generated on Thursday, January 14, 2021 at 2:24:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionClient.framework/AppPredictionClient
*/

#import <AppPredictionClient/AppPredictionClient-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, ATXPBHomeScreenEventMetadata, NSMutableArray;

@interface ATXPBHomeScreenEvent : PBCodable <NSCopying> {

	double _date;
	NSString* _appBundleId;
	NSString* _blendingCacheId;
	NSString* _eventTypeString;
	NSString* _intentDescription;
	ATXPBHomeScreenEventMetadata* _metadata;
	NSString* _reason;
	NSString* _stackId;
	int _stackKind;
	int _stackLocation;
	NSMutableArray* _suggestionIds;
	NSString* _widgetBundleId;
	NSString* _widgetKind;
	int _widgetSize;
	NSString* _widgetUniqueId;
	SCD_Struct_AT7 _has;

}

@property (assign,nonatomic) BOOL hasDate; 
@property (assign,nonatomic) double date;                                          //@synthesize date=_date - In the implementation block
@property (nonatomic,readonly) BOOL hasEventTypeString; 
@property (nonatomic,retain) NSString * eventTypeString;                           //@synthesize eventTypeString=_eventTypeString - In the implementation block
@property (nonatomic,readonly) BOOL hasReason; 
@property (nonatomic,retain) NSString * reason;                                    //@synthesize reason=_reason - In the implementation block
@property (nonatomic,readonly) BOOL hasBlendingCacheId; 
@property (nonatomic,retain) NSString * blendingCacheId;                           //@synthesize blendingCacheId=_blendingCacheId - In the implementation block
@property (nonatomic,readonly) BOOL hasStackId; 
@property (nonatomic,retain) NSString * stackId;                                   //@synthesize stackId=_stackId - In the implementation block
@property (nonatomic,readonly) BOOL hasWidgetBundleId; 
@property (nonatomic,retain) NSString * widgetBundleId;                            //@synthesize widgetBundleId=_widgetBundleId - In the implementation block
@property (nonatomic,readonly) BOOL hasWidgetKind; 
@property (nonatomic,retain) NSString * widgetKind;                                //@synthesize widgetKind=_widgetKind - In the implementation block
@property (assign,nonatomic) BOOL hasWidgetSize; 
@property (assign,nonatomic) int widgetSize;                                       //@synthesize widgetSize=_widgetSize - In the implementation block
@property (nonatomic,readonly) BOOL hasIntentDescription; 
@property (nonatomic,retain) NSString * intentDescription;                         //@synthesize intentDescription=_intentDescription - In the implementation block
@property (nonatomic,readonly) BOOL hasWidgetUniqueId; 
@property (nonatomic,retain) NSString * widgetUniqueId;                            //@synthesize widgetUniqueId=_widgetUniqueId - In the implementation block
@property (nonatomic,retain) NSMutableArray * suggestionIds;                       //@synthesize suggestionIds=_suggestionIds - In the implementation block
@property (nonatomic,readonly) BOOL hasMetadata; 
@property (nonatomic,retain) ATXPBHomeScreenEventMetadata * metadata;              //@synthesize metadata=_metadata - In the implementation block
@property (nonatomic,readonly) BOOL hasAppBundleId; 
@property (nonatomic,retain) NSString * appBundleId;                               //@synthesize appBundleId=_appBundleId - In the implementation block
@property (assign,nonatomic) BOOL hasStackKind; 
@property (assign,nonatomic) int stackKind;                                        //@synthesize stackKind=_stackKind - In the implementation block
@property (assign,nonatomic) BOOL hasStackLocation; 
@property (assign,nonatomic) int stackLocation;                                    //@synthesize stackLocation=_stackLocation - In the implementation block
+(Class)suggestionIdsType;
-(id)dictionaryRepresentation;
-(NSString *)intentDescription;
-(BOOL)hasDate;
-(BOOL)hasReason;
-(BOOL)hasAppBundleId;
-(NSString *)widgetKind;
-(void)setAppBundleId:(NSString *)arg1 ;
-(NSString *)appBundleId;
-(void)setWidgetUniqueId:(NSString *)arg1 ;
-(BOOL)hasMetadata;
-(void)mergeFrom:(id)arg1 ;
-(void)setDate:(double)arg1 ;
-(void)setMetadata:(ATXPBHomeScreenEventMetadata *)arg1 ;
-(int)widgetSize;
-(id)description;
-(void)setHasDate:(BOOL)arg1 ;
-(NSString *)stackId;
-(NSString *)reason;
-(void)setWidgetKind:(NSString *)arg1 ;
-(NSString *)blendingCacheId;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(double)date;
-(void)setIntentDescription:(NSString *)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(BOOL)hasIntentDescription;
-(void)setReason:(NSString *)arg1 ;
-(ATXPBHomeScreenEventMetadata *)metadata;
-(void)setWidgetSize:(int)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)hasWidgetKind;
-(NSString *)widgetBundleId;
-(NSString *)widgetUniqueId;
-(int)stackKind;
-(int)stackLocation;
-(NSMutableArray *)suggestionIds;
-(NSString *)eventTypeString;
-(void)setStackId:(NSString *)arg1 ;
-(void)setEventTypeString:(NSString *)arg1 ;
-(void)setBlendingCacheId:(NSString *)arg1 ;
-(void)setSuggestionIds:(NSMutableArray *)arg1 ;
-(void)setWidgetBundleId:(NSString *)arg1 ;
-(void)setStackKind:(int)arg1 ;
-(void)setStackLocation:(int)arg1 ;
-(void)addSuggestionIds:(id)arg1 ;
-(unsigned long long)suggestionIdsCount;
-(void)clearSuggestionIds;
-(id)suggestionIdsAtIndex:(unsigned long long)arg1 ;
-(BOOL)hasEventTypeString;
-(BOOL)hasBlendingCacheId;
-(BOOL)hasStackId;
-(BOOL)hasWidgetBundleId;
-(void)setHasWidgetSize:(BOOL)arg1 ;
-(BOOL)hasWidgetSize;
-(id)widgetSizeAsString:(int)arg1 ;
-(int)StringAsWidgetSize:(id)arg1 ;
-(BOOL)hasWidgetUniqueId;
-(void)setHasStackKind:(BOOL)arg1 ;
-(BOOL)hasStackKind;
-(id)stackKindAsString:(int)arg1 ;
-(int)StringAsStackKind:(id)arg1 ;
-(void)setHasStackLocation:(BOOL)arg1 ;
-(BOOL)hasStackLocation;
-(id)stackLocationAsString:(int)arg1 ;
-(int)StringAsStackLocation:(id)arg1 ;
@end

