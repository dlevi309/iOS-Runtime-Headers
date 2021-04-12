/*
* Generated on Thursday, January 14, 2021 at 2:22:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/


@class NSDictionary;

@interface PXVideoStabilizationRecipeSource : NSObject {

	long long _recipeLoadSignpost;
	BOOL _allowsOnDemandPixelAnalysis;
	unsigned long long _allowedAnalysisTypes;
	NSDictionary* _debugInfo;
	NSDictionary* _analyticsPayload;

}

@property (nonatomic,copy) NSDictionary * debugInfo;                               //@synthesize debugInfo=_debugInfo - In the implementation block
@property (nonatomic,copy) NSDictionary * analyticsPayload;                        //@synthesize analyticsPayload=_analyticsPayload - In the implementation block
@property (assign,nonatomic) unsigned long long allowedAnalysisTypes;              //@synthesize allowedAnalysisTypes=_allowedAnalysisTypes - In the implementation block
@property (assign,nonatomic) BOOL allowsOnDemandPixelAnalysis;                     //@synthesize allowsOnDemandPixelAnalysis=_allowsOnDemandPixelAnalysis - In the implementation block
-(id)loadStabilizationRecipe:(id*)arg1 analysisType:(out unsigned long long*)arg2 ;
-(void)setAllowedAnalysisTypes:(unsigned long long)arg1 ;
-(id)_loadStabilizationRecipe:(id*)arg1 analysisType:(out unsigned long long*)arg2 ;
-(BOOL)allowsOnDemandPixelAnalysis;
-(void)setAllowsOnDemandPixelAnalysis:(BOOL)arg1 ;
-(void)setDebugInfo:(NSDictionary *)arg1 ;
-(void)setAnalyticsPayload:(NSDictionary *)arg1 ;
-(id)init;
-(unsigned long long)allowedAnalysisTypes;
-(NSDictionary *)analyticsPayload;
-(NSDictionary *)debugInfo;
@end

