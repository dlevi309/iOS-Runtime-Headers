/*
* Generated on Monday, March 1, 2021 at 2:32:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
*/

#import <WorkflowKit/WorkflowKit-Structs.h>
#import <libobjc.A.dylib/NSFastEnumeration.h>

@class RLMArray;

@interface RLMListBase : NSObject <NSFastEnumeration> {

	unique_ptr<RLMObservationInfo, std::__1::default_delete<RLMObservationInfo> >* _observationInfo;
	RLMArray* __rlmArray;

}

@property (nonatomic,retain) RLMArray * _rlmArray;              //@synthesize _rlmArray=__rlmArray - In the implementation block
-(id)initWithArray:(id)arg1 ;
-(unsigned long long)countByEnumeratingWithState:(SCD_Struct_RL7*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3 ;
-(id)objectsAtIndexes:(id)arg1 ;
-(id)valueForKey:(id)arg1 ;
-(id)valueForKeyPath:(id)arg1 ;
-(void)addObserver:(id)arg1 forKeyPath:(id)arg2 options:(unsigned long long)arg3 context:(void*)arg4 ;
-(RLMArray *)_rlmArray;
-(void)set_rlmArray:(RLMArray *)arg1 ;
@end

