/*
* Generated on Monday, March 1, 2021 at 2:32:23 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/DataAccessExpress.framework/DataAccessExpress
*/


@protocol OS_dispatch_queue;
@class NSString, NSObject;

@interface DADownloadContext : NSObject {

	NSString* _attachmentUUID;
	NSString* _accountID;
	NSObject*<OS_dispatch_queue> _queue;
	/*^block*/id _progressBlock;
	/*^block*/id _completionBlock;

}

@property (nonatomic,readonly) NSString * attachmentUUID;                       //@synthesize attachmentUUID=_attachmentUUID - In the implementation block
@property (nonatomic,readonly) NSString * accountID;                            //@synthesize accountID=_accountID - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> queue;              //@synthesize queue=_queue - In the implementation block
@property (nonatomic,copy,readonly) id progressBlock;                           //@synthesize progressBlock=_progressBlock - In the implementation block
@property (nonatomic,copy,readonly) id completionBlock;                         //@synthesize completionBlock=_completionBlock - In the implementation block
-(NSObject*<OS_dispatch_queue>)queue;
-(id)completionBlock;
-(id)progressBlock;
-(NSString *)accountID;
-(void)finishedWithError:(id)arg1 ;
-(id)initWithAttachmentUUID:(id)arg1 accountID:(id)arg2 queue:(id)arg3 downloadProgressBlock:(/*^block*/id)arg4 completionBlock:(/*^block*/id)arg5 ;
-(void)updateProgressDownloadedByteCount:(long long)arg1 totalByteCount:(long long)arg2 ;
-(NSString *)attachmentUUID;
@end

