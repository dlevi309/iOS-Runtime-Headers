/*
* Generated on Thursday, January 14, 2021 at 2:24:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomEvaluator.framework/SymptomEvaluator
*/


@class NSString, NSMutableArray;

@interface SymptomStore : NSObject {

	unsigned symptomIdent;
	NSString* symptomName;
	NSString* symptomKey;
	NSMutableArray* symptomHistory;
	unsigned symptomMinRetainTime;
	unsigned symptomMinSavedCount;
	double* symptomArrivalTimes;
	unsigned symptomArrivalTimeNextIdx;
	NSString* _symptomDescription;

}

@property (assign,nonatomic) unsigned symptomIdent; 
@property (nonatomic,retain) NSString * symptomKey; 
@property (nonatomic,retain) NSString * symptomName; 
@property (nonatomic,retain) NSString * symptomDescription;                //@synthesize symptomDescription=_symptomDescription - In the implementation block
@property (nonatomic,retain) NSMutableArray * symptomHistory; 
+(int)configure:(id)arg1 ;
+(void)initialize;
+(void)resetSymptomsWithKey:(id)arg1 ;
+(id)nameFromSymptomKey:(id)arg1 ;
+(void)noteReceivedSymptom:(id)arg1 ;
+(void)_createForName:(id)arg1 key:(id)arg2 id:(unsigned)arg3 symptomDescription:(id)arg4 ;
+(unsigned)numSymptomsWithKey:(id)arg1 retainTime:(unsigned)arg2 ;
+(id)description;
+(id)descriptionFromSymptomName:(id)arg1 ;
+(id)storedSymptomsWithKey:(id)arg1 ;
+(id)nameFromReporterId:(unsigned)arg1 ;
+(void)setRetainTime:(unsigned)arg1 forSymptom:(id)arg2 ;
+(id)storeFromSymptomKey:(id)arg1 ;
+(id)nameFromSymptomId:(unsigned)arg1 ;
+(void)setRetainCount:(unsigned)arg1 forSymptom:(id)arg2 ;
+(int)addFromReporter:(id)arg1 ;
+(id)storeFromSymptomName:(id)arg1 ;
+(id)idFromSymptomName:(id)arg1 ;
+(id)keyFromSymptomName:(id)arg1 ;
+(id)idFromReporterName:(id)arg1 ;
+(void)pruneSymptomsWithKey:(id)arg1 ;
+(id)keyFromSymptomId:(unsigned)arg1 ;
-(NSString *)symptomDescription;
-(void)setRetainTime:(unsigned)arg1 ;
-(void)noteReceivedSymptom:(id)arg1 ;
-(NSMutableArray *)symptomHistory;
-(void)setSymptomKey:(NSString *)arg1 ;
-(id)description;
-(unsigned)numSymptomsWithRetainTime:(unsigned)arg1 ;
-(void)_pruneSymptomsForDate:(id)arg1 ;
-(NSString *)symptomKey;
-(void)setRetainCount:(unsigned)arg1 ;
-(void)setSymptomName:(NSString *)arg1 ;
-(void)setSymptomHistory:(NSMutableArray *)arg1 ;
-(NSString *)symptomName;
-(unsigned)symptomIdent;
-(void)setSymptomIdent:(unsigned)arg1 ;
-(void)setSymptomDescription:(NSString *)arg1 ;
@end

