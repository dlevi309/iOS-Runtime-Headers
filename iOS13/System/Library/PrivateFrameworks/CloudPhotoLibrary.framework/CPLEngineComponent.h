/*
* Generated on Monday, March 1, 2021 at 2:33:24 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
*/


@protocol CPLEngineComponent <NSObject>
@optional
-(void)getStatusWithCompletionHandler:(/*^block*/id)arg1;
-(void)getStatusDictionaryWithCompletionHandler:(/*^block*/id)arg1;

@required
-(void)openWithCompletionHandler:(/*^block*/id)arg1;
-(id)componentName;
-(void)closeAndDeactivate:(BOOL)arg1 completionHandler:(/*^block*/id)arg2;

@end

