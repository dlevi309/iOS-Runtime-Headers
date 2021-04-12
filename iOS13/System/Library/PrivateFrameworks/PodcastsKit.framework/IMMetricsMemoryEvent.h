/*
* Generated on Monday, March 1, 2021 at 2:35:12 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PodcastsKit.framework/PodcastsKit
*/

#import <PodcastsKit/IMAMSMetricsEvent.h>

@interface IMMetricsMemoryEvent : IMAMSMetricsEvent

@property (assign,nonatomic) unsigned long long usedBytes; 
@property (assign,nonatomic) unsigned long long totalBytes; 
-(id)init;
-(id)shortDescription;
-(unsigned long long)totalBytes;
-(void)setTotalBytes:(unsigned long long)arg1 ;
-(unsigned long long)usedBytes;
-(void)setUsedBytes:(unsigned long long)arg1 ;
@end

