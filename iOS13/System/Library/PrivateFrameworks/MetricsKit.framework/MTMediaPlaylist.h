/*
* Generated on Monday, March 1, 2021 at 2:35:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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

