/*
* Generated on Monday, March 1, 2021 at 2:33:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
*/


@class VCPDatabaseReader, NSArray, NSSet, NSDictionary, PHAsset;

@interface VCPDatabaseBatchIterator : NSObject {

	VCPDatabaseReader* _reader;
	NSArray* _assets;
	NSSet* _resultsTypes;
	int _batchSize;
	int _idxLast;
	int _idxCurrent;
	NSDictionary* _batchAnalyses;
	PHAsset* _asset;
	NSDictionary* _analysis;

}

@property (nonatomic,readonly) PHAsset * asset;                      //@synthesize asset=_asset - In the implementation block
@property (nonatomic,readonly) NSDictionary * analysis;              //@synthesize analysis=_analysis - In the implementation block
+(id)iteratorForAssets:(id)arg1 withDatabaseReader:(id)arg2 resultTypes:(id)arg3 batchSize:(int)arg4 ;
-(BOOL)next;
-(PHAsset *)asset;
-(void)nextBatch;
-(id)initWithDatabaseReader:(id)arg1 forAssets:(id)arg2 resultsTypes:(id)arg3 batchSize:(int)arg4 ;
-(NSDictionary *)analysis;
@end

