/*
* Generated on Monday, March 1, 2021 at 2:35:10 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
*/

#import <PhotosGraph/PGTitleGenerator.h>

@interface PGTripMemoryTitleGenerator : PGTitleGenerator {

	unsigned long long _type;

}

@property (nonatomic,readonly) unsigned long long type;              //@synthesize type=_type - In the implementation block
-(unsigned long long)type;
-(id)_typeString;
-(id)_locationTitle;
-(void)_generateTitleAndSubtitleWithResult:(/*^block*/id)arg1 ;
-(id)initWithMomentNodes:(id)arg1 type:(unsigned long long)arg2 ;
-(id)initWithHighlightNode:(id)arg1 ;
-(id)_timeTitleForTrip;
-(id)_timeTitleForWeekend;
-(id)_timeTitleForTripAndWeekend;
-(BOOL)_triggerDefaultTitleGenerationIfNil;
@end

