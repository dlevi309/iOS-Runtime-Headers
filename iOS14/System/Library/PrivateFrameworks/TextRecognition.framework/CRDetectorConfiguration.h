/*
* Generated on Thursday, January 14, 2021 at 2:25:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TextRecognition.framework/TextRecognition
*/


#import <TextRecognition/TextRecognition-Structs.h>
@class NSURL;

@interface CRDetectorConfiguration : NSObject {

	BOOL _cpuOnly;
	BOOL _logIntermediateResults;
	BOOL _runFullTile;
	BOOL _mergeFullTile;
	int _mergingType;
	NSURL* _customModelURL;
	double _tileOverlap;
	double _scoreMapScaleFactor;
	CGSize _tileSize;
	CGSize _minimumInputSize;
	CGSize _maximumInputSize;

}

@property (readonly) BOOL cpuOnly;                             //@synthesize cpuOnly=_cpuOnly - In the implementation block
@property (readonly) BOOL logIntermediateResults;              //@synthesize logIntermediateResults=_logIntermediateResults - In the implementation block
@property (readonly) NSURL * customModelURL;                   //@synthesize customModelURL=_customModelURL - In the implementation block
@property (assign) BOOL runFullTile;                           //@synthesize runFullTile=_runFullTile - In the implementation block
@property (assign) BOOL mergeFullTile;                         //@synthesize mergeFullTile=_mergeFullTile - In the implementation block
@property (readonly) CGSize tileSize;                          //@synthesize tileSize=_tileSize - In the implementation block
@property (readonly) double tileOverlap;                       //@synthesize tileOverlap=_tileOverlap - In the implementation block
@property (readonly) CGSize minimumInputSize;                  //@synthesize minimumInputSize=_minimumInputSize - In the implementation block
@property (readonly) CGSize maximumInputSize;                  //@synthesize maximumInputSize=_maximumInputSize - In the implementation block
@property (readonly) double scoreMapScaleFactor;               //@synthesize scoreMapScaleFactor=_scoreMapScaleFactor - In the implementation block
@property (assign) int mergingType;                            //@synthesize mergingType=_mergingType - In the implementation block
-(CGSize)tileSize;
-(BOOL)cpuOnly;
-(id)initWithImageReaderOptions:(id)arg1 error:(id*)arg2 ;
-(CGSize)maximumInputSize;
-(BOOL)runFullTile;
-(BOOL)mergeFullTile;
-(BOOL)logIntermediateResults;
-(int)mergingType;
-(NSURL *)customModelURL;
-(id)initV1DefaultConfig;
-(id)initV2DefaultConfig;
-(void)setRunFullTile:(BOOL)arg1 ;
-(void)setMergeFullTile:(BOOL)arg1 ;
-(double)tileOverlap;
-(CGSize)minimumInputSize;
-(double)scoreMapScaleFactor;
-(void)setMergingType:(int)arg1 ;
@end

