/*
* Generated on Thursday, January 14, 2021 at 2:26:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CDDataAccessExpress.framework/CDDataAccessExpress
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
-(NSString *)accountID;
-(id)completionBlock;
-(void)finishedWithError:(id)arg1 ;
-(id)progressBlock;
-(NSObject*<OS_dispatch_queue>)queue;
-(id)initWithAttachmentUUID:(id)arg1 accountID:(id)arg2 queue:(id)arg3 downloadProgressBlock:(/*^block*/id)arg4 completionBlock:(/*^block*/id)arg5 ;
-(NSString *)attachmentUUID;
-(void)updateProgressDownloadedByteCount:(long long)arg1 totalByteCount:(long long)arg2 ;
@end

