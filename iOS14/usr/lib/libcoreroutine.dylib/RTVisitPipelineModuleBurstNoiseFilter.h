/*
* Generated on Thursday, January 14, 2021 at 2:26:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /usr/lib/libcoreroutine.dylib
*/

#import <libcoreroutine.dylib/libcoreroutine.dylib-Structs.h>
#import <libobjc.A.dylib/RTVisitPipelineModule.h>

@class NSMutableArray, RTDistanceCalculator, NSString;

@interface RTVisitPipelineModuleBurstNoiseFilter : NSObject <RTVisitPipelineModule> {

	BOOL _firstTimeProcessingModule;
	NSMutableArray* _potentialNoiseLocations;
	unsigned long long _lastProcessedIndex;
	double _maximumFlankDistance;
	double _minimumNoiseToLeftFlankDistance;
	unsigned long long _maximumWindowSize;
	double _maxHorizontalAccuracy;
	RTDistanceCalculator* _distanceCalculator;

}

@property (nonatomic,readonly) BOOL firstTimeProcessingModule;                         //@synthesize firstTimeProcessingModule=_firstTimeProcessingModule - In the implementation block
@property (nonatomic,readonly) NSMutableArray * potentialNoiseLocations;               //@synthesize potentialNoiseLocations=_potentialNoiseLocations - In the implementation block
@property (nonatomic,readonly) unsigned long long lastProcessedIndex;                  //@synthesize lastProcessedIndex=_lastProcessedIndex - In the implementation block
@property (nonatomic,readonly) double maximumFlankDistance;                            //@synthesize maximumFlankDistance=_maximumFlankDistance - In the implementation block
@property (nonatomic,readonly) double minimumNoiseToLeftFlankDistance;                 //@synthesize minimumNoiseToLeftFlankDistance=_minimumNoiseToLeftFlankDistance - In the implementation block
@property (nonatomic,readonly) unsigned long long maximumWindowSize;                   //@synthesize maximumWindowSize=_maximumWindowSize - In the implementation block
@property (nonatomic,readonly) double maxHorizontalAccuracy;                           //@synthesize maxHorizontalAccuracy=_maxHorizontalAccuracy - In the implementation block
@property (nonatomic,readonly) RTDistanceCalculator * distanceCalculator;              //@synthesize distanceCalculator=_distanceCalculator - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(unsigned long long)getIndexInArray:(id)arg1 followedByCount:(unsigned long long)arg2 ;
-(unsigned long long)getFirstUnprocessableIndex;
-(double)maxHorizontalAccuracy;
-(void)discardObsoleteLocations;
-(void)addLocations:(id)arg1 ;
-(BOOL)firstTimeProcessingModule;
-(unsigned long long)maximumWindowSize;
-(void)identifyNoiseInWindowRange:(NSRange)arg1 ;
-(void)removeNoiseLocations;
-(unsigned long long)getFirstIndexToProcess;
-(id)process:(id)arg1 ;
-(RTDistanceCalculator *)distanceCalculator;
-(void)filterNoise;
-(NSMutableArray *)potentialNoiseLocations;
-(double)maximumFlankDistance;
-(unsigned long long)lastProcessedIndex;
-(id)initWithMaximumFlankDistance:(double)arg1 minimumNoiseToLeftFlankDistance:(double)arg2 maximumWindowSize:(unsigned long long)arg3 maxHorizontalAccuracy:(double)arg4 distanceCalculator:(id)arg5 ;
-(double)minimumNoiseToLeftFlankDistance;
-(id)getFilteredLocations;
-(id)initWithMaximumFlankDistance:(double)arg1 minimumNoiseToLeftFlankDistance:(double)arg2 maximumWindowSize:(unsigned long long)arg3 maxHorizontalAccuracy:(double)arg4 ;
-(id)initWithHyperParameter:(id)arg1 ;
-(void)setLastProcessedIndex:(unsigned long long)arg1 ;
@end

