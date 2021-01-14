/*
* Generated on Thursday, January 14, 2021 at 2:24:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/RecapPerformanceTesting.framework/RecapPerformanceTesting
*/

@class RCPSyntheticEventStream, NSString;


@protocol RPTScrollTestParameters <NSObject>
@property (nonatomic,readonly) RCPSyntheticEventStream * eventStream; 
@property (nonatomic,copy,readonly) id completionHandler; 
@property (nonatomic,copy) NSString * testName; 
@required
-(RCPSyntheticEventStream *)eventStream;
-(id)completionHandler;
-(void)setTestName:(id)arg1;
-(NSString *)testName;

@end

