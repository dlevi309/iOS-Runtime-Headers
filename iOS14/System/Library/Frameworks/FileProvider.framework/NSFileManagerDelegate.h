/*
* Generated on Thursday, January 14, 2021 at 2:23:01 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/FileProvider.framework/FileProvider
*/


@protocol NSFileManagerDelegate <NSObject>
@optional
-(BOOL)fileManager:(id)arg1 shouldProceedAfterError:(id)arg2 copyingItemAtPath:(id)arg3 toPath:(id)arg4;
-(BOOL)fileManager:(id)arg1 shouldProceedAfterError:(id)arg2 linkingItemAtPath:(id)arg3 toPath:(id)arg4;
-(BOOL)fileManager:(id)arg1 shouldProceedAfterError:(id)arg2 movingItemAtURL:(id)arg3 toURL:(id)arg4;
-(BOOL)fileManager:(id)arg1 shouldProceedAfterError:(id)arg2 copyingItemAtURL:(id)arg3 toURL:(id)arg4;
-(BOOL)fileManager:(id)arg1 shouldProceedAfterError:(id)arg2 movingItemAtPath:(id)arg3 toPath:(id)arg4;
-(BOOL)fileManager:(id)arg1 shouldProceedAfterError:(id)arg2 removingItemAtPath:(id)arg3;
-(BOOL)fileManager:(id)arg1 shouldProceedAfterError:(id)arg2 linkingItemAtURL:(id)arg3 toURL:(id)arg4;
-(BOOL)fileManager:(id)arg1 shouldProceedAfterError:(id)arg2 removingItemAtURL:(id)arg3;
-(BOOL)fileManager:(id)arg1 shouldCopyItemAtPath:(id)arg2 toPath:(id)arg3;
-(BOOL)fileManager:(id)arg1 shouldMoveItemAtPath:(id)arg2 toPath:(id)arg3;
-(BOOL)fileManager:(id)arg1 shouldLinkItemAtPath:(id)arg2 toPath:(id)arg3;
-(BOOL)fileManager:(id)arg1 shouldRemoveItemAtURL:(id)arg2;
-(BOOL)fileManager:(id)arg1 shouldRemoveItemAtPath:(id)arg2;
-(BOOL)fileManager:(id)arg1 shouldCopyItemAtURL:(id)arg2 toURL:(id)arg3;
-(BOOL)fileManager:(id)arg1 shouldMoveItemAtURL:(id)arg2 toURL:(id)arg3;
-(BOOL)fileManager:(id)arg1 shouldLinkItemAtURL:(id)arg2 toURL:(id)arg3;

@end

