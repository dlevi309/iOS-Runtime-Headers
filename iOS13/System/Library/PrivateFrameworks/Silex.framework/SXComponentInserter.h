/*
* Generated on Monday, March 1, 2021 at 2:33:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
*/


@protocol SXComponentInserter <NSObject>
@property (nonatomic,readonly) id<SXComponentInsertionConditionEngine> conditionEngine; 
@property (nonatomic,readonly) unsigned long long componentTraits; 
@optional
-(id)cacheValidatorForCache:(id)arg1 DOMObjectProvider:(id)arg2;
-(void)componentInsertionCompleted;

@required
-(id)conditionsForDOMObjectProvider:(id)arg1;
-(BOOL)validateMarker:(id)arg1 DOMObjectProvider:(id)arg2 layoutProvider:(id)arg3;
-(id)componentInsertForMarker:(id)arg1 DOMObjectProvider:(id)arg2 layoutProvider:(id)arg3;
-(id<SXComponentInsertionConditionEngine>)conditionEngine;
-(unsigned long long)componentTraits;

@end

