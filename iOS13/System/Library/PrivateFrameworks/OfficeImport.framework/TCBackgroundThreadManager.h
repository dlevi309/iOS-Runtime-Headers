/*
* Generated on Monday, March 1, 2021 at 2:35:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)dealloc;
-(BOOL)isCancelled;
-(void)waitUntilComplete;
-(TCMessageContext *)messageContext;
-(void)setMessageContext:(TCMessageContext *)arg1 ;
-(TCProgressContext *)progressContext;
-(void)setProgressContext:(TCProgressContext *)arg1 ;
-(id)initWithCancelDelegate:(id)arg1 ;
-(void)addASyncBlock:(/*^block*/id)arg1 ;
@end

