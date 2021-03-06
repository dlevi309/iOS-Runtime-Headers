/*
* Generated on Monday, March 1, 2021 at 2:30:41 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/ImageCaptureCore.framework/ImageCaptureCore
*/


@protocol ICDeviceManagerProtocol <NSObject>
@required
-(long long)openDevice:(id)arg1 contextInfo:(void*)arg2;
-(long long)closeDevice:(id)arg1 contextInfo:(void*)arg2;
-(long long)openSession:(id)arg1 withOptions:(id)arg2 completion:(/*^block*/id)arg3;
-(long long)closeSession:(id)arg1 withOptions:(id)arg2 completion:(/*^block*/id)arg3;
-(long long)getFileThumbnail:(id)arg1 fromDevice:(id)arg2 withOptions:(id)arg3 completion:(/*^block*/id)arg4;
-(long long)getFileMetadata:(id)arg1 fromDevice:(id)arg2 withOptions:(id)arg3 completion:(/*^block*/id)arg4;
-(long long)getFileData:(id)arg1 fromDevice:(id)arg2 withOptions:(id)arg3 completion:(/*^block*/id)arg4;
-(long long)syncClock:(id)arg1 completion:(/*^block*/id)arg2;
-(long long)deleteFile:(id)arg1 fromDevice:(id)arg2 completion:(/*^block*/id)arg3;
-(long long)downloadFile:(id)arg1 fromDevice:(id)arg2 withOptions:(id)arg3 completion:(/*^block*/id)arg4;
-(long long)sendDevice:(id)arg1 ptpCommand:(id)arg2 andPayload:(id)arg3 completion:(/*^block*/id)arg4;
-(long long)registerDevice:(id)arg1 forImageCaptureEventNotifications:(id)arg2;
-(long long)unregisterDevice:(id)arg1 forImageCaptureEventNotifications:(id)arg2;
-(long long)eject:(id)arg1;
-(void)enumerateContent;

@end

