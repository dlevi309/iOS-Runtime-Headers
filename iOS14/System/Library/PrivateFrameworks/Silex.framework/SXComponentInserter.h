/*
* Generated on Thursday, January 14, 2021 at 2:24:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
*/


@protocol SXComponentInserter <NSObject>
@property (nonatomic,readonly) id<SXComponentInsertionConditionEngine> conditionEngine; 
@property (nonatomic,readonly) unsigned long long componentTraits; 
@optional
-(void)componentInsertionCompleted;
-(id)cacheValidatorForCache:(id)arg1 DOMObjectProvider:(id)arg2;

@required
-(id<SXComponentInsertionConditionEngine>)conditionEngine;
-(unsigned long long)componentTraits;
-(id)conditionsForDOMObjectProvider:(id)arg1;
-(id)componentInsertForMarker:(id)arg1 DOMObjectProvider:(id)arg2 layoutProvider:(id)arg3;
-(BOOL)validateMarker:(id)arg1 DOMObjectProvider:(id)arg2 layoutProvider:(id)arg3;

@end

