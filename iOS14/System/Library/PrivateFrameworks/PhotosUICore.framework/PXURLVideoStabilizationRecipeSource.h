/*
* Generated on Thursday, January 14, 2021 at 2:22:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PXVideoStabilizationRecipeSource.h>

@class NSURL, PIVideoStabilizeRequest;

@interface PXURLVideoStabilizationRecipeSource : PXVideoStabilizationRecipeSource {

	NSURL* _inputVideoURL;
	PIVideoStabilizeRequest* _stabilizeRequest;

}
-(id)_loadStabilizationRecipe:(id*)arg1 analysisType:(out unsigned long long*)arg2 ;
-(id)analyticsPayload;
-(id)initWithVideoURL:(id)arg1 ;
@end

