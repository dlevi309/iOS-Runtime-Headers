/*
* Generated on Thursday, January 14, 2021 at 2:23:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Translation.framework/Translation
*/


@protocol OS_dispatch_queue;
@class NSObject, NSOrderedSet;

@interface _LTPowerLogger : NSObject {

	NSObject*<OS_dispatch_queue> _loggerQueue;
	NSOrderedSet* _requestTypeSet;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> loggerQueue;              //@synthesize loggerQueue=_loggerQueue - In the implementation block
@property (retain) NSOrderedSet * requestTypeSet;                                   //@synthesize requestTypeSet=_requestTypeSet - In the implementation block
+(id)sharedInstance;
-(id)init;
-(BOOL)_shouldLogRequest:(long long)arg1 ;
-(id)_maskForRequestType:(id)arg1 ;
-(void)logTranslateRequestEvent:(id)arg1 requestType:(id)arg2 routeType:(long long)arg3 ;
-(NSObject*<OS_dispatch_queue>)loggerQueue;
-(void)setLoggerQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSOrderedSet *)requestTypeSet;
-(void)setRequestTypeSet:(NSOrderedSet *)arg1 ;
@end

