/*
* Generated on Thursday, January 14, 2021 at 2:26:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ExposureNotificationDaemon.framework/ExposureNotificationDaemon
*/


@protocol OS_dispatch_group;
@class NSObject, NSBackgroundActivityScheduler, ENDownloadEndpointState, NSDate, NSString;

@interface ENDownloadTask : NSObject {

	NSObject*<OS_dispatch_group> _group;
	NSBackgroundActivityScheduler* _scheduler;
	BOOL _finished;
	BOOL _didDefer;
	ENDownloadEndpointState* _endpointState;
	NSDate* _date;
	unsigned long long _downloadCount;

}

@property (nonatomic,readonly) ENDownloadEndpointState * endpointState;              //@synthesize endpointState=_endpointState - In the implementation block
@property (nonatomic,copy,readonly) NSDate * date;                                   //@synthesize date=_date - In the implementation block
@property (nonatomic,readonly) BOOL shouldDefer; 
@property (nonatomic,readonly) BOOL didDefer;                                        //@synthesize didDefer=_didDefer - In the implementation block
@property (nonatomic,readonly) unsigned long long downloadCount;                     //@synthesize downloadCount=_downloadCount - In the implementation block
@property (nonatomic,copy,readonly) NSString * shortIdentifier; 
+(id)taskWithEndpointState:(id)arg1 date:(id)arg2 group:(id)arg3 scheduler:(id)arg4 ;
-(BOOL)shouldDefer;
-(NSString *)shortIdentifier;
-(ENDownloadEndpointState *)endpointState;
-(NSDate *)date;
-(BOOL)didDefer;
-(unsigned long long)downloadCount;
-(void)finishDeferred:(BOOL)arg1 error:(id)arg2 ;
-(void)incrementDownloadCount;
@end

