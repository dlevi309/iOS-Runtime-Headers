/*
* Generated on Monday, March 1, 2021 at 2:32:49 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
*/

#import <NewsTransport/NewsTransport-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NTPBDate;

@interface NTPBFeedViewportHeadline : PBCodable <NSCopying> {

	SCD_Struct_NT9* _surfacedByTagIDsRefs;
	double _tileProminenceScore;
	NSString* _articleID;
	NSString* _callToActionText;
	NSString* _clusterID;
	NTPBDate* _displayDate;
	int _storyType;
	int _surfacedByBinIDRef;
	int _surfacedByChannelIDRef;
	int _surfacedBySectionIDRef;
	int _surfacedByTopicIDRef;
	int _topStoryType;
	BOOL _usesImageOnTopLayout;
	SCD_Struct_NT6 _has;

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
@property (nonatomic,readonly) BOOL hasClusterID; 
@property (nonatomic,retain) NSString * clusterID;                                        //@synthesize clusterID=_clusterID - In the implementation block
@property (assign,nonatomic) BOOL hasStoryType; 
@property (assign,nonatomic) int storyType;                                               //@synthesize storyType=_storyType - In the implementation block
@property (nonatomic,readonly) BOOL hasDisplayDate; 
@property (nonatomic,retain) NTPBDate * displayDate;                                      //@synthesize displayDate=_displayDate - In the implementation block
@property (nonatomic,readonly) BOOL hasCallToActionText; 
@property (nonatomic,retain) NSString * callToActionText;                                 //@synthesize callToActionText=_callToActionText - In the implementation block
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)setDisplayDate:(NTPBDate *)arg1 ;
-(NTPBDate *)displayDate;
-(void)setClusterID:(NSString *)arg1 ;
-(NSString *)clusterID;
-(NSString *)articleID;
-(void)setArticleID:(NSString *)arg1 ;
-(int)topStoryType;
-(void)setTopStoryType:(int)arg1 ;
-(double)tileProminenceScore;
-(void)setTileProminenceScore:(double)arg1 ;
-(NSString *)callToActionText;
-(void)setCallToActionText:(NSString *)arg1 ;
-(BOOL)usesImageOnTopLayout;
-(void)setUsesImageOnTopLayout:(BOOL)arg1 ;
-(int)storyType;
-(void)setStoryType:(int)arg1 ;
-(BOOL)hasSurfacedBySectionIDRef;
-(int)surfacedBySectionIDRef;
-(BOOL)hasSurfacedByChannelIDRef;
-(int)surfacedByChannelIDRef;
-(BOOL)hasSurfacedByTopicIDRef;
-(int)surfacedByTopicIDRef;
-(BOOL)hasSurfacedByBinIDRef;
-(int)surfacedByBinIDRef;
-(unsigned long long)surfacedByTagIDsRefsCount;
-(int)surfacedByTagIDsRefsAtIndex:(unsigned long long)arg1 ;
-(void)setSurfacedBySectionIDRef:(int)arg1 ;
-(void)setSurfacedByChannelIDRef:(int)arg1 ;
-(void)setSurfacedByTopicIDRef:(int)arg1 ;
-(void)setSurfacedByBinIDRef:(int)arg1 ;
-(void)addSurfacedByTagIDsRefs:(int)arg1 ;
-(BOOL)hasArticleID;
-(BOOL)hasStoryType;
-(void)setHasTopStoryType:(BOOL)arg1 ;
-(BOOL)hasTopStoryType;
-(BOOL)hasClusterID;
-(void)setHasStoryType:(BOOL)arg1 ;
-(void)setHasSurfacedBySectionIDRef:(BOOL)arg1 ;
-(void)setHasSurfacedByChannelIDRef:(BOOL)arg1 ;
-(void)setHasSurfacedByTopicIDRef:(BOOL)arg1 ;
-(void)setHasSurfacedByBinIDRef:(BOOL)arg1 ;
-(void)setHasTileProminenceScore:(BOOL)arg1 ;
-(BOOL)hasTileProminenceScore;
-(void)setHasUsesImageOnTopLayout:(BOOL)arg1 ;
-(BOOL)hasUsesImageOnTopLayout;
-(int*)surfacedByTagIDsRefs;
-(void)clearSurfacedByTagIDsRefs;
-(void)setSurfacedByTagIDsRefs:(int*)arg1 count:(unsigned long long)arg2 ;
-(BOOL)hasDisplayDate;
-(BOOL)hasCallToActionText;
@end

