/*
* Generated on Thursday, January 14, 2021 at 2:23:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AXMediaUtilities.framework/AXMediaUtilities
*/

#import <AXMediaUtilities/AXMEvaluationNode.h>

@class NSArray, NSURL;

@interface AXMMobileAssetEvaluationNode : AXMEvaluationNode {

	NSArray* _mlModels;
	NSURL* _mobileAssetBaseURL;

}

@property (nonatomic,readonly) NSArray * mlModels;                      //@synthesize mlModels=_mlModels - In the implementation block
@property (nonatomic,readonly) NSURL * mobileAssetBaseURL;              //@synthesize mobileAssetBaseURL=_mobileAssetBaseURL - In the implementation block
-(id)modelURLs;
-(void)_downloadAssetsIfNecessary;
-(id)modelResourceNames;
-(id)mlModelClasses;
-(id)mobileAssetType;
-(unsigned long long)minSupportedFormatVersion;
-(unsigned long long)maxSupportedFormatVersion;
-(void)setModelURLs:(id)arg1 ;
-(NSURL *)mobileAssetBaseURL;
-(NSArray *)mlModels;
-(void)evaluate:(id)arg1 metrics:(id)arg2 ;
-(id)initWithIdentifier:(id)arg1 ;
@end

