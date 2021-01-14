/*
* Generated on Thursday, January 14, 2021 at 2:26:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /usr/lib/libcoreroutine.dylib
*/


@class NSMutableArray, NSMutableDictionary, NSDictionary;

@interface RTInferredMapItemDeduperState : NSObject {

	BOOL _canIngest;
	NSMutableArray* _uniqueInferredMapItems;
	NSMutableDictionary* _intermediateUUIDToInferredMapItemsMap;
	NSDictionary* _intermediateUUIDToInferredMapItemMap;
	NSDictionary* _dedupedUUIDToMapItemMap;

}

@property (assign,nonatomic) BOOL canIngest;                                                           //@synthesize canIngest=_canIngest - In the implementation block
@property (nonatomic,retain) NSMutableArray * uniqueInferredMapItems;                                  //@synthesize uniqueInferredMapItems=_uniqueInferredMapItems - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * intermediateUUIDToInferredMapItemsMap;              //@synthesize intermediateUUIDToInferredMapItemsMap=_intermediateUUIDToInferredMapItemsMap - In the implementation block
@property (nonatomic,retain) NSDictionary * intermediateUUIDToInferredMapItemMap;                      //@synthesize intermediateUUIDToInferredMapItemMap=_intermediateUUIDToInferredMapItemMap - In the implementation block
@property (nonatomic,retain) NSDictionary * dedupedUUIDToMapItemMap;                                   //@synthesize dedupedUUIDToMapItemMap=_dedupedUUIDToMapItemMap - In the implementation block
-(id)init;
-(void)resetState;
-(id)mapItemForDedupedUUID:(id)arg1 error:(id*)arg2 ;
-(id)allDedupedUUIDsWithError:(id*)arg1 ;
-(BOOL)enumerateDedupedUUIDToMapItemMapUsingBlock:(/*^block*/id)arg1 error:(id*)arg2 ;
-(id)allUniqueMapItemsWithError:(id*)arg1 ;
-(id)combinedInferredMapItemFromInferredMapItems:(id)arg1 error:(id*)arg2 ;
-(BOOL)finalizeState:(id*)arg1 ;
-(id)mapItemForIntermediateUUID:(id)arg1 error:(id*)arg2 ;
-(BOOL)ingestInferredMapItemWithIntermediateUUID:(id)arg1 error:(id*)arg2 ;
-(id)inferredMapItemFromInferredMapItemWithIntermediateUUID:(id)arg1 error:(id*)arg2 ;
-(BOOL)canIngest;
-(void)setCanIngest:(BOOL)arg1 ;
-(NSMutableArray *)uniqueInferredMapItems;
-(void)setUniqueInferredMapItems:(NSMutableArray *)arg1 ;
-(NSMutableDictionary *)intermediateUUIDToInferredMapItemsMap;
-(void)setIntermediateUUIDToInferredMapItemsMap:(NSMutableDictionary *)arg1 ;
-(NSDictionary *)intermediateUUIDToInferredMapItemMap;
-(void)setIntermediateUUIDToInferredMapItemMap:(NSDictionary *)arg1 ;
-(NSDictionary *)dedupedUUIDToMapItemMap;
-(void)setDedupedUUIDToMapItemMap:(NSDictionary *)arg1 ;
@end

