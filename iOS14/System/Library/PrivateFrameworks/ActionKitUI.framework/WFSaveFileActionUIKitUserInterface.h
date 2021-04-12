/*
* Generated on Thursday, January 14, 2021 at 2:27:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ActionKitUI.framework/ActionKitUI
*/

#import <WorkflowKit/WFActionUserInterface.h>
#import <libobjc.A.dylib/WFSaveFileActionUserInterface.h>

@protocol WFFileStorageServiceOperation;
@class NSString;

@interface WFSaveFileActionUIKitUserInterface : WFActionUserInterface <WFSaveFileActionUserInterface> {

	id<WFFileStorageServiceOperation> _saveOperation;
	/*^block*/id _completionHandler;

}

@property (nonatomic,retain) id<WFFileStorageServiceOperation> saveOperation;              //@synthesize saveOperation=_saveOperation - In the implementation block
@property (nonatomic,copy) id completionHandler;                                           //@synthesize completionHandler=_completionHandler - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setCompletionHandler:(id)arg1 ;
-(id)completionHandler;
-(void)cancel;
-(void)cancelPresentationWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)showWithServiceName:(id)arg1 input:(id)arg2 managedLevel:(unsigned long long)arg3 options:(unsigned long long)arg4 completionHandler:(/*^block*/id)arg5 ;
-(id<WFFileStorageServiceOperation>)saveOperation;
-(void)setSaveOperation:(id<WFFileStorageServiceOperation>)arg1 ;
-(id)selectedStorageServiceForName:(id)arg1 ;
@end

