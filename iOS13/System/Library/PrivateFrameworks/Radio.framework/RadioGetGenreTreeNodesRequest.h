/*
* Generated on Monday, March 1, 2021 at 2:34:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Radio.framework/Radio
*/

#import <Radio/RadioRequest.h>

@class SSURLConnectionRequest, SSMetricsConfiguration, SSMetricsPageEvent;

@interface RadioGetGenreTreeNodesRequest : RadioRequest {

	unsigned long long _parentNodeID;
	SSURLConnectionRequest* _request;
	SSMetricsConfiguration* _metricsConfiguration;
	SSMetricsPageEvent* _metricsPageEvent;

}

@property (nonatomic,retain,readonly) SSMetricsConfiguration * metricsConfiguration;              //@synthesize metricsConfiguration=_metricsConfiguration - In the implementation block
@property (nonatomic,copy,readonly) SSMetricsPageEvent * metricsPageEvent;                        //@synthesize metricsPageEvent=_metricsPageEvent - In the implementation block
+(id)requestBagKey;
+(id)fallbackRequestPath;
+(id)responseContentKey;
+(id)cacheKeyForGenreWithNodeID:(unsigned long long)arg1 ;
-(id)init;
-(void)startWithCompletionHandler:(/*^block*/id)arg1 ;
-(SSMetricsPageEvent *)metricsPageEvent;
-(SSMetricsConfiguration *)metricsConfiguration;
-(id)initWithParentNodeID:(unsigned long long)arg1 ;
-(id)_genreTreeByApplyingResponse:(id)arg1 ;
-(void)startWithCachedCompletionHandler:(/*^block*/id)arg1 networkCompletionHandler:(/*^block*/id)arg2 ;
@end

