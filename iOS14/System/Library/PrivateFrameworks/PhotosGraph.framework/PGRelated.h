/*
* Generated on Thursday, January 14, 2021 at 2:25:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
*/


@protocol PGGraphRelatableEvent;
@class NSString, PHPhotosHighlight, NSArray, NSDictionary, NSDate, PGGraphNode;

@interface PGRelated : NSObject {

	BOOL _generateTitleBasedOnKeyAsset;
	BOOL _shouldGenerateTitle;
	unsigned _aggregatedVersions;
	NSString* _debugDescription;
	PHPhotosHighlight* _highlight;
	NSArray* _moments;
	NSDictionary* _keywords;
	double _score;
	double _matchingScore;
	NSString* _title;
	NSString* _subtitle;
	long long _titleCategory;
	NSDate* _localStartDate;
	NSDate* _localEndDate;
	unsigned long long _memoryTripTitleType;
	long long _dateMatchingType;
	PGGraphNode*<PGGraphRelatableEvent> _eventNode;

}

@property (nonatomic,retain) PGGraphNode*<PGGraphRelatableEvent> eventNode;                                          //@synthesize eventNode=_eventNode - In the implementation block
@property (nonatomic,retain) PHPhotosHighlight * highlight;                                                          //@synthesize highlight=_highlight - In the implementation block
@property (nonatomic,retain) NSArray * moments;                                                                      //@synthesize moments=_moments - In the implementation block
@property (nonatomic,retain) NSString * debugDescription;                                                            //@synthesize debugDescription=_debugDescription - In the implementation block
@property (assign,nonatomic) double score;                                                                           //@synthesize score=_score - In the implementation block
@property (assign,nonatomic) double matchingScore;                                                                   //@synthesize matchingScore=_matchingScore - In the implementation block
@property (assign,nonatomic) long long titleCategory;                                                                //@synthesize titleCategory=_titleCategory - In the implementation block
@property (assign,nonatomic) long long dateMatchingType;                                                             //@synthesize dateMatchingType=_dateMatchingType - In the implementation block
@property (assign,nonatomic) unsigned long long memoryTripTitleType;                                                 //@synthesize memoryTripTitleType=_memoryTripTitleType - In the implementation block
@property (assign,getter=isGeneratingTitleBasedOnKeyAsset,nonatomic) BOOL generateTitleBasedOnKeyAsset;              //@synthesize generateTitleBasedOnKeyAsset=_generateTitleBasedOnKeyAsset - In the implementation block
@property (assign,nonatomic) BOOL shouldGenerateTitle;                                                               //@synthesize shouldGenerateTitle=_shouldGenerateTitle - In the implementation block
@property (assign,nonatomic) unsigned short graphSchemaVersion; 
@property (assign,nonatomic) unsigned short relatedAlgorithmsVersion; 
@property (nonatomic,readonly) NSString * title;                                                                     //@synthesize title=_title - In the implementation block
@property (nonatomic,readonly) NSString * subtitle;                                                                  //@synthesize subtitle=_subtitle - In the implementation block
@property (nonatomic,readonly) NSDate * localStartDate;                                                              //@synthesize localStartDate=_localStartDate - In the implementation block
@property (nonatomic,readonly) NSDate * localEndDate;                                                                //@synthesize localEndDate=_localEndDate - In the implementation block
@property (nonatomic,readonly) NSDictionary * keywords;                                                              //@synthesize keywords=_keywords - In the implementation block
@property (nonatomic,readonly) unsigned aggregatedVersions;                                                          //@synthesize aggregatedVersions=_aggregatedVersions - In the implementation block
@property (nonatomic,readonly) NSDictionary * dictionaryRepresentation; 
-(NSDictionary *)dictionaryRepresentation;
-(NSArray *)moments;
-(NSDate *)localStartDate;
-(NSDate *)localEndDate;
-(NSDictionary *)keywords;
-(double)score;
-(void)setRelatedAlgorithmsVersion:(unsigned short)arg1 ;
-(NSString *)subtitle;
-(NSString *)debugDescription;
-(void)setScore:(double)arg1 ;
-(PHPhotosHighlight *)highlight;
-(long long)titleCategory;
-(unsigned short)relatedAlgorithmsVersion;
-(void)setHighlight:(PHPhotosHighlight *)arg1 ;
-(void)setMoments:(NSArray *)arg1 ;
-(NSString *)title;
-(unsigned short)graphSchemaVersion;
-(void)setGraphSchemaVersion:(unsigned short)arg1 ;
-(id)_initWithGraphMatchingResult:(id)arg1 highlight:(id)arg2 moments:(id)arg3 needsDebugInfo:(BOOL)arg4 ;
-(id)initWithGraphMatchingResult:(id)arg1 assetCollection:(id)arg2 needsDebugInfo:(BOOL)arg3 ;
-(id)initWithGraphMatchingResult:(id)arg1 highlight:(id)arg2 needsDebugInfo:(BOOL)arg3 ;
-(id)initWithGraphMatchingResult:(id)arg1 moment:(id)arg2 needsDebugInfo:(BOOL)arg3 ;
-(id)initWithGraphMatchingResult:(id)arg1 moments:(id)arg2 tripMemoryTitleType:(unsigned long long)arg3 tripMomentNodes:(id)arg4 needsDebugInfo:(BOOL)arg5 ;
-(id)initWithMoment:(id)arg1 needsDebugInfo:(BOOL)arg2 ;
-(id)initWithHighlight:(id)arg1 needsDebugInfo:(BOOL)arg2 ;
-(void)_generateTitleWithHighlightNode:(id)arg1 referenceDateInterval:(id)arg2 ;
-(void)_generateTitleWithMomentNodes:(id)arg1 keyAsset:(id)arg2 referenceDateInterval:(id)arg3 ;
-(void)_addKeywordsFromKeywords:(id)arg1 ;
-(void)_addKeywords:(id)arg1 forRelatedType:(unsigned long long)arg2 ;
-(void)setDebugDescription:(NSString *)arg1 ;
-(double)matchingScore;
-(void)setMatchingScore:(double)arg1 ;
-(void)setTitleCategory:(long long)arg1 ;
-(unsigned)aggregatedVersions;
-(unsigned long long)memoryTripTitleType;
-(void)setMemoryTripTitleType:(unsigned long long)arg1 ;
-(long long)dateMatchingType;
-(void)setDateMatchingType:(long long)arg1 ;
-(BOOL)isGeneratingTitleBasedOnKeyAsset;
-(void)setGenerateTitleBasedOnKeyAsset:(BOOL)arg1 ;
-(BOOL)shouldGenerateTitle;
-(void)setShouldGenerateTitle:(BOOL)arg1 ;
-(PGGraphNode*<PGGraphRelatableEvent>)eventNode;
-(void)setEventNode:(PGGraphNode*<PGGraphRelatableEvent>)arg1 ;
@end

