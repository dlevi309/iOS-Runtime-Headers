/*
* Generated on Monday, March 1, 2021 at 2:35:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/


@interface _SBScreenshotPersistenceCoordinator : NSObject {

	unsigned long long _screenshotWriteCount;

}

@property (nonatomic,readonly) BOOL isSaving; 
-(BOOL)isSaving;
-(void)saveScreenshot:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(BOOL)_isWritingSnapshot;
-(void)_incrementWriteCount;
-(void)_finishedWritingScreenshot:(id)arg1 didFinishSavingWithError:(id)arg2 context:(void*)arg3 ;
-(void)_decrementWriteCount;
@end

