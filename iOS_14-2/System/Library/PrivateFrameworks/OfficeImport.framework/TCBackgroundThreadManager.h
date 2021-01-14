/*
* Generated on Thursday, January 14, 2021 at 2:28:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/


@protocol TCCancelDelegate, OS_dispatch_queue, OS_dispatch_group;
@class NSObject, TCMessageContext, TCProgressContext;

@interface TCBackgroundThreadManager : NSObject {

	id<TCCancelDelegate> mCancelDelegate;
	BOOL mIsWaiting;
	unsigned long long mBlockCount;
	NSObject*<OS_dispatch_queue> mQueue;
	NSObject*<OS_dispatch_group> mGroup;
	NSObject*<OS_dispatch_queue> mProgressReportingQueue;
	TCMessageContext* mMessageContext;
	TCProgressContext* mProgressContext;

}

@property (readonly) BOOL isCancelled; 
@property (retain) TCMessageContext * messageContext; 
@property (retain) TCProgressContext * progressContext; 
-(void)waitUntilComplete;
-(TCMessageContext *)messageContext;
-(void)setMessageContext:(TCMessageContext *)arg1 ;
-(BOOL)isCancelled;
-(void)dealloc;
-(id)initWithCancelDelegate:(id)arg1 ;
-(void)setProgressContext:(TCProgressContext *)arg1 ;
-(void)addASyncBlock:(/*^block*/id)arg1 ;
-(TCProgressContext *)progressContext;
@end

