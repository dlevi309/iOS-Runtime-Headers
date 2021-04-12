/*
* Generated on Thursday, January 14, 2021 at 2:27:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BusinessChatService.framework/BusinessChatService
*/


@class NSArray;

@interface BCSMetric : NSObject {

	NSArray* _postProcessingMetricHandlers;
	id _context;
	long long _metricType;

}

@property (nonatomic,readonly) NSArray * postProcessingMetricHandlers;              //@synthesize postProcessingMetricHandlers=_postProcessingMetricHandlers - In the implementation block
@property (nonatomic,readonly) id context;                                          //@synthesize context=_context - In the implementation block
@property (nonatomic,readonly) long long metricType;                                //@synthesize metricType=_metricType - In the implementation block
-(long long)metricType;
-(id)context;
-(void)submitForPostProcessing;
-(NSArray *)postProcessingMetricHandlers;
-(id)_initWithType:(long long)arg1 context:(id)arg2 postProcessingMetricHandlers:(id)arg3 ;
@end

