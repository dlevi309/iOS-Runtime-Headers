/*
* Generated on Monday, March 1, 2021 at 2:33:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TimeSync.framework/TimeSync
*/

#import <TimeSync/TSTimeErrorAnalysis.h>

@class NSArray;

@interface TSAllanDeviationAnalysis : TSTimeErrorAnalysis {

	double* _adev;

}

@property (nonatomic,copy,readonly) NSArray * adev; 
+(id)variableName;
+(id)plotYLabel;
+(id)plotTitle;
+(id)plotSize;
-(void)dealloc;
-(long long)analysisLimit;
-(void)_performAnalysisFromWindowSize:(long long)arg1 toWindowSize:(long long)arg2 stepSize:(long long)arg3 ;
-(BOOL)exportAnalysisToDirectoryURL:(id)arg1 withFilename:(id)arg2 fromStartWindowSize:(long long)arg3 toEndWindowSize:(long long)arg4 stepSize:(long long)arg5 ;
-(id)initWithTimeErrorValues:(id)arg1 ;
-(BOOL)exportAnalysisToDirectoryURL:(id)arg1 ;
-(BOOL)exportTimeErrorsToDirectoryURL:(id)arg1 ;
-(NSArray *)adev;
-(id)adevFromStartWindowSize:(long long)arg1 toEndWindowSize:(long long)arg2 stepSize:(long long)arg3 ;
@end

