/*
* Generated on Monday, March 1, 2021 at 2:34:37 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
*/

#import <ActionKit/WFStorageServiceAction.h>

@protocol WFFileStorageServiceOperation;
@interface WFSaveFileAction : WFStorageServiceAction {

	id<WFFileStorageServiceOperation> _saveOperation;

}

@property (nonatomic,retain) id<WFFileStorageServiceOperation> saveOperation;              //@synthesize saveOperation=_saveOperation - In the implementation block
-(void)cancel;
-(void)finishRunningWithError:(id)arg1 ;
-(id)targetDataInfo;
-(BOOL)inputsMultipleItems;
-(BOOL)outputsMultipleItems;
-(void)runAsynchronouslyWithInput:(id)arg1 storageService:(id)arg2 ;
-(id)filePathKey;
-(id)showPickerKey;
-(id<WFFileStorageServiceOperation>)saveOperation;
-(void)setSaveOperation:(id<WFFileStorageServiceOperation>)arg1 ;
@end

