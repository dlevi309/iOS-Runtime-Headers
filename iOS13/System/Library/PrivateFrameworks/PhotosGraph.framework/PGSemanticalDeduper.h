/*
* Generated on Monday, March 1, 2021 at 2:35:10 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
*/

#import <PhotosGraph/PGDeduper.h>

@class VNSequenceRequestHandler, VNCreateSceneprintRequest;

@interface PGSemanticalDeduper : PGDeduper {

	VNSequenceRequestHandler* _sequenceRequestHandler;
	VNCreateSceneprintRequest* _sceneprintRequest;
	BOOL _usesAdaptiveSimilarStacking;

}

@property (assign,nonatomic) BOOL usesAdaptiveSimilarStacking;              //@synthesize usesAdaptiveSimilarStacking=_usesAdaptiveSimilarStacking - In the implementation block
-(void)dealloc;
-(void)cleanup;
-(id)sceneprintByItemIdentifierWithItems:(id)arg1 ;
-(id)deduplicatedItemsWithItems:(id)arg1 debugInfo:(id)arg2 progressBlock:(/*^block*/id)arg3 ;
-(id)itemsNeedingSceneprintInTimeClusters:(id)arg1 ;
-(BOOL)usesAdaptiveSimilarStacking;
-(void)setUsesAdaptiveSimilarStacking:(BOOL)arg1 ;
@end

