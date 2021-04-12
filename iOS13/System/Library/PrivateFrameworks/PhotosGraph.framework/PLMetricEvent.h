/*
* Generated on Monday, March 1, 2021 at 2:35:10 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
*/

@class NSString, NSDictionary;


@protocol PLMetricEvent <NSObject>
@property (nonatomic,readonly) NSString * identifier; 
@property (nonatomic,readonly) NSDictionary * payload; 
@required
-(NSString *)identifier;
-(NSDictionary *)payload;
-(void)gatherMetricsWithProgressBlock:(/*^block*/id)arg1;

@end

