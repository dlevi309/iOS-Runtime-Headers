/*
* Generated on Thursday, January 14, 2021 at 2:27:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HardwareDiagnostics.framework/HardwareDiagnostics
*/


@class NSMutableDictionary, NSDictionary;

@interface HDLab : NSObject {

	NSMutableDictionary* _experiments;
	NSMutableDictionary* _analyses;
	NSMutableDictionary* _diagnostics;

}

@property (nonatomic,readonly) NSDictionary * availableExperiments; 
@property (nonatomic,readonly) NSDictionary * availableAnalyses; 
@property (nonatomic,readonly) NSDictionary * availableDiagnostics; 
+(id)defaultLab;
-(id)init;
-(void)addDiagnosticWithName:(id)arg1 experimentName:(id)arg2 analysisName:(id)arg3 block:(/*^block*/id)arg4 ;
-(id)experimentWithName:(id)arg1 ;
-(id)analysisWithName:(id)arg1 ;
-(void)addDiagnosticWithName:(id)arg1 block:(/*^block*/id)arg2 ;
-(void)addExperimentWithName:(id)arg1 block:(/*^block*/id)arg2 ;
-(void)addAnalysisWithName:(id)arg1 block:(/*^block*/id)arg2 ;
-(void)addDiagnosticWithName:(id)arg1 summary:(id)arg2 experimentName:(id)arg3 analysisName:(id)arg4 ;
-(id)diagnosticWithName:(id)arg1 ;
-(NSDictionary *)availableExperiments;
-(NSDictionary *)availableAnalyses;
-(NSDictionary *)availableDiagnostics;
@end

