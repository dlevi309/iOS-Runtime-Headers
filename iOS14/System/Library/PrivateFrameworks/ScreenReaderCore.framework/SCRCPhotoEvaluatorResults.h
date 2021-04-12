/*
* Generated on Thursday, January 14, 2021 at 2:28:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ScreenReaderCore.framework/ScreenReaderCore
*/


@class SCRCPhotoEvaluatorResult;

@interface SCRCPhotoEvaluatorResults : NSObject {

	SCRCPhotoEvaluatorResult* _blurResult;
	SCRCPhotoEvaluatorResult* _colorResult;
	SCRCPhotoEvaluatorResult* _luminanceResult;

}

@property (nonatomic,readonly) SCRCPhotoEvaluatorResult * blurResult;                   //@synthesize blurResult=_blurResult - In the implementation block
@property (nonatomic,readonly) SCRCPhotoEvaluatorResult * colorResult;                  //@synthesize colorResult=_colorResult - In the implementation block
@property (nonatomic,readonly) SCRCPhotoEvaluatorResult * luminanceResult;              //@synthesize luminanceResult=_luminanceResult - In the implementation block
-(SCRCPhotoEvaluatorResult *)blurResult;
-(SCRCPhotoEvaluatorResult *)luminanceResult;
-(id)initWithBlurResult:(id)arg1 colorResult:(id)arg2 luminanceResult:(id)arg3 ;
-(SCRCPhotoEvaluatorResult *)colorResult;
@end

