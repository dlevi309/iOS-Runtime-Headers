/*
* Generated on Thursday, January 14, 2021 at 2:23:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
*/

#import <CMCapture/BWInferenceConfiguration.h>

@interface BWFastStereoDisparityConfiguration : BWInferenceConfiguration {

	unsigned long long _disparityOrientation;
	unsigned _disparityType;
	long long _disparityPrioritization;

}

@property (assign,nonatomic) unsigned long long disparityOrientation;              //@synthesize disparityOrientation=_disparityOrientation - In the implementation block
@property (nonatomic,readonly) unsigned disparityType;                             //@synthesize disparityType=_disparityType - In the implementation block
@property (nonatomic,readonly) long long disparityPrioritization;                  //@synthesize disparityPrioritization=_disparityPrioritization - In the implementation block
-(id)initWithInferenceType:(int)arg1 disparityOrientation:(unsigned long long)arg2 disparityType:(unsigned)arg3 ;
-(unsigned long long)disparityOrientation;
-(long long)disparityPrioritization;
-(void)setDisparityOrientation:(unsigned long long)arg1 ;
-(unsigned)disparityType;
@end

