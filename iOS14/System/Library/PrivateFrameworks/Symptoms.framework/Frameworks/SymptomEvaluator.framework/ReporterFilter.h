/*
* Generated on Thursday, January 14, 2021 at 2:24:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomEvaluator.framework/SymptomEvaluator
*/


@protocol OS_dispatch_source;
#import <SymptomEvaluator/SymptomEvaluator-Structs.h>
@class NSObject, NSString, NSMutableArray, NSData;

@interface ReporterFilter : NSObject {

	NSObject*<OS_dispatch_source> _finalTimer;
	BOOL _timingInProgress;
	sym_filter* _transportFilters;
	BOOL _symptomFilterChanged;
	unsigned _reporterId;
	NSString* _reporterName;
	NSMutableArray* _symptomFilters;
	NSData* _filterMessage;

}

@property (nonatomic,readonly) unsigned reporterId;                          //@synthesize reporterId=_reporterId - In the implementation block
@property (nonatomic,readonly) NSString * reporterName;                      //@synthesize reporterName=_reporterName - In the implementation block
@property (nonatomic,readonly) NSMutableArray * symptomFilters;              //@synthesize symptomFilters=_symptomFilters - In the implementation block
@property (assign,nonatomic) BOOL symptomFilterChanged;                      //@synthesize symptomFilterChanged=_symptomFilterChanged - In the implementation block
@property (nonatomic,readonly) NSData * filterMessage;                       //@synthesize filterMessage=_filterMessage - In the implementation block
+(void)initialize;
+(id)filterForId:(unsigned)arg1 ;
+(id)filterForName:(id)arg1 id:(id)arg2 ;
+(void)enumerateReporterFiltersUsingBlock:(/*^block*/id)arg1 ;
-(BOOL)hasFinalTimer;
-(id)init;
-(int)configureSymptomFilter:(id)arg1 ;
-(void)pushFinalFilters;
-(unsigned)reporterId;
-(id)description;
-(void)setSymptomFilterChanged:(BOOL)arg1 ;
-(NSString *)reporterName;
-(void)setSymptomFilter:(id)arg1 ;
-(NSMutableArray *)symptomFilters;
-(void)pushTransportFilters;
-(BOOL)symptomFilterChanged;
-(NSData *)filterMessage;
-(void)updateTransportFilters;
-(void)setFinalTimer:(long long)arg1 ;
@end

