/*
* Generated on Thursday, January 14, 2021 at 2:26:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WiFiPolicy.framework/WiFiPolicy
*/

@class NSError;


@protocol WFMeasureResult <NSObject>
@property (nonatomic,copy,readonly) NSError * error; 
@property (nonatomic,readonly) double downlinkThroughput; 
@required
-(NSError *)error;
-(double)downlinkThroughput;

@end

