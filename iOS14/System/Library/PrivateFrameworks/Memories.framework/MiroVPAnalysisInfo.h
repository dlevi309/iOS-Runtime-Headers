/*
* Generated on Thursday, January 14, 2021 at 2:27:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
*/

#import <Memories/Memories-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@protocol MiroVPMetadataRangeMergeable;
@class NSDate, NSArray;

@interface MiroVPAnalysisInfo : NSObject <NSCopying> {

	unsigned long long _flags;
	unsigned long long _performedAnalysisTypes;
	long long _analysisVersion;
	NSDate* _performedAnalysisDate;
	double _qualityScore;
	double _junkScore;
	NSArray*<MiroVPMetadataRangeMergeable> _ranges;
	id context;

}

@property (nonatomic,readonly) unsigned long long flags;                                   //@synthesize flags=_flags - In the implementation block
@property (nonatomic,readonly) unsigned long long performedAnalysisTypes;                  //@synthesize performedAnalysisTypes=_performedAnalysisTypes - In the implementation block
@property (nonatomic,readonly) long long analysisVersion;                                  //@synthesize analysisVersion=_analysisVersion - In the implementation block
@property (nonatomic,readonly) NSDate * performedAnalysisDate;                             //@synthesize performedAnalysisDate=_performedAnalysisDate - In the implementation block
@property (nonatomic,readonly) double qualityScore;                                        //@synthesize qualityScore=_qualityScore - In the implementation block
@property (nonatomic,readonly) double junkScore;                                           //@synthesize junkScore=_junkScore - In the implementation block
@property (nonatomic,readonly) NSArray*<MiroVPMetadataRangeMergeable> ranges;              //@synthesize ranges=_ranges - In the implementation block
@property (nonatomic,retain) id context; 
+(id)analysisInfoWithFlags:(unsigned long long)arg1 analysisVersion:(long long)arg2 performedAnalysisTypes:(unsigned long long)arg3 performedAnalysisDate:(id)arg4 qualityScore:(double)arg5 junkScore:(double)arg6 ranges:(id)arg7 ;
+(id)descriptionForAnalysisTypes:(unsigned long long)arg1 ;
-(NSArray*<MiroVPMetadataRangeMergeable>)ranges;
-(unsigned long long)flags;
-(id)context;
-(id)description;
-(double)qualityScore;
-(double)junkScore;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setContext:(id)arg1 ;
-(long long)analysisVersion;
-(unsigned long long)performedAnalysisTypes;
-(NSDate *)performedAnalysisDate;
@end

