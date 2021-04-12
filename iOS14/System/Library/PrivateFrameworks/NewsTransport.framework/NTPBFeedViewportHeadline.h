/*
* Generated on Thursday, January 14, 2021 at 2:23:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
*/

#import <NewsTransport/NewsTransport-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NTPBDate;

@interface NTPBFeedViewportHeadline : PBCodable <NSCopying> {

	SCD_Struct_NT10* _surfacedByTagIDsRefs;
	double _tileProminenceScore;
	NSString* _articleID;
	NSString* _callToActionText;
	NSString* _clusterID;
	NTPBDate* _displayDate;
	int _storyType;
	int _surfacedByArticleListIDRef;
	int _surfacedByBinIDRef;
	int _surfacedByChannelIDRef;
	int _surfacedBySectionIDRef;
	int _surfacedByTopicIDRef;
	int _topStoryType;
	BOOL _usesImageOnTopLayout;
	SCD_Struct_NT4 _has;

}

@property (nonatomic,readonly) BOOL hasArticleID; 
@property (nonatomic,retain) NSString * articleID;                                        //@synthesize articleID=_articleID - In the implementation block
@property (assign,nonatomic) BOOL hasSurfacedBySectionIDRef; 
@property (assign,nonatomic) int surfacedBySectionIDRef;                                  //@synthesize surfacedBySectionIDRef=_surfacedBySectionIDRef - In the implementation block
@property (assign,nonatomic) BOOL hasSurfacedByChannelIDRef; 
@property (assign,nonatomic) int surfacedByChannelIDRef;                                  //@synthesize surfacedByChannelIDRef=_surfacedByChannelIDRef - In the implementation block
@property (assign,nonatomic) BOOL hasSurfacedByTopicIDRef; 
@property (assign,nonatomic) int surfacedByTopicIDRef;                                    //@synthesize surfacedByTopicIDRef=_surfacedByTopicIDRef - In the implementation block
@property (assign,nonatomic) BOOL hasSurfacedByBinIDRef; 
@property (assign,nonatomic) int surfacedByBinIDRef;                                      //@synthesize surfacedByBinIDRef=_surfacedByBinIDRef - In the implementation block
@property (assign,nonatomic) BOOL hasTopStoryType; 
@property (assign,nonatomic) int topStoryType;                                            //@synthesize topStoryType=_topStoryType - In the implementation block
@property (assign,nonatomic) BOOL hasTileProminenceScore; 
@property (assign,nonatomic) double tileProminenceScore;                                  //@synthesize tileProminenceScore=_tileProminenceScore - In the implementation block
@property (assign,nonatomic) BOOL hasUsesImageOnTopLayout; 
@property (assign,nonatomic) BOOL usesImageOnTopLayout;                                   //@synthesize usesImageOnTopLayout=_usesImageOnTopLayout - In the implementation block
@property (nonatomic,readonly) unsigned long long surfacedByTagIDsRefsCount; 
@property (nonatomic,readonly) int* surfacedByTagIDsRefs; 
@property (assign,nonatomic) BOOL hasSurfacedByArticleListIDRef; 
@property (assign,nonatomic) int surfacedByArticleListIDRef;                              //@synthesize surfacedByArticleListIDRef=_surfacedByArticleListIDRef - In the implementation block
@property (nonatomic,readonly) BOOL hasClusterID; 
@property (nonatomic,retain) NSString * clusterID;                                        //@synthesize clusterID=_clusterID - In the implementation block
@property (assign,nonatomic) BOOL hasStoryType; 
@property (assign,nonatomic) int storyType;                                               //@synthesize storyType=_storyType - In the implementation block
@property (nonatomic,readonly) BOOL hasDisplayDate; 
@property (nonatomic,retain) NTPBDate * displayDate;                                      //@synthesize displayDate=_displayDate - In the implementation block
@property (nonatomic,readonly) BOOL hasCallToActionText; 
@property (nonatomic,retain) NSString * callToActionText;                                 //@synthesize callToActionText=_callToActionText - In the implementation block
-(id)dictionaryRepresentation;
-(NTPBDate *)displayDate;
-(int)storyType;
-(BOOL)hasCallToActionText;
-(BOOL)hasTopStoryType;
-(void)setSurfacedByTagIDsRefs:(int*)arg1 count:(unsigned long long)arg2 ;
-(int)surfacedByArticleListIDRef;
-(BOOL)hasStoryType;
-(BOOL)hasClusterID;
-(int*)surfacedByTagIDsRefs;
-(void)setHasSurfacedByChannelIDRef:(BOOL)arg1 ;
-(void)setSurfacedByArticleListIDRef:(int)arg1 ;
-(int)surfacedByChannelIDRef;
-(void)setSurfacedByBinIDRef:(int)arg1 ;
-(int)surfacedByTagIDsRefsAtIndex:(unsigned long long)arg1 ;
-(void)setHasTopStoryType:(BOOL)arg1 ;
-(void)setHasSurfacedByBinIDRef:(BOOL)arg1 ;
-(void)setTopStoryType:(int)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)hasSurfacedBySectionIDRef;
-(BOOL)hasTileProminenceScore;
-(NSString *)articleID;
-(BOOL)hasArticleID;
-(int)surfacedByBinIDRef;
-(void)setSurfacedByChannelIDRef:(int)arg1 ;
-(void)setSurfacedByTopicIDRef:(int)arg1 ;
-(id)description;
-(void)setHasSurfacedBySectionIDRef:(BOOL)arg1 ;
-(void)setClusterID:(NSString *)arg1 ;
-(unsigned long long)surfacedByTagIDsRefsCount;
-(int)surfacedByTopicIDRef;
-(BOOL)hasSurfacedByChannelIDRef;
-(void)setHasStoryType:(BOOL)arg1 ;
-(void)setHasTileProminenceScore:(BOOL)arg1 ;
-(NSString *)callToActionText;
-(void)setHasSurfacedByArticleListIDRef:(BOOL)arg1 ;
-(void)setArticleID:(NSString *)arg1 ;
-(int)surfacedBySectionIDRef;
-(void)setTileProminenceScore:(double)arg1 ;
-(void)setDisplayDate:(NTPBDate *)arg1 ;
-(unsigned long long)hash;
-(void)setCallToActionText:(NSString *)arg1 ;
-(BOOL)usesImageOnTopLayout;
-(BOOL)readFrom:(id)arg1 ;
-(void)addSurfacedByTagIDsRefs:(int)arg1 ;
-(double)tileProminenceScore;
-(void)setUsesImageOnTopLayout:(BOOL)arg1 ;
-(void)writeTo:(id)arg1 ;
-(int)topStoryType;
-(BOOL)hasSurfacedByBinIDRef;
-(void)setHasSurfacedByTopicIDRef:(BOOL)arg1 ;
-(BOOL)hasDisplayDate;
-(void)setSurfacedBySectionIDRef:(int)arg1 ;
-(BOOL)hasSurfacedByArticleListIDRef;
-(void)setStoryType:(int)arg1 ;
-(NSString *)clusterID;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)clearSurfacedByTagIDsRefs;
-(void)setHasUsesImageOnTopLayout:(BOOL)arg1 ;
-(BOOL)hasUsesImageOnTopLayout;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)hasSurfacedByTopicIDRef;
-(void)dealloc;
@end

