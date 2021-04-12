/*
* Generated on Thursday, January 14, 2021 at 2:23:58 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DataAccessExpress.framework/DataAccessExpress
*/


@protocol OS_dispatch_queue, DAESubscribedCalendarDownloadDelegate;
@class NSObject;

@interface DAESubscriptionCalendarDownloadContext : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	id<DAESubscribedCalendarDownloadDelegate> _delegate;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;                              //@synthesize queue=_queue - In the implementation block
@property (nonatomic,retain) id<DAESubscribedCalendarDownloadDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id<DAESubscribedCalendarDownloadDelegate>)delegate;
-(void)setDelegate:(id<DAESubscribedCalendarDownloadDelegate>)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)asyncCallOutToDelegate:(/*^block*/id)arg1 ;
-(void)callOutToDelegate:(/*^block*/id)arg1 ;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
@end

