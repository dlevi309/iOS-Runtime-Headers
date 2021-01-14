/*
* Generated on Thursday, January 14, 2021 at 2:27:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MetricsKit.framework/MetricsKit
*/


@protocol MTDelegatePackage;
@class NSString, MTEventHandlers, MTConfig, MTSystem, MTUtils;

@interface MTMetricsKitTemplate : NSObject {

	NSString* _topic;
	MTEventHandlers* _eventHandlers;
	MTConfig* _config;
	MTSystem* _system;
	MTUtils* _utils;
	id<MTDelegatePackage> _delegatePackage;

}

@property (nonatomic,retain) NSString * topic;                                   //@synthesize topic=_topic - In the implementation block
@property (nonatomic,retain) MTConfig * config;                                  //@synthesize config=_config - In the implementation block
@property (nonatomic,retain) MTEventHandlers * eventHandlers;                    //@synthesize eventHandlers=_eventHandlers - In the implementation block
@property (nonatomic,retain) MTSystem * system;                                  //@synthesize system=_system - In the implementation block
@property (nonatomic,retain) MTUtils * utils;                                    //@synthesize utils=_utils - In the implementation block
@property (nonatomic,retain) id<MTDelegatePackage> delegatePackage;              //@synthesize delegatePackage=_delegatePackage - In the implementation block
+(id)kitWithTopic:(id)arg1 bagProfile:(id)arg2 profileVersion:(id)arg3 ;
+(id)kitWithTopic:(id)arg1 amsBag:(id)arg2 ;
-(MTConfig *)config;
-(MTEventHandlers *)eventHandlers;
-(void)setTopic:(NSString *)arg1 ;
-(NSString *)topic;
-(MTUtils *)utils;
-(void)setSystem:(MTSystem *)arg1 ;
-(void)setEventHandlers:(MTEventHandlers *)arg1 ;
-(MTSystem *)system;
-(id)initWithTopic:(id)arg1 ;
-(void)setConfig:(MTConfig *)arg1 ;
-(id)initWithTopic:(id)arg1 delegatePackage:(id)arg2 ;
-(void)setUtils:(MTUtils *)arg1 ;
-(id)metricsDataWithEventHandlerName:(id)arg1 pageId:(id)arg2 pageType:(id)arg3 pageContext:(id)arg4 eventData:(id)arg5 ;
-(id)metricsDataWithEventHandlerName:(id)arg1 pageData:(id)arg2 eventData:(id)arg3 ;
-(id)metricsDataWithEventHandlerName:(id)arg1 eventData:(id)arg2 ;
-(id)metricsDataWithEventHandlerName:(id)arg1 pageId:(id)arg2 pageType:(id)arg3 pageContext:(id)arg4 fields:(id)arg5 ;
-(id)metricsDataWithEventHandlerName:(id)arg1 pageData:(id)arg2 fields:(id)arg3 ;
-(id)metricsDataWithEventHandlerName:(id)arg1 fields:(id)arg2 ;
-(id<MTDelegatePackage>)delegatePackage;
-(void)setDelegatePackage:(id<MTDelegatePackage>)arg1 ;
-(id)initWithTopic:(id)arg1 bagProfile:(id)arg2 profileVersion:(id)arg3 ;
@end

