/*
* Generated on Thursday, January 14, 2021 at 2:24:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomEvaluator.framework/SymptomEvaluator
*/


@class NSMutableDictionary;

@interface NWActivityAlgosScore : NSObject {

	NSMutableDictionary* _recordedScores;

}

@property (nonatomic,retain) NSMutableDictionary * recordedScores;              //@synthesize recordedScores=_recordedScores - In the implementation block
+(id)sharedInstance;
+(void)processingComplete;
+(void)processNWActivitySuperMetric:(id)arg1 ;
-(void)_processingComplete;
-(id)init;
-(void)_processNWActivitySuperMetric:(id)arg1 ;
-(void)setRecordedScores:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)recordedScores;
-(id)_processNWActivityConnections:(id)arg1 ;
-(id)_scoreDictForBundleID:(id)arg1 effectiveBundleID:(id)arg2 ;
-(void)_processNWActivityTransactions:(id)arg1 scoreDict:(id)arg2 ;
-(void)_postSymptomFor:(id)arg1 withScore:(unsigned long long)arg2 ;
@end

