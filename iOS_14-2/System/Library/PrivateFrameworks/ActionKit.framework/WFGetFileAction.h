/*
* Generated on Thursday, January 14, 2021 at 2:27:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
*/

#import <ActionKit/WFStorageServiceAction.h>

@interface WFGetFileAction : WFStorageServiceAction
+(id)userInterfaceProtocol;
+(id)userInterfaceXPCInterface;
-(BOOL)setParameterState:(id)arg1 forKey:(id)arg2 ;
-(id)targetContentAttribution;
-(BOOL)outputsMultipleItems;
-(void)runAsynchronouslyWithInput:(id)arg1 storageService:(id)arg2 ;
-(id)filenamePlaceholderText;
-(id)filePathKey;
-(id)showPickerKey;
-(void)selectedStorageServiceChanged;
-(void)runWithRemoteUserInterface:(id)arg1 path:(id)arg2 input:(id)arg3 storageService:(id)arg4 ;
-(BOOL)multipleSelectionEnabled;
-(void)updateVisibleParameters;
@end

