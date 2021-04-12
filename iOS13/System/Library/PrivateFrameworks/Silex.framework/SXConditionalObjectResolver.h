/*
* Generated on Monday, March 1, 2021 at 2:33:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
*/


@protocol SXConditionValidating;
@class SXJSONObjectMerger;

@interface SXConditionalObjectResolver : NSObject {

	SXJSONObjectMerger* _objectMerger;
	id<SXConditionValidating> _conditionValidator;

}

@property (nonatomic,readonly) id<SXConditionValidating> conditionValidator;              //@synthesize conditionValidator=_conditionValidator - In the implementation block
@property (nonatomic,readonly) SXJSONObjectMerger * objectMerger;                         //@synthesize objectMerger=_objectMerger - In the implementation block
-(id)initWithConditionValidator:(id)arg1 objectMerger:(id)arg2 ;
-(id<SXConditionValidating>)conditionValidator;
-(SXJSONObjectMerger *)objectMerger;
-(id)resolveObjects:(id)arg1 context:(id)arg2 ;
@end

