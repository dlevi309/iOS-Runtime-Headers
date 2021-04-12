/*
* Generated on Monday, March 1, 2021 at 2:35:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
*/

#import <Memories/Memories-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@protocol MiroVPMetadataRangeMergeable;
@class NSDate, NSArray;

@interface MiroVPAnalysisInfo : NSObject <NSCopying> {

	unsigned long long _flags;
	long long _analysisVersion;
	unsigned long long _performedAnalysisTypes;
	NSDate* _performedAnalysisDate;
	double _qualityScore;
	double _junkScore;
	NSArray*<MiroVPMetadataRangeMergeable> _ranges;
	id context;

}

@property (nonatomic,readonly) unsigned long long flags;                                   //@synthesize flags=_flags - In the implementation block
@property (nonatomic,readonly) long long analysisVersion;                                  //@synthesize analysisVersion=_analysisVersion - In the implementation block
@property (nonatomic,readonly) unsigned long long performedAnalysisTypes;                  //@synthesize performedAnalysisTypes=_performedAnalysisTypes - In the implementation block
@property (nonatomic,readonly) NSDate * performedAnalysisDate;                             //@synthesize performedAnalysisDate=_performedAnalysisDate - In the implementation block
@property (nonatomic,readonly) double qualityScore;                                        //@synthesize qualityScore=_qualityScore - In the implementation block
@property (nonatomic,readonly) double junkScore;                                           //@synthesize junkScore=_junkScore - In the implementation block
@property (nonatomic,readonly) NSArray*<MiroVPMetadataRangeMergeable> ranges;              //@synthesize ranges=_ranges - In the implementation block
@property (nonatomic,retain) id context; 
+(id)descriptionForAnalysisTypes:(unsigned long long)arg1 ;
+(id)analysisInfoWithFlags:(unsigned long long)arg1 analysisVersion:(long long)arg2 performedAnalysisTypes:(unsigned long long)arg3 performedAnalysisDate:(id)arg4 qualityScore:(double)arg5 junkScore:(double)arg6 ranges:(id)arg7 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)flags;
-(id)context;
-(void)setContext:(id)arg1 ;
-(NSArray*<MiroVPMetadataRangeMergeable>)ranges;
-(double)qualityScore;
-(double)junkScore;
-(long long)analysisVersion;
-(unsigned long long)performedAnalysisTypes;
-(NSDate *)performedAnalysisDate;
@end

