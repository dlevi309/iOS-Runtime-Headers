/*
* Generated on Thursday, January 14, 2021 at 2:27:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSDictionary *)results;
-(void)setVerbose:(BOOL)arg1 ;
-(id)init;
-(void)setValue:(id)arg1 forKey:(id)arg2 ;
-(BOOL)verbose;
-(void)writeToFile:(id)arg1 ;
-(void)dealloc;
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

