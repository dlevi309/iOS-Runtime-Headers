/*
* Generated on Thursday, January 14, 2021 at 2:27:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppleDepth.framework/AppleDepth
*/

#import <AppleDepth/ADPipelineParameters.h>

@interface ADPearlColorPipelineParameters : ADPipelineParameters {

	float _minDisparity;
	float _maxDisparity;

}

@property (assign,nonatomic) float minDisparity;              //@synthesize minDisparity=_minDisparity - In the implementation block
@property (assign,nonatomic) float maxDisparity;              //@synthesize maxDisparity=_maxDisparity - In the implementation block
-(id)init;
-(float)minDisparity;
-(void)setMinDisparity:(float)arg1 ;
-(float)maxDisparity;
-(void)setMaxDisparity:(float)arg1 ;
@end

