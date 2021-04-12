/*
* Generated on Thursday, January 14, 2021 at 2:27:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
@property (assign,nonatomic) unsigned long long performedAnalysisTypes;                //@synthesize performedAnalysisTypes=_performedAnalysisTypes - In the implementation block
@property (assign,nonatomic) long long analysisVersion;                                //@synthesize analysisVersion=_analysisVersion - In the implementation block
@property (nonatomic,retain) NSDate * performedAnalysisDate;                           //@synthesize performedAnalysisDate=_performedAnalysisDate - In the implementation block
@property (assign,nonatomic) double qualityScore;                                      //@synthesize qualityScore=_qualityScore - In the implementation block
@property (assign,nonatomic) double junkScore;                                         //@synthesize junkScore=_junkScore - In the implementation block
@property (nonatomic,retain) NSArray*<MiroMetadataRangeMergeable> ranges;              //@synthesize ranges=_ranges - In the implementation block
+(id)descriptionForAnalysisTypes:(unsigned long long)arg1 ;
+(id)analysisInfo;
+(id)analysisInfoWithVPAnalysisInfo:(id)arg1 ;
-(NSArray*<MiroMetadataRangeMergeable>)ranges;
-(unsigned long long)flags;
-(void)mergeWith:(id)arg1 ;
-(id)description;
-(double)qualityScore;
-(void)setFlags:(unsigned long long)arg1 ;
-(void)setRanges:(NSArray*<MiroMetadataRangeMergeable>)arg1 ;
-(void)setQualityScore:(double)arg1 ;
-(double)junkScore;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setJunkScore:(double)arg1 ;
-(long long)analysisVersion;
-(unsigned long long)performedAnalysisTypes;
-(NSDate *)performedAnalysisDate;
-(void)setAnalysisVersion:(long long)arg1 ;
-(void)setPerformedAnalysisTypes:(unsigned long long)arg1 ;
-(void)setPerformedAnalysisDate:(NSDate *)arg1 ;
@end

