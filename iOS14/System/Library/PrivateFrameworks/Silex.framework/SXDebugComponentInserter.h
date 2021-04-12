/*
* Generated on Thursday, January 14, 2021 at 2:24:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
*/

#import <libobjc.A.dylib/SXComponentInserter.h>

@protocol SXComponentInsertionConditionEngine;
@class NSString;

@interface SXDebugComponentInserter : NSObject <SXComponentInserter> {

	id<SXComponentInsertionConditionEngine> _conditionEngine;

}

@property (nonatomic,readonly) id<SXComponentInsertionConditionEngine> conditionEngine;              //@synthesize conditionEngine=_conditionEngine - In the implementation block
@property (nonatomic,readonly) unsigned long long componentTraits; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<SXComponentInsertionConditionEngine>)conditionEngine;
-(unsigned long long)componentTraits;
-(id)conditionsForDOMObjectProvider:(id)arg1 ;
-(id)componentInsertForMarker:(id)arg1 DOMObjectProvider:(id)arg2 layoutProvider:(id)arg3 ;
-(BOOL)validateMarker:(id)arg1 DOMObjectProvider:(id)arg2 layoutProvider:(id)arg3 ;
@end

