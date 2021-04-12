/*
* Generated on Thursday, January 14, 2021 at 2:27:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
*/

@class NSArray;


@protocol WFStatisticsSampleProvider <NSObject>
@property (nonatomic,readonly) BOOL canProvideDataSamples; 
@property (nonatomic,readonly) NSArray * dataSamples; 
@required
-(void)updateValue:(id)arg1 fromStatisticsOperation:(long long)arg2;
-(BOOL)canProvideDataSamples;
-(NSArray *)dataSamples;

@end

