/*
* Generated on Thursday, January 14, 2021 at 2:27:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
*/

#import <ActionKit/WFStorageServiceAction.h>

@protocol WFSaveFileActionUserInterface, WFFileStorageServiceOperation;
@interface WFSaveFileAction : WFStorageServiceAction {

	id<WFSaveFileActionUserInterface> _actionUserInterface;
	id<WFFileStorageServiceOperation> _saveOperation;

}

@property (nonatomic,retain) id<WFSaveFileActionUserInterface> actionUserInterface;              //@synthesize actionUserInterface=_actionUserInterface - In the implementation block
@property (nonatomic,retain) id<WFFileStorageServiceOperation> saveOperation;                    //@synthesize saveOperation=_saveOperation - In the implementation block
+(id)userInterfaceProtocol;
+(id)userInterfaceXPCInterface;
-(void)cancel;
-(void)finishRunningWithError:(id)arg1 ;
-(id)targetContentAttribution;
-(id<WFSaveFileActionUserInterface>)actionUserInterface;
-(void)setActionUserInterface:(id<WFSaveFileActionUserInterface>)arg1 ;
-(BOOL)outputsMultipleItems;
-(BOOL)inputsMultipleItems;
-(void)runAsynchronouslyWithInput:(id)arg1 storageService:(id)arg2 ;
-(id)filePathKey;
-(id)showPickerKey;
-(void)runWithRemoteUserInterface:(id)arg1 path:(id)arg2 input:(id)arg3 storageService:(id)arg4 ;
-(id<WFFileStorageServiceOperation>)saveOperation;
-(void)setSaveOperation:(id<WFFileStorageServiceOperation>)arg1 ;
@end

