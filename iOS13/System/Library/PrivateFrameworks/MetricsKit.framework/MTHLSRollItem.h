/*
* Generated on Monday, March 1, 2021 at 2:35:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MetricsKit.framework/MetricsKit
*/

#import <MetricsKit/MTHLSItem.h>

@interface MTHLSRollItem : MTHLSItem {

	unsigned long long _duration;

}

@property (assign,nonatomic) unsigned long long duration;              //@synthesize duration=_duration - In the implementation block
-(unsigned long long)duration;
-(void)setDuration:(unsigned long long)arg1 ;
-(id)initWithStartOverallPosition:(unsigned long long)arg1 duration:(unsigned long long)arg2 metricsData:(id)arg3 ;
-(BOOL)containsOverallPosition:(unsigned long long)arg1 ;
-(unsigned long long)endOverallPosition;
@end

