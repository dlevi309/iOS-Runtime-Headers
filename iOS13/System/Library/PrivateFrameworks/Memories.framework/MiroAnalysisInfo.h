/*
* Generated on Monday, March 1, 2021 at 2:35:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
*/


@protocol MiroMetadataRangeMergeable;
#import <Memories/Memories-Structs.h>
@class NSDate, NSArray;

@interface MiroAnalysisInfo : NSObject {

	unsigned long long _flags;
	long long _analysisVersion;
	unsigned long long _performedAnalysisTypes;
	NSDate* _performedAnalysisDate;
	double _qualityScore;
	double _junkScore;
	NSArray*<MiroMetadataRangeMergeable> _ranges;

}

@property (assign,nonatomic) unsigned long long flags;                                 //@synthesize flags=_flags - In the implementation block
@property (assign,nonatomic) long long analysisVersion;                                //@synthesize analysisVersion=_analysisVersion - In the implementation block
@property (assign,nonatomic) unsigned long long performedAnalysisTypes;                //@synthesize performedAnalysisTypes=_performedAnalysisTypes - In the implementation block
@property (nonatomic,retain) NSDate * performedAnalysisDate;                           //@synthesize performedAnalysisDate=_performedAnalysisDate - In the implementation block
@property (assign,nonatomic) double qualityScore;                                      //@synthesize qualityScore=_qualityScore - In the implementation block
@property (assign,nonatomic) double junkScore;                                         //@synthesize junkScore=_junkScore - In the implementation block
@property (nonatomic,retain) NSArray*<MiroMetadataRangeMergeable> ranges;              //@synthesize ranges=_ranges - In the implementation block
+(id)analysisInfo;
+(id)descriptionForAnalysisTypes:(unsigned long long)arg1 ;
+(id)analysisInfoWithVPAnalysisInfo:(id)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)flags;
-(void)setFlags:(unsigned long long)arg1 ;
-(void)setRanges:(NSArray*<MiroMetadataRangeMergeable>)arg1 ;
-(NSArray*<MiroMetadataRangeMergeable>)ranges;
-(void)mergeWith:(id)arg1 ;
-(double)qualityScore;
-(void)setQualityScore:(double)arg1 ;
-(double)junkScore;
-(void)setJunkScore:(double)arg1 ;
-(long long)analysisVersion;
-(unsigned long long)performedAnalysisTypes;
-(NSDate *)performedAnalysisDate;
-(void)setAnalysisVersion:(long long)arg1 ;
-(void)setPerformedAnalysisTypes:(unsigned long long)arg1 ;
-(void)setPerformedAnalysisDate:(NSDate *)arg1 ;
@end

