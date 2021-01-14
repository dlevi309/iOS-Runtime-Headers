/*
* Generated on Thursday, January 14, 2021 at 2:22:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreML.framework/CoreML
*/


#import <CoreML/CoreML-Structs.h>
@class MLTreeEnsembleClassifier, NSMutableArray, NSMutableOrderedSet;

@interface MLGKDecisionTree : NSObject {

	TreeEnsembleClassifier* _trc;
	MLTreeEnsembleClassifier* _treeClassifier;
	NSMutableArray* __attributes;
	NSMutableOrderedSet* __objectStore;

}

@property (nonatomic,retain) NSMutableArray * _attributes;                    //@synthesize _attributes=__attributes - In the implementation block
@property (nonatomic,retain) NSMutableOrderedSet * _objectStore;              //@synthesize _objectStore=__objectStore - In the implementation block
-(id)_initWithFlattenedTree:(id)arg1 ;
-(BOOL)_saveModelAssetWithModelToPath:(id)arg1 withError:(id)arg2 ;
-(void)_loadModelAssetWithModelAtPath:(id)arg1 withError:(id)arg2 ;
-(id)_makeInferenceFromAnswers:(id)arg1 withError:(id)arg2 ;
-(void)set_attributes:(NSMutableArray *)arg1 ;
-(NSMutableOrderedSet *)_objectStore;
-(void)set_objectStore:(NSMutableOrderedSet *)arg1 ;
-(NSMutableArray *)_attributes;
-(id)_init;
-(void)dealloc;
@end

