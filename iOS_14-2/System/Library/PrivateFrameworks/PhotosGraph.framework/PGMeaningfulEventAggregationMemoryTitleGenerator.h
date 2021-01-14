/*
* Generated on Thursday, January 14, 2021 at 2:25:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
*/

#import <PhotosGraph/PGTitleGenerator.h>

@class NSSet;

@interface PGMeaningfulEventAggregationMemoryTitleGenerator : PGTitleGenerator {

	unsigned long long _meaning;
	NSSet* _features;
	NSSet* _meaningfulEvents;

}

@property (nonatomic,readonly) unsigned long long meaning;              //@synthesize meaning=_meaning - In the implementation block
@property (nonatomic,readonly) NSSet * features;                        //@synthesize features=_features - In the implementation block
@property (nonatomic,readonly) NSSet * meaningfulEvents;                //@synthesize meaningfulEvents=_meaningfulEvents - In the implementation block
+(id)_momentNodesFromMeaningfulEvents:(id)arg1 ;
-(NSSet *)meaningfulEvents;
-(NSSet *)features;
-(unsigned long long)meaning;
-(id)_subtitle;
-(void)_generateTitleAndSubtitleWithResult:(/*^block*/id)arg1 ;
-(id)_meaningLabelForTitle;
-(id)initWithMeaning:(unsigned long long)arg1 features:(id)arg2 meaningfulEvents:(id)arg3 ;
-(id)_meaningLabelForNotReliableTitle;
@end

