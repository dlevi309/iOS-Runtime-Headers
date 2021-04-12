/*
* Generated on Monday, March 1, 2021 at 2:34:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HardwareDiagnostics.framework/HardwareDiagnostics
*/

#import <libobjc.A.dylib/HDDiagnostic.h>

@protocol HDExperiment, HDAnalysis;
@class NSString;

@interface HDSimpleDiagnostic : NSObject <HDDiagnostic> {

	NSString* _summary;
	id<HDExperiment> _experiment;
	id<HDAnalysis> _analysis;

}

@property (nonatomic,copy) NSString * summary;                         //@synthesize summary=_summary - In the implementation block
@property (nonatomic,retain) id<HDExperiment> experiment;              //@synthesize experiment=_experiment - In the implementation block
@property (nonatomic,retain) id<HDAnalysis> analysis;                  //@synthesize analysis=_analysis - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)summary;
-(void)setSummary:(NSString *)arg1 ;
-(id)diagnosticDescription;
-(id<HDExperiment>)experiment;
-(id<HDAnalysis>)analysis;
-(id)initWithExperiment:(id)arg1 analysis:(id)arg2 ;
-(id)runWithParameters:(id)arg1 host:(id)arg2 error:(id*)arg3 ;
-(void)setExperiment:(id<HDExperiment>)arg1 ;
-(void)setAnalysis:(id<HDAnalysis>)arg1 ;
@end

