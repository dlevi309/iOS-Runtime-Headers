/*
* Generated on Thursday, January 14, 2021 at 2:24:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)resolveObjects:(id)arg1 context:(id)arg2 ;
-(SXJSONObjectMerger *)objectMerger;
-(id<SXConditionValidating>)conditionValidator;
-(id)initWithConditionValidator:(id)arg1 objectMerger:(id)arg2 ;
@end

