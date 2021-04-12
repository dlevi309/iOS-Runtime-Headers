/*
* Generated on Monday, March 1, 2021 at 2:35:12 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PodcastsKit.framework/PodcastsKit
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
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(NSString *)topic;
-(void)setTopic:(NSString *)arg1 ;
-(BOOL)isLoading;
-(void)setIsLoading:(BOOL)arg1 ;
-(void)recordEvent:(id)arg1 ;
-(id)initWithTopic:(id)arg1 ;
-(BOOL)shouldSuppressUserInfo;
-(void)setShouldSuppressUserInfo:(BOOL)arg1 ;
-(AMSMetrics *)metricsController;
-(void)setMetricsController:(AMSMetrics *)arg1 ;
-(void)flushImmediately;
-(void)setShouldIgnoreDNU:(BOOL)arg1 ;
-(void)getMetricsController:(/*^block*/id)arg1 ;
-(BOOL)shouldIgnoreDNU;
@end

