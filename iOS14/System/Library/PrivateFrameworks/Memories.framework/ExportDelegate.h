/*
* Generated on Thursday, January 14, 2021 at 2:27:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
*/


@protocol ExportDelegate <NSObject>
@optional
-(void)didFinishExport;
-(BOOL)didFinishTestModeExport;
-(void)exportController:(id)arg1 progressedTo:(float)arg2 preventBackslide:(BOOL)arg3;
-(void)exportControllerWillStartCopyToCameraRoll:(id)arg1;
-(void)autoExportAlertCompleted;

@end

