/*
* Generated on Monday, March 1, 2021 at 2:34:34 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ACTFramework.framework/ACTFramework
*/


@class NSMutableDictionary, NSDictionary;

@interface ACTSlowmoResults : NSObject {

	NSMutableDictionary* _results;
	BOOL _verbose;
	double _minTimeBetweenFrames;

}

@property (readonly) NSDictionary * results;                 //@synthesize results=_results - In the implementation block
@property (assign) BOOL verbose;                             //@synthesize verbose=_verbose - In the implementation block
@property (assign) double minTimeBetweenFrames;              //@synthesize minTimeBetweenFrames=_minTimeBetweenFrames - In the implementation block
-(id)init;
-(void)dealloc;
-(void)setValue:(id)arg1 forKey:(id)arg2 ;
-(NSDictionary *)results;
-(void)writeToFile:(id)arg1 ;
-(BOOL)verbose;
-(void)setVerbose:(BOOL)arg1 ;
-(void)dumpClusters;
-(id)copyClusters;
-(void)mergeClusters:(id)arg1 cluster2:(id)arg2 ;
-(void)addFrame:(double)arg1 frameValue:(int)arg2 ;
-(void)performPass1Clustering;
-(void)performPass2Clustering;
-(void)reduceToSingleTimeRange;
-(void)addVerboseResult:(id)arg1 ;
-(double)minTimeBetweenFrames;
-(void)setMinTimeBetweenFrames:(double)arg1 ;
@end

