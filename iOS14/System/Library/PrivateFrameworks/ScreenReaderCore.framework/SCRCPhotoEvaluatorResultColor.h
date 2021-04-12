/*
* Generated on Thursday, January 14, 2021 at 2:28:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ScreenReaderCore.framework/ScreenReaderCore
*/

#import <ScreenReaderCore/SCRCPhotoEvaluatorResult.h>

@interface SCRCPhotoEvaluatorResultColor : SCRCPhotoEvaluatorResult {

	double _redLevel;
	double _blueLevel;
	double _greenLevel;

}

@property (nonatomic,readonly) double redLevel;                //@synthesize redLevel=_redLevel - In the implementation block
@property (nonatomic,readonly) double blueLevel;               //@synthesize blueLevel=_blueLevel - In the implementation block
@property (nonatomic,readonly) double greenLevel;              //@synthesize greenLevel=_greenLevel - In the implementation block
-(id)humanReadableResult;
-(id)initWithRedLevel:(double)arg1 blueLevel:(double)arg2 greenLevel:(double)arg3 ;
-(double)redLevel;
-(double)blueLevel;
-(double)greenLevel;
@end

