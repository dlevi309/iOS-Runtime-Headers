/*
* Generated on Monday, March 1, 2021 at 2:33:22 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
+(id)filterForName:(id)arg1 id:(id)arg2 ;
+(void)enumerateReporterFiltersUsingBlock:(/*^block*/id)arg1 ;
+(id)filterForId:(unsigned)arg1 ;
-(id)init;
-(id)description;
-(int)configureSymptomFilter:(id)arg1 ;
-(NSMutableArray *)symptomFilters;
-(BOOL)hasFinalTimer;
-(void)setFinalTimer:(long long)arg1 ;
-(void)updateTransportFilters;
-(void)pushTransportFilters;
-(void)pushFinalFilters;
-(void)setSymptomFilter:(id)arg1 ;
-(unsigned)reporterId;
-(NSString *)reporterName;
-(BOOL)symptomFilterChanged;
-(void)setSymptomFilterChanged:(BOOL)arg1 ;
-(NSData *)filterMessage;
@end

