/*
* Generated on Thursday, January 14, 2021 at 2:25:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)cleanup;
-(void)dealloc;
-(id)sceneprintByItemIdentifierWithItems:(id)arg1 ;
-(id)deduplicatedItemsWithItems:(id)arg1 debugInfo:(id)arg2 progressBlock:(/*^block*/id)arg3 ;
-(id)itemsNeedingSceneprintInTimeClusters:(id)arg1 ;
-(BOOL)usesAdaptiveSimilarStacking;
-(void)setUsesAdaptiveSimilarStacking:(BOOL)arg1 ;
@end

