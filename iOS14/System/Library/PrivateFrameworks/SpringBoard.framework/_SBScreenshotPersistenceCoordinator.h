/*
* Generated on Thursday, January 14, 2021 at 2:25:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

