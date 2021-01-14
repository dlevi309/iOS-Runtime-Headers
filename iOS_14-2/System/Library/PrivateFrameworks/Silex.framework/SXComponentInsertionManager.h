/*
* Generated on Thursday, January 14, 2021 at 2:24:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id<SXComponentInsertionConditionEngine>)conditionEngine;
-(NSMutableArray *)cache;
-(id<SXUnitConverterFactory>)unitConverterFactory;
-(id<SXComponentInserterManager>)inserterManager;
-(id)initWithComponentInserterManager:(id)arg1 conditionEngine:(id)arg2 blueprintAnalyzer:(id)arg3 unitConverterFactory:(id)arg4 ;
-(id)insertForMarker:(id)arg1 inserter:(id)arg2 DOMObjectProvider:(id)arg3 layoutProvider:(id)arg4 ;
-(void)updateDOM:(id)arg1 layoutBlueprint:(id)arg2 insert:(id)arg3 marker:(id)arg4 ;
-(id)insertComponentsForBlueprint:(id)arg1 DOMObjectProvider:(id)arg2 ;
-(id<SXBlueprintAnalyzer>)blueprintAnalyzer;
@end

