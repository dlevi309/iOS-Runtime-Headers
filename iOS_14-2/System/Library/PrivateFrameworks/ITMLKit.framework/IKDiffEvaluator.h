/*
* Generated on Thursday, January 14, 2021 at 2:25:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
*/


@class NSArray, NSIndexSet, NSDictionary;

@interface IKDiffEvaluator : NSObject {

	NSArray* _objects;
	NSArray* _oldObjects;
	NSIndexSet* _addedIndexes;
	NSIndexSet* _removedIndexes;
	NSDictionary* _movedIndexesByNewIndex;
	NSDictionary* _oldIndexesByNewIndex;

}

@property (nonatomic,copy,readonly) NSArray * objects;                                  //@synthesize objects=_objects - In the implementation block
@property (nonatomic,copy,readonly) NSArray * oldObjects;                               //@synthesize oldObjects=_oldObjects - In the implementation block
@property (nonatomic,copy,readonly) NSIndexSet * addedIndexes;                          //@synthesize addedIndexes=_addedIndexes - In the implementation block
@property (nonatomic,copy,readonly) NSIndexSet * removedIndexes;                        //@synthesize removedIndexes=_removedIndexes - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * movedIndexesByNewIndex;              //@synthesize movedIndexesByNewIndex=_movedIndexesByNewIndex - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * oldIndexesByNewIndex;                //@synthesize oldIndexesByNewIndex=_oldIndexesByNewIndex - In the implementation block
-(NSArray *)objects;
-(NSIndexSet *)removedIndexes;
-(NSIndexSet *)addedIndexes;
-(NSDictionary *)movedIndexesByNewIndex;
-(id)initWithObjects:(id)arg1 oldObjects:(id)arg2 hashing:(/*^block*/id)arg3 ;
-(void)enumerateCommonObjectsUsingBlock:(/*^block*/id)arg1 ;
-(void)_evaluateWithHashing:(/*^block*/id)arg1 ;
-(NSArray *)oldObjects;
-(NSDictionary *)oldIndexesByNewIndex;
@end

