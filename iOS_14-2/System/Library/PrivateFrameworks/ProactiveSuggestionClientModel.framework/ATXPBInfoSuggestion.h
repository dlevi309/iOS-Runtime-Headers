/*
* Generated on Thursday, January 14, 2021 at 2:22:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ProactiveSuggestionClientModel.framework/ProactiveSuggestionClientModel
*/

#import <ProactiveSuggestionClientModel/ProactiveSuggestionClientModel-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSData;

@interface ATXPBInfoSuggestion : PBCodable <NSCopying> {

	long long _confidenceLevel;
	double _endDate;
	long long _layouts;
	double _relevanceScore;
	double _startDate;
	NSString* _appBundleIdentifier;
	NSData* _archivedIntent;
	NSData* _archivedMetadata;
	NSString* _clientModelId;
	NSString* _criterion;
	NSString* _sourceIdentifier;
	NSString* _suggestionIdentifier;
	NSString* _widgetBundleIdentifier;
	NSString* _widgetKind;
	SCD_Struct_AT4 _has;

}

@property (nonatomic,readonly) BOOL hasAppBundleIdentifier; 
@property (nonatomic,retain) NSString * appBundleIdentifier;                 //@synthesize appBundleIdentifier=_appBundleIdentifier - In the implementation block
@property (nonatomic,readonly) BOOL hasWidgetBundleIdentifier; 
@property (nonatomic,retain) NSString * widgetBundleIdentifier;              //@synthesize widgetBundleIdentifier=_widgetBundleIdentifier - In the implementation block
@property (nonatomic,readonly) BOOL hasWidgetKind; 
@property (nonatomic,retain) NSString * widgetKind;                          //@synthesize widgetKind=_widgetKind - In the implementation block
@property (assign,nonatomic) BOOL hasLayouts; 
@property (assign,nonatomic) long long layouts;                              //@synthesize layouts=_layouts - In the implementation block
@property (nonatomic,readonly) BOOL hasSuggestionIdentifier; 
@property (nonatomic,retain) NSString * suggestionIdentifier;                //@synthesize suggestionIdentifier=_suggestionIdentifier - In the implementation block
@property (nonatomic,readonly) BOOL hasClientModelId; 
@property (nonatomic,retain) NSString * clientModelId;                       //@synthesize clientModelId=_clientModelId - In the implementation block
@property (nonatomic,readonly) BOOL hasArchivedIntent; 
@property (nonatomic,retain) NSData * archivedIntent;                        //@synthesize archivedIntent=_archivedIntent - In the implementation block
@property (nonatomic,readonly) BOOL hasArchivedMetadata; 
@property (nonatomic,retain) NSData * archivedMetadata;                      //@synthesize archivedMetadata=_archivedMetadata - In the implementation block
@property (nonatomic,readonly) BOOL hasSourceIdentifier; 
@property (nonatomic,retain) NSString * sourceIdentifier;                    //@synthesize sourceIdentifier=_sourceIdentifier - In the implementation block
@property (assign,nonatomic) BOOL hasConfidenceLevel; 
@property (assign,nonatomic) long long confidenceLevel;                      //@synthesize confidenceLevel=_confidenceLevel - In the implementation block
@property (assign,nonatomic) BOOL hasRelevanceScore; 
@property (assign,nonatomic) double relevanceScore;                          //@synthesize relevanceScore=_relevanceScore - In the implementation block
@property (assign,nonatomic) BOOL hasStartDate; 
@property (assign,nonatomic) double startDate;                               //@synthesize startDate=_startDate - In the implementation block
@property (assign,nonatomic) BOOL hasEndDate; 
@property (assign,nonatomic) double endDate;                                 //@synthesize endDate=_endDate - In the implementation block
@property (nonatomic,readonly) BOOL hasCriterion; 
@property (nonatomic,retain) NSString * criterion;                           //@synthesize criterion=_criterion - In the implementation block
-(id)dictionaryRepresentation;
-(void)setSourceIdentifier:(NSString *)arg1 ;
-(NSString *)clientModelId;
-(double)endDate;
-(NSString *)widgetKind;
-(void)setStartDate:(double)arg1 ;
-(double)startDate;
-(BOOL)hasStartDate;
-(void)setHasStartDate:(BOOL)arg1 ;
-(void)setHasEndDate:(BOOL)arg1 ;
-(NSString *)appBundleIdentifier;
-(void)setEndDate:(double)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setLayouts:(long long)arg1 ;
-(double)relevanceScore;
-(id)description;
-(long long)layouts;
-(void)setWidgetKind:(NSString *)arg1 ;
-(void)setRelevanceScore:(double)arg1 ;
-(unsigned long long)hash;
-(NSString *)widgetBundleIdentifier;
-(void)setAppBundleIdentifier:(NSString *)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)setClientModelId:(NSString *)arg1 ;
-(BOOL)hasSourceIdentifier;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(long long)confidenceLevel;
-(NSString *)suggestionIdentifier;
-(void)setSuggestionIdentifier:(NSString *)arg1 ;
-(NSString *)criterion;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSData *)archivedIntent;
-(NSData *)archivedMetadata;
-(BOOL)hasRelevanceScore;
-(void)setWidgetBundleIdentifier:(NSString *)arg1 ;
-(void)setCriterion:(NSString *)arg1 ;
-(void)setArchivedIntent:(NSData *)arg1 ;
-(void)setArchivedMetadata:(NSData *)arg1 ;
-(void)setHasRelevanceScore:(BOOL)arg1 ;
-(BOOL)hasClientModelId;
-(BOOL)hasLayouts;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)hasAppBundleIdentifier;
-(BOOL)hasWidgetBundleIdentifier;
-(BOOL)hasWidgetKind;
-(void)setHasLayouts:(BOOL)arg1 ;
-(BOOL)hasSuggestionIdentifier;
-(BOOL)hasArchivedIntent;
-(BOOL)hasArchivedMetadata;
-(void)setHasConfidenceLevel:(BOOL)arg1 ;
-(BOOL)hasCriterion;
-(BOOL)hasConfidenceLevel;
-(BOOL)hasEndDate;
-(NSString *)sourceIdentifier;
-(void)setConfidenceLevel:(long long)arg1 ;
@end

