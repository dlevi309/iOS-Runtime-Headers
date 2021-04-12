/*
* Generated on Monday, March 1, 2021 at 2:35:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)_subtitle;
-(NSSet *)features;
-(void)_generateTitleAndSubtitleWithResult:(/*^block*/id)arg1 ;
-(unsigned long long)meaning;
-(id)_meaningLabelForTitle;
-(id)initWithMeaning:(unsigned long long)arg1 features:(id)arg2 meaningfulEvents:(id)arg3 ;
-(id)_meaningLabelForNotReliableTitle;
-(NSSet *)meaningfulEvents;
@end

