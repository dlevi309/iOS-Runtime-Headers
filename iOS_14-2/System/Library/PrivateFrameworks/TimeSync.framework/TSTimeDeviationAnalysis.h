/*
* Generated on Thursday, January 14, 2021 at 2:25:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TimeSync.framework/TimeSync
*/

#import <TimeSync/TSTimeErrorAnalysis.h>

@class NSArray;

@interface TSTimeDeviationAnalysis : TSTimeErrorAnalysis {

	double* _tdev;

}

@property (nonatomic,copy,readonly) NSArray * tdev; 
+(id)variableName;
+(id)plotSize;
+(id)plotYLabel;
+(id)plotTitle;
-(NSArray *)tdev;
-(void)dealloc;
-(long long)analysisLimit;
-(long long)threadingLimit;
-(void)_performAnalysisFromWindowSize:(long long)arg1 toWindowSize:(long long)arg2 stepSize:(long long)arg3 ;
-(long long)threadingSegment;
-(BOOL)exportAnalysisToDirectoryURL:(id)arg1 withFilename:(id)arg2 fromStartWindowSize:(long long)arg3 toEndWindowSize:(long long)arg4 stepSize:(long long)arg5 ;
-(id)initWithTimeErrorValues:(id)arg1 ;
-(BOOL)exportAnalysisToDirectoryURL:(id)arg1 ;
-(BOOL)exportTimeErrorsToDirectoryURL:(id)arg1 ;
-(id)tdevFromStartWindowSize:(long long)arg1 toEndWindowSize:(long long)arg2 stepSize:(long long)arg3 ;
@end

