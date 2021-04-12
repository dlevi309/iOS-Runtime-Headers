/*
* Generated on Thursday, January 14, 2021 at 2:23:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

