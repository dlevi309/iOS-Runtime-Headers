/*
* Generated on Monday, March 1, 2021 at 2:34:44 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CloudDocsUI.framework/CloudDocsUI
*/

#import <CloudDocsUI/_UIDocumentPickerURLContainerModel.h>

@class NSString;

@interface _UIDocumentPickerSubfoldersContainerModel : _UIDocumentPickerURLContainerModel {

	NSString* _containerID;

}
-(id)scopes;
-(id)displayTitle;
-(id)initWithURL:(id)arg1 pickableTypes:(id)arg2 mode:(unsigned long long)arg3 ;
-(void)startMonitoringChanges;
-(BOOL)shouldShowTopLevelContainers;
-(id)_createObserver;
-(id)initWithPickableTypes:(id)arg1 container:(id)arg2 ;
@end

