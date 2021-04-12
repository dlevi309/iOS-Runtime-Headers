/*
* Generated on Thursday, January 14, 2021 at 2:26:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PodcastsFoundation.framework/PodcastsFoundation
*/

#import <libobjc.A.dylib/IMMetricsControllerProtocol.h>

@protocol OS_dispatch_queue;
@class NSString, AMSMetrics, NSObject;

@interface IMMetricsController : NSObject <IMMetricsControllerProtocol> {

	BOOL _shouldSuppressUserInfo;
	BOOL _shouldIgnoreDNU;
	BOOL _isLoading;
	NSString* _topic;
	AMSMetrics* _metricsController;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (nonatomic,retain) AMSMetrics * metricsController;                  //@synthesize metricsController=_metricsController - In the implementation block
@property (nonatomic,retain) NSString * topic;                                //@synthesize topic=_topic - In the implementation block
@property (assign,nonatomic) BOOL isLoading;                                  //@synthesize isLoading=_isLoading - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;              //@synthesize queue=_queue - In the implementation block
@property (assign,nonatomic) BOOL shouldSuppressUserInfo;                     //@synthesize shouldSuppressUserInfo=_shouldSuppressUserInfo - In the implementation block
@property (assign,nonatomic) BOOL shouldIgnoreDNU;                            //@synthesize shouldIgnoreDNU=_shouldIgnoreDNU - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setTopic:(NSString *)arg1 ;
-(NSString *)topic;
-(BOOL)isLoading;
-(void)recordEvent:(id)arg1 ;
-(AMSMetrics *)metricsController;
-(id)initWithTopic:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(BOOL)shouldSuppressUserInfo;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setMetricsController:(AMSMetrics *)arg1 ;
-(void)setShouldSuppressUserInfo:(BOOL)arg1 ;
-(void)setIsLoading:(BOOL)arg1 ;
-(void)flushImmediately;
-(void)setShouldIgnoreDNU:(BOOL)arg1 ;
-(void)addAdditionalFieldsToEvent:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)getMetricsController:(/*^block*/id)arg1 ;
-(BOOL)shouldIgnoreDNU;
@end

