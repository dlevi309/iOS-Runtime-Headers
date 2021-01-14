/*
* Generated on Thursday, January 14, 2021 at 2:27:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MetricsKit.framework/MetricsKit
*/

@class NSArray;


@protocol MTMediaPlaylist <NSObject>
@property (nonatomic,readonly) NSArray * eventData; 
@optional
-(NSArray *)eventData;

@required
-(id)itemAtOverallPosition:(unsigned long long)arg1 rangeOptions:(long long)arg2;
-(id)itemsBetweenStartOverallPosition:(unsigned long long)arg1 endOverallPosition:(unsigned long long)arg2;

@end

