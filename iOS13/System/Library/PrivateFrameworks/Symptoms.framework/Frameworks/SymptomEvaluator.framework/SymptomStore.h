/*
* Generated on Monday, March 1, 2021 at 2:33:22 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
+(id)description;
+(void)initialize;
+(int)configure:(id)arg1 ;
+(unsigned)numSymptomsWithKey:(id)arg1 retainTime:(unsigned)arg2 ;
+(id)keyFromSymptomName:(id)arg1 ;
+(void)resetSymptomsWithKey:(id)arg1 ;
+(id)nameFromSymptomKey:(id)arg1 ;
+(id)descriptionFromSymptomName:(id)arg1 ;
+(id)idFromReporterName:(id)arg1 ;
+(id)idFromSymptomName:(id)arg1 ;
+(void)setRetainCount:(unsigned)arg1 forSymptom:(id)arg2 ;
+(void)setRetainTime:(unsigned)arg1 forSymptom:(id)arg2 ;
+(id)storedSymptomsWithKey:(id)arg1 ;
+(id)storeFromSymptomName:(id)arg1 ;
+(id)keyFromSymptomId:(unsigned)arg1 ;
+(void)_createForName:(id)arg1 key:(id)arg2 id:(unsigned)arg3 symptomDescription:(id)arg4 ;
+(int)addFromReporter:(id)arg1 ;
+(id)storeFromSymptomKey:(id)arg1 ;
+(void)noteReceivedSymptom:(id)arg1 ;
+(id)nameFromSymptomId:(unsigned)arg1 ;
+(id)nameFromReporterId:(unsigned)arg1 ;
+(void)pruneSymptomsWithKey:(id)arg1 ;
-(id)description;
-(void)setSymptomName:(NSString *)arg1 ;
-(unsigned)symptomIdent;
-(NSString *)symptomDescription;
-(NSString *)symptomName;
-(void)setSymptomHistory:(NSMutableArray *)arg1 ;
-(void)setSymptomIdent:(unsigned)arg1 ;
-(void)setSymptomKey:(NSString *)arg1 ;
-(void)setSymptomDescription:(NSString *)arg1 ;
-(void)noteReceivedSymptom:(id)arg1 ;
-(void)setRetainTime:(unsigned)arg1 ;
-(void)setRetainCount:(unsigned)arg1 ;
-(NSMutableArray *)symptomHistory;
-(unsigned)numSymptomsWithRetainTime:(unsigned)arg1 ;
-(void)_pruneSymptomsForDate:(id)arg1 ;
-(NSString *)symptomKey;
@end

