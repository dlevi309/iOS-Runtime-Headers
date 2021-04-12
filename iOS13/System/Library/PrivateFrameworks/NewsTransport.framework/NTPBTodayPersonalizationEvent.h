/*
* Generated on Monday, March 1, 2021 at 2:32:50 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
*/

#import <NewsTransport/NewsTransport-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSMutableArray;

@interface NTPBTodayPersonalizationEvent : PBCodable <NSCopying> {

	double _createdAt;
	long long _groupType;
	long long _orderInGroup;
	long long _overallOrder;
	long long _sectionOrder;
	int _action;
	NSString* _articleId;
	NSString* _headlinePublisher;
	NSMutableArray* _headlineTopics;
	NSString* _personalizationSectionFeatureId;
	SCD_Struct_NT8 _has;

}

@property (assign,nonatomic) BOOL hasAction; 
@property (assign,nonatomic) int action;                                              //@synthesize action=_action - In the implementation block
@property (nonatomic,readonly) BOOL hasArticleId; 
@property (nonatomic,retain) NSString * articleId;                                    //@synthesize articleId=_articleId - In the implementation block
@property (nonatomic,retain) NSMutableArray * headlineTopics;                         //@synthesize headlineTopics=_headlineTopics - In the implementation block
@property (nonatomic,readonly) BOOL hasHeadlinePublisher; 
@property (nonatomic,retain) NSString * headlinePublisher;                            //@synthesize headlinePublisher=_headlinePublisher - In the implementation block
@property (assign,nonatomic) BOOL hasCreatedAt; 
@property (assign,nonatomic) double createdAt;                                        //@synthesize createdAt=_createdAt - In the implementation block
@property (assign,nonatomic) BOOL hasOrderInGroup; 
@property (assign,nonatomic) long long orderInGroup;                                  //@synthesize orderInGroup=_orderInGroup - In the implementation block
@property (assign,nonatomic) BOOL hasOverallOrder; 
@property (assign,nonatomic) long long overallOrder;                                  //@synthesize overallOrder=_overallOrder - In the implementation block
@property (assign,nonatomic) BOOL hasSectionOrder; 
@property (assign,nonatomic) long long sectionOrder;                                  //@synthesize sectionOrder=_sectionOrder - In the implementation block
@property (nonatomic,readonly) BOOL hasPersonalizationSectionFeatureId; 
@property (nonatomic,retain) NSString * personalizationSectionFeatureId;              //@synthesize personalizationSectionFeatureId=_personalizationSectionFeatureId - In the implementation block
@property (assign,nonatomic) BOOL hasGroupType; 
@property (assign,nonatomic) long long groupType;                                     //@synthesize groupType=_groupType - In the implementation block
+(Class)headlineTopicsType;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(int)action;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)setAction:(int)arg1 ;
-(void)setHasAction:(BOOL)arg1 ;
-(BOOL)hasAction;
-(double)createdAt;
-(void)setCreatedAt:(double)arg1 ;
-(BOOL)hasCreatedAt;
-(long long)groupType;
-(void)setGroupType:(long long)arg1 ;
-(NSString *)headlinePublisher;
-(NSString *)personalizationSectionFeatureId;
-(NSMutableArray *)headlineTopics;
-(long long)overallOrder;
-(long long)sectionOrder;
-(void)setArticleId:(NSString *)arg1 ;
-(BOOL)hasArticleId;
-(NSString *)articleId;
-(void)setHasGroupType:(BOOL)arg1 ;
-(BOOL)hasGroupType;
-(void)addHeadlineTopics:(id)arg1 ;
-(void)setHeadlinePublisher:(NSString *)arg1 ;
-(void)setPersonalizationSectionFeatureId:(NSString *)arg1 ;
-(void)clearHeadlineTopics;
-(unsigned long long)headlineTopicsCount;
-(id)headlineTopicsAtIndex:(unsigned long long)arg1 ;
-(BOOL)hasHeadlinePublisher;
-(void)setHasCreatedAt:(BOOL)arg1 ;
-(void)setOrderInGroup:(long long)arg1 ;
-(void)setHasOrderInGroup:(BOOL)arg1 ;
-(BOOL)hasOrderInGroup;
-(void)setOverallOrder:(long long)arg1 ;
-(void)setHasOverallOrder:(BOOL)arg1 ;
-(BOOL)hasOverallOrder;
-(void)setSectionOrder:(long long)arg1 ;
-(void)setHasSectionOrder:(BOOL)arg1 ;
-(BOOL)hasSectionOrder;
-(BOOL)hasPersonalizationSectionFeatureId;
-(void)setHeadlineTopics:(NSMutableArray *)arg1 ;
-(long long)orderInGroup;
@end

