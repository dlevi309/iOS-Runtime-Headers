/*
* Generated on Thursday, January 14, 2021 at 2:27:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
*/

#import <Catalyst/CATOperation.h>

@class NSObject, NSSet;

@interface CRKWaitForKeyValueChangeOperation : CATOperation {

	BOOL _observing;
	NSObject* _object;
	NSSet* _keyPaths;
	/*^block*/id _conditionEvaluator;

}

@property (nonatomic,readonly) NSObject * object;                            //@synthesize object=_object - In the implementation block
@property (nonatomic,copy,readonly) NSSet * keyPaths;                        //@synthesize keyPaths=_keyPaths - In the implementation block
@property (nonatomic,copy) id conditionEvaluator;                            //@synthesize conditionEvaluator=_conditionEvaluator - In the implementation block
@property (assign,getter=isObserving,nonatomic) BOOL observing;              //@synthesize observing=_observing - In the implementation block
-(NSSet *)keyPaths;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)setObserving:(BOOL)arg1 ;
-(BOOL)isAsynchronous;
-(NSObject *)object;
-(BOOL)isObserving;
-(void)main;
-(void)cancel;
-(void)endObservingObject;
-(void)setConditionEvaluator:(id)arg1 ;
-(void)beginObservingObject;
-(void)evaluateConditions;
-(id)conditionEvaluator;
-(id)initWithObject:(id)arg1 keyPaths:(id)arg2 conditionEvaluator:(/*^block*/id)arg3 ;
@end

