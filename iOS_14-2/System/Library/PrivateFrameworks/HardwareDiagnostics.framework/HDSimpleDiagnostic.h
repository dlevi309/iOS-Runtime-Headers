/*
* Generated on Thursday, January 14, 2021 at 2:27:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id<HDExperiment>)experiment;
-(NSString *)summary;
-(id)diagnosticDescription;
-(id<HDAnalysis>)analysis;
-(void)setSummary:(NSString *)arg1 ;
-(void)setExperiment:(id<HDExperiment>)arg1 ;
-(void)setAnalysis:(id<HDAnalysis>)arg1 ;
-(id)initWithExperiment:(id)arg1 analysis:(id)arg2 ;
-(id)runWithParameters:(id)arg1 host:(id)arg2 error:(id*)arg3 ;
@end

