/*
* Generated on Thursday, January 14, 2021 at 2:24:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomEvaluator.framework/SymptomEvaluator
*/


@class NSMutableDictionary, Filter;

@interface SymptomFilter : NSObject {

	unsigned _targetSymptomId;
	NSMutableDictionary* _potentialFilters;
	Filter* _currentFilter;
	Filter* _finalFilter;

}

@property (assign,nonatomic) unsigned targetSymptomId;                              //@synthesize targetSymptomId=_targetSymptomId - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * potentialFilters;              //@synthesize potentialFilters=_potentialFilters - In the implementation block
@property (nonatomic,retain) Filter * currentFilter;                                //@synthesize currentFilter=_currentFilter - In the implementation block
@property (nonatomic,retain) Filter * finalFilter;                                  //@synthesize finalFilter=_finalFilter - In the implementation block
-(id)init;
-(id)description;
-(Filter *)finalFilter;
-(NSMutableDictionary *)potentialFilters;
-(Filter *)currentFilter;
-(void)setCurrentFilter:(Filter *)arg1 ;
-(void)setFinalFilter:(Filter *)arg1 ;
-(unsigned)targetSymptomId;
-(void)setTargetSymptomId:(unsigned)arg1 ;
-(int)configureItem:(id)arg1 ;
@end

