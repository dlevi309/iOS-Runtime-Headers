/*
* Generated on Thursday, January 14, 2021 at 2:28:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/OSAnalyticsPrivate.framework/OSAnalyticsPrivate
*/


@protocol OSASyncProxyHandler <NSObject>
@property (readonly) NSObject*<OS_dispatch_queue> initializationQueue; 
@optional
-(void)handleConnection:(BOOL)arg1;
-(NSObject*<OS_dispatch_queue>)initializationQueue;

@required
-(void)handleFile:(id)arg1 metadata:(id)arg2;
-(void)ack:(id)arg1 result:(BOOL)arg2 error:(id)arg3;
-(void)handleMessage:(id)arg1 from:(id)arg2;

@end

