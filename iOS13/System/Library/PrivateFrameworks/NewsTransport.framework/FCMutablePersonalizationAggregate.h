/*
* Generated on Monday, March 1, 2021 at 2:32:49 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
*/


@protocol FCMutablePersonalizationAggregate <FCPersonalizationAggregate>
@property (assign,nonatomic) double clicks; 
@property (assign,nonatomic) double impressions; 
@property (assign,nonatomic) unsigned long long eventCount; 
@property (assign,nonatomic) double timestamp; 
@required
-(double)timestamp;
-(void)setTimestamp:(double)arg1;
-(unsigned long long)eventCount;
-(double)impressions;
-(void)setImpressions:(double)arg1;
-(double)clicks;
-(void)setClicks:(double)arg1;
-(void)setEventCount:(unsigned long long)arg1;

@end

