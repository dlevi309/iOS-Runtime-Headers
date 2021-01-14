/*
* Generated on Thursday, January 14, 2021 at 2:27:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
*/

#import <WorkflowKit/WFAction.h>

@interface WFStorageServiceAction : WFAction

@property (nonatomic,readonly) id<WFFileStorageService> selectedStorageService; 
@property (nonatomic,readonly) BOOL showsFilePicker; 
-(id)keywords;
-(void)initializeParameters;
-(void)runAsynchronouslyWithInput:(id)arg1 ;
-(BOOL)setParameterState:(id)arg1 forKey:(id)arg2 ;
-(id)outputContentClasses;
-(BOOL)requiresRemoteExecution;
-(id)prioritizedParameterKeysForRemoteExecution;
-(id)targetContentAttribution;
-(id)requiredResources;
-(BOOL)showsSettingsWhenResourcesUnavailable;
-(void)runAsynchronouslyWithInput:(id)arg1 storageService:(id)arg2 ;
-(id)filenamePlaceholderText;
-(id<WFFileStorageService>)selectedStorageService;
-(BOOL)showsFilePicker;
-(void)updatePathPrefix;
-(id)filePathKey;
-(id)showPickerKey;
-(void)selectedStorageServiceChanged;
@end

