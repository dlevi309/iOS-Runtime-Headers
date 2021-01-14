/*
* Generated on Thursday, January 14, 2021 at 2:26:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Assistant/Plugins/ClientFlowService.assistantBundle/ClientFlowService
*/


@protocol CFScriptDownloadDelegate <NSObject>
@required
-(id)cachePath;
-(void)scriptDownloadFailedForScript:(id)arg1 error:(id)arg2;
-(void)downloadedScript:(id)arg1;
-(void)scriptSavedToFilePath:(id)arg1 forScript:(id)arg2;

@end

