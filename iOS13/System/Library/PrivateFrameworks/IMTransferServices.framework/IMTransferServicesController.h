/*
* Generated on Monday, March 1, 2021 at 2:34:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/IMTransferServices.framework/IMTransferServices
*/


@interface IMTransferServicesController : NSObject
+(id)sharedInstance;
-(id)transferServicesController;
-(void)generatePreviewForTransfer:(id)arg1 attachmentPath:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(void)receiveFileTransfer:(id)arg1 transferGUID:(id)arg2 topic:(id)arg3 path:(id)arg4 requestURLString:(id)arg5 ownerID:(id)arg6 signature:(id)arg7 decryptionKey:(id)arg8 fileSize:(unsigned long long)arg9 generatePreview:(BOOL)arg10 progressBlock:(/*^block*/id)arg11 completionBlock:(/*^block*/id)arg12 ;
-(BOOL)failTransfersOnPreviewGenerationFailure;
-(void)setPersonalNickname:(id)arg1 oldRecordID:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(void)getNicknameWithRecordID:(id)arg1 decryptionKey:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(void)deleteAllPersonalNicknamesWithCompletion:(/*^block*/id)arg1 ;
-(void)receiveFileTransfer:(id)arg1 topic:(id)arg2 path:(id)arg3 requestURLString:(id)arg4 ownerID:(id)arg5 signature:(id)arg6 decryptionKey:(id)arg7 fileSize:(unsigned long long)arg8 progressBlock:(/*^block*/id)arg9 completionBlock:(/*^block*/id)arg10 ;
-(void)preWarmMMCSForOwnerID:(id)arg1 ;
-(void)sendFilePath:(id)arg1 topic:(id)arg2 userInfo:(id)arg3 transferID:(id)arg4 encryptFile:(BOOL)arg5 progressBlock:(/*^block*/id)arg6 completionBlock:(/*^block*/id)arg7 ;
-(void)cancelSendTransferID:(id)arg1 ;
-(void)_sendFilePath:(id)arg1 topic:(id)arg2 userInfo:(id)arg3 transferID:(id)arg4 encryptFile:(BOOL)arg5 retries:(int)arg6 progressBlock:(/*^block*/id)arg7 completionBlock:(/*^block*/id)arg8 ;
-(void)_receiveFileTransfer:(id)arg1 topic:(id)arg2 path:(id)arg3 requestURLString:(id)arg4 ownerID:(id)arg5 signature:(id)arg6 decryptionKey:(id)arg7 retries:(int)arg8 fileSize:(unsigned long long)arg9 progressBlock:(/*^block*/id)arg10 completionBlock:(/*^block*/id)arg11 ;
-(void)sendFilePath:(id)arg1 topic:(id)arg2 transferID:(id)arg3 encryptFile:(BOOL)arg4 progressBlock:(/*^block*/id)arg5 completionBlock:(/*^block*/id)arg6 ;
@end

