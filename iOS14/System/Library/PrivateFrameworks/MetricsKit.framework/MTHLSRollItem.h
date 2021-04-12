/*
* Generated on Thursday, January 14, 2021 at 2:27:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MetricsKit.framework/MetricsKit
*/

#import <MetricsKit/MTHLSItem.h>

@interface MTHLSRollItem : MTHLSItem {

	unsigned long long _duration;

}

@property (assign,nonatomic) unsigned long long duration;              //@synthesize duration=_duration - In the implementation block
-(void)setDuration:(unsigned long long)arg1 ;
-(unsigned long long)duration;
-(id)initWithStartOverallPosition:(unsigned long long)arg1 duration:(unsigned long long)arg2 metricsData:(id)arg3 ;
-(BOOL)containsOverallPosition:(unsigned long long)arg1 ;
-(unsigned long long)endOverallPosition;
@end

