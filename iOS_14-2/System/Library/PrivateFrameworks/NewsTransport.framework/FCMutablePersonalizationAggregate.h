/*
* Generated on Thursday, January 14, 2021 at 2:23:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
*/


@protocol FCMutablePersonalizationAggregate <FCPersonalizationAggregate>
@property (assign,nonatomic) double clicks; 
@property (assign,nonatomic) double impressions; 
@property (assign,nonatomic) unsigned long long eventCount; 
@property (assign,nonatomic) double timestamp; 
@required
-(double)impressions;
-(double)timestamp;
-(void)setEventCount:(unsigned long long)arg1;
-(double)clicks;
-(void)setClicks:(double)arg1;
-(unsigned long long)eventCount;
-(void)setTimestamp:(double)arg1;
-(void)setImpressions:(double)arg1;

@end

