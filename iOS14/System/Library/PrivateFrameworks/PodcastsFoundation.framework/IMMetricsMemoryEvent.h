/*
* Generated on Thursday, January 14, 2021 at 2:26:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PodcastsFoundation.framework/PodcastsFoundation
*/

#import <PodcastsFoundation/IMAMSMetricsEvent.h>

@interface IMMetricsMemoryEvent : IMAMSMetricsEvent

@property (assign,nonatomic) unsigned long long usedBytes; 
@property (assign,nonatomic) unsigned long long totalBytes; 
-(id)init;
-(unsigned long long)totalBytes;
-(id)shortDescription;
-(void)setTotalBytes:(unsigned long long)arg1 ;
-(unsigned long long)usedBytes;
-(void)setUsedBytes:(unsigned long long)arg1 ;
@end

