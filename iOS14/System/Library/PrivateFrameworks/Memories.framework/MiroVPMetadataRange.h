/*
* Generated on Thursday, January 14, 2021 at 2:27:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
*/

#import <Memories/Memories-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSDictionary;

@interface MiroVPMetadataRange : NSObject <NSCopying> {

	unsigned long long _type;
	unsigned long long _flags;
	int _startTimeInFrames;
	int _durationInFrames;
	NSDictionary* _analysisDict;
	double _score;

}

@property (nonatomic,readonly) NSDictionary * dictionary; 
@property (nonatomic,readonly) unsigned long long type;                  //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) unsigned long long flags;                 //@synthesize flags=_flags - In the implementation block
@property (nonatomic,readonly) int startTimeInFrames;                    //@synthesize startTimeInFrames=_startTimeInFrames - In the implementation block
@property (nonatomic,readonly) int durationInFrames;                     //@synthesize durationInFrames=_durationInFrames - In the implementation block
@property (nonatomic,readonly) NSDictionary * analysisDict;              //@synthesize analysisDict=_analysisDict - In the implementation block
@property (nonatomic,readonly) double score;                             //@synthesize score=_score - In the implementation block
+(id)descriptionForType:(unsigned long long)arg1 ;
+(id)descriptionForFlags:(unsigned long long)arg1 ;
+(void)enumerateByAscendingTypes:(id)arg1 handler:(/*^block*/id)arg2 ;
+(id)mergeRanges:(id)arg1 withRanges:(id)arg2 ;
+(id)rangeWithType:(unsigned long long)arg1 flags:(unsigned long long)arg2 startTimeInFrames:(int)arg3 durationInFrames:(int)arg4 analysisDict:(id)arg5 ;
-(int)durationInFrames;
-(id)init;
-(double)score;
-(unsigned long long)flags;
-(id)initWithDictionary:(id)arg1 ;
-(id)description;
-(NSDictionary *)dictionary;
-(unsigned long long)type;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(int)startTimeInFrames;
-(NSDictionary *)analysisDict;
-(void)_setScore:(double)arg1 ;
@end

