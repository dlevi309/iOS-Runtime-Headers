/*
* Generated on Thursday, January 14, 2021 at 2:27:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MetricsKit.framework/MetricsKit
*/


@class NSArray;

@interface MTPAFPlaylistItem : NSObject {

	unsigned long long _start;
	unsigned long long _end;
	NSArray* _metricsData;

}

@property (assign,nonatomic) unsigned long long start;              //@synthesize start=_start - In the implementation block
@property (assign,nonatomic) unsigned long long end;                //@synthesize end=_end - In the implementation block
@property (copy) NSArray * metricsData;                             //@synthesize metricsData=_metricsData - In the implementation block
-(unsigned long long)end;
-(unsigned long long)start;
-(void)setEnd:(unsigned long long)arg1 ;
-(void)setStart:(unsigned long long)arg1 ;
-(NSArray *)metricsData;
-(void)setMetricsData:(NSArray *)arg1 ;
-(id)initWithStart:(unsigned long long)arg1 end:(unsigned long long)arg2 metricsData:(id)arg3 ;
@end

