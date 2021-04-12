/*
* Generated on Thursday, January 14, 2021 at 2:23:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
*/

#import <CMCapture/BWInferenceConfiguration.h>

@interface BWMonocularDepthConfiguration : BWInferenceConfiguration {

	unsigned _monocularDepthType;
	long long _depthPrioritization;

}

@property (nonatomic,readonly) unsigned monocularDepthType;                //@synthesize monocularDepthType=_monocularDepthType - In the implementation block
@property (nonatomic,readonly) long long depthPrioritization;              //@synthesize depthPrioritization=_depthPrioritization - In the implementation block
-(long long)depthPrioritization;
-(unsigned)monocularDepthType;
-(id)initWithInferenceType:(int)arg1 monocularDepthType:(unsigned)arg2 ;
@end

