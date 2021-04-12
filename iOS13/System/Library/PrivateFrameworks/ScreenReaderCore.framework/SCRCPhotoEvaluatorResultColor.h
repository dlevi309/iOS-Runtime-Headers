/*
* Generated on Monday, March 1, 2021 at 2:35:15 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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

