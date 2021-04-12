/*
* Generated on Monday, March 1, 2021 at 2:33:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
*/

#import <libobjc.A.dylib/SXComponentInsertionManager.h>

@protocol SXComponentInsertionManager <NSObject>
@required
-(id)insertComponentsForBlueprint:(id)arg1 DOMObjectProvider:(id)arg2;

@end


@protocol SXComponentInsertionConditionEngine, SXComponentInserterManager, SXBlueprintAnalyzer, SXUnitConverterFactory;
@class NSMutableArray, NSString;

@interface SXComponentInsertionManager : NSObject <SXComponentInsertionManager> {

	id<SXComponentInsertionConditionEngine> _conditionEngine;
	id<SXComponentInserterManager> _inserterManager;
	id<SXBlueprintAnalyzer> _blueprintAnalyzer;
	id<SXUnitConverterFactory> _unitConverterFactory;
	NSMutableArray* _cache;

}

@property (nonatomic,readonly) id<SXComponentInserterManager> inserterManager;                       //@synthesize inserterManager=_inserterManager - In the implementation block
@property (nonatomic,readonly) id<SXComponentInsertionConditionEngine> conditionEngine;              //@synthesize conditionEngine=_conditionEngine - In the implementation block
@property (nonatomic,readonly) id<SXBlueprintAnalyzer> blueprintAnalyzer;                            //@synthesize blueprintAnalyzer=_blueprintAnalyzer - In the implementation block
@property (nonatomic,readonly) id<SXUnitConverterFactory> unitConverterFactory;                      //@synthesize unitConverterFactory=_unitConverterFactory - In the implementation block
@property (nonatomic,readonly) NSMutableArray * cache;                                               //@synthesize cache=_cache - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSMutableArray *)cache;
-(id<SXUnitConverterFactory>)unitConverterFactory;
-(id)insertComponentsForBlueprint:(id)arg1 DOMObjectProvider:(id)arg2 ;
-(id<SXComponentInsertionConditionEngine>)conditionEngine;
-(id)initWithComponentInserterManager:(id)arg1 conditionEngine:(id)arg2 blueprintAnalyzer:(id)arg3 unitConverterFactory:(id)arg4 ;
-(id<SXComponentInserterManager>)inserterManager;
-(id<SXBlueprintAnalyzer>)blueprintAnalyzer;
-(id)insertForMarker:(id)arg1 inserter:(id)arg2 DOMObjectProvider:(id)arg3 layoutProvider:(id)arg4 ;
-(void)updateDOM:(id)arg1 layoutBlueprint:(id)arg2 insert:(id)arg3 marker:(id)arg4 ;
@end

