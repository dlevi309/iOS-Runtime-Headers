/*
* Generated on Monday, March 1, 2021 at 2:34:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Assistant/Plugins/ClientFlowService.assistantBundle/ClientFlowService
*/


@protocol CFScriptDownloadDelegate <NSObject>
@required
-(id)cachePath;
-(void)scriptDownloadFailedForScript:(id)arg1 error:(id)arg2;
-(void)downloadedScript:(id)arg1;
-(void)scriptSavedToFilePath:(id)arg1 forScript:(id)arg2;

@end

