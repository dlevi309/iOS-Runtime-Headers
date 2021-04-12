/*
* Generated on Monday, March 1, 2021 at 2:33:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TimeSync.framework/TimeSync
*/

#import <TimeSync/TSTimeErrorAnalysis.h>

@class NSArray;

@interface TSMaximumTimeIntervalErrorAnalysis : TSTimeErrorAnalysis {

	double* _negativeTimeErrors;
	double* _mtie;

}

@property (nonatomic,copy,readonly) NSArray * mtie; 
+(id)variableName;
+(id)additionalScriptInitialization;
+(id)additionalScriptRecords;
+(id)additionalScriptPlots:(id)arg1 ;
+(id)plotYLabel;
+(id)plotTitle;
+(id)plotYLimits:(id)arg1 ;
+(id)plotSize;
-(void)dealloc;
-(void)_performAnalysisFromWindowSize:(long long)arg1 toWindowSize:(long long)arg2 stepSize:(long long)arg3 ;
-(BOOL)exportAnalysisToDirectoryURL:(id)arg1 withFilename:(id)arg2 fromStartWindowSize:(long long)arg3 toEndWindowSize:(long long)arg4 stepSize:(long long)arg5 ;
-(id)initWithTimeErrorValues:(id)arg1 ;
-(BOOL)exportAnalysisToDirectoryURL:(id)arg1 ;
-(BOOL)exportTimeErrorsToDirectoryURL:(id)arg1 ;
-(NSArray *)mtie;
-(id)mtieFromStartWindowSize:(long long)arg1 toEndWindowSize:(long long)arg2 stepSize:(long long)arg3 ;
@end

