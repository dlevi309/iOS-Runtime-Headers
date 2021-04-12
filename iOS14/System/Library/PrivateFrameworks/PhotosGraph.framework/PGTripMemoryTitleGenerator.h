/*
* Generated on Thursday, January 14, 2021 at 2:25:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
*/

#import <PhotosGraph/PGTitleGenerator.h>

@interface PGTripMemoryTitleGenerator : PGTitleGenerator {

	unsigned long long _type;

}

@property (nonatomic,readonly) unsigned long long type;              //@synthesize type=_type - In the implementation block
-(id)_typeString;
-(unsigned long long)type;
-(id)_locationTitle;
-(void)_generateTitleAndSubtitleWithResult:(/*^block*/id)arg1 ;
-(id)initWithMomentNodes:(id)arg1 type:(unsigned long long)arg2 ;
-(id)initWithHighlightNode:(id)arg1 ;
-(id)_timeTitleForTrip;
-(id)_timeTitleForWeekend;
-(id)_timeTitleForTripAndWeekend;
-(BOOL)_triggerDefaultTitleGenerationIfNil;
@end

