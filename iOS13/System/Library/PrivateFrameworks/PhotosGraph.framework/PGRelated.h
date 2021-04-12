/*
* Generated on Monday, March 1, 2021 at 2:35:10 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(NSString *)debugDescription;
-(NSDictionary *)dictionaryRepresentation;
-(NSString *)title;
-(NSDictionary *)keywords;
-(double)score;
-(NSString *)subtitle;
-(void)setScore:(double)arg1 ;
-(PHPhotosHighlight *)highlight;
-(void)setHighlight:(PHPhotosHighlight *)arg1 ;
-(void)setDebugDescription:(NSString *)arg1 ;
-(NSDate *)localStartDate;
-(NSDate *)localEndDate;
-(NSArray *)moments;
-(void)setMoments:(NSArray *)arg1 ;
-(long long)titleCategory;
-(unsigned)aggregatedVersions;
-(double)matchingScore;
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
-(unsigned short)relatedAlgorithmsVersion;
-(void)setRelatedAlgorithmsVersion:(unsigned short)arg1 ;
-(void)_addKeywordsFromKeywords:(id)arg1 ;
-(void)_addKeywords:(id)arg1 forRelatedType:(unsigned long long)arg2 ;
-(void)setMatchingScore:(double)arg1 ;
-(void)setTitleCategory:(long long)arg1 ;
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

