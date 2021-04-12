/*
* Generated on Thursday, January 14, 2021 at 2:27:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
*/


@protocol CRKOrderedOneToManyKVOAccumulatorDelegate;
@class CRKPointerSet, NSMapTable, NSMutableArray, NSString, NSObject;

@interface CRKOrderedOneToManyKVOAccumulator : NSObject {

	CRKPointerSet* mInsertedObjects;
	CRKPointerSet* mReplacementObjects;
	NSMapTable* mIndexForDeletedObject;
	NSMapTable* mOriginalIndexOfMovedObject;
	NSMutableArray* mObservedShadow;
	long long mInitialArrayCount;
	id<CRKOrderedOneToManyKVOAccumulatorDelegate> _delegate;
	NSString* _observedKeyPath;
	NSObject* _observedObject;

}

@property (nonatomic,readonly) BOOL hasChanges; 
@property (nonatomic,copy) NSString * observedKeyPath;                                                   //@synthesize observedKeyPath=_observedKeyPath - In the implementation block
@property (assign,nonatomic,__weak) NSObject * observedObject;                                           //@synthesize observedObject=_observedObject - In the implementation block
@property (assign,nonatomic,__weak) id<CRKOrderedOneToManyKVOAccumulatorDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(id<CRKOrderedOneToManyKVOAccumulatorDelegate>)delegate;
-(void)_drain;
-(NSObject *)observedObject;
-(void)setDelegate:(id<CRKOrderedOneToManyKVOAccumulatorDelegate>)arg1 ;
-(BOOL)hasChanges;
-(id)initWithObject:(id)arg1 keyPath:(id)arg2 ;
-(void)_reset;
-(void)dealloc;
-(NSString *)observedKeyPath;
-(BOOL)_integrateChange:(id)arg1 toArray:(id)arg2 ;
-(unsigned long long)_prestateIndexForImmediateIndex:(unsigned long long)arg1 ;
-(void)_validateArrayChangeToFinalCount:(long long)arg1 accumulatedResults:(id)arg2 ;
-(id)_resultsToArriveAtArray:(id)arg1 ;
-(void)setObservedKeyPath:(NSString *)arg1 ;
-(void)setObservedObject:(NSObject *)arg1 ;
@end

