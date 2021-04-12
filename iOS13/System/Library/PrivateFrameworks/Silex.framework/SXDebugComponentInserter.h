/*
* Generated on Monday, March 1, 2021 at 2:33:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
*/

#import <libobjc.A.dylib/SXComponentInserter.h>

@protocol SXComponentInsertionConditionEngine;
@class NSString;

@interface SXDebugComponentInserter : NSObject <SXComponentInserter> {

	id<SXComponentInsertionConditionEngine> _conditionEngine;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) id<SXComponentInsertionConditionEngine> conditionEngine;              //@synthesize conditionEngine=_conditionEngine - In the implementation block
@property (nonatomic,readonly) unsigned long long componentTraits; 
-(id)conditionsForDOMObjectProvider:(id)arg1 ;
-(BOOL)validateMarker:(id)arg1 DOMObjectProvider:(id)arg2 layoutProvider:(id)arg3 ;
-(id)componentInsertForMarker:(id)arg1 DOMObjectProvider:(id)arg2 layoutProvider:(id)arg3 ;
-(id<SXComponentInsertionConditionEngine>)conditionEngine;
-(unsigned long long)componentTraits;
@end

