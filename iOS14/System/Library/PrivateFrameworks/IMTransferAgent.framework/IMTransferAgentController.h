/*
* Generated on Thursday, January 14, 2021 at 2:27:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/IMTransferAgent.framework/IMTransferAgent
*/


@class MMCSController;

@interface IMTransferAgentController : NSObject {

	MMCSController* _controller;

}

@property (nonatomic,retain) MMCSController * controller;              //@synthesize controller=_controller - In the implementation block
+(id)sharedInstance;
-(void)setController:(MMCSController *)arg1 ;
-(MMCSController *)controller;
-(void)dealloc;
-(BOOL)_isWhiteListedURL:(id)arg1 ;
-(void)cancelSendTransferID:(id)arg1 ;
-(void)sendFilePath:(id)arg1 topic:(id)arg2 transferID:(id)arg3 sourceAppID:(id)arg4 userInfo:(id)arg5 progressBlock:(/*^block*/id)arg6 completionBlock:(/*^block*/id)arg7 ;
-(BOOL)_shouldRetryUploadGivenMMCSError:(id)arg1 retryAttemptCount:(unsigned long long)arg2 ;
-(void)_sendFilePath:(id)arg1 topic:(id)arg2 transferID:(id)arg3 sourceAppID:(id)arg4 retryAttemptCount:(unsigned long long)arg5 userInfo:(id)arg6 progressBlock:(/*^block*/id)arg7 completionBlock:(/*^block*/id)arg8 ;
-(id)_defaultMMCSWhiteList;
-(void)_receiveFileTransfer:(id)arg1 topic:(id)arg2 path:(id)arg3 requestURLString:(id)arg4 ownerID:(id)arg5 signature:(id)arg6 allowReauthorize:(BOOL)arg7 fileSize:(unsigned long long)arg8 sourceAppID:(id)arg9 progressBlock:(/*^block*/id)arg10 completionBlock:(/*^block*/id)arg11 ;
-(void)receiveFileTransfer:(id)arg1 topic:(id)arg2 path:(id)arg3 requestURLString:(id)arg4 ownerID:(id)arg5 signature:(id)arg6 fileSize:(unsigned long long)arg7 sourceAppID:(id)arg8 progressBlock:(/*^block*/id)arg9 completionBlock:(/*^block*/id)arg10 ;
@end

