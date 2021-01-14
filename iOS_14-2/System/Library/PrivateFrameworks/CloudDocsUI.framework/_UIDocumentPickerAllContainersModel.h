/*
* Generated on Thursday, January 14, 2021 at 2:27:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CloudDocsUI.framework/CloudDocsUI
*/

#import <CloudDocsUI/_UIDocumentPickerURLContainerModel.h>

@class NSArray, BRContainer;

@interface _UIDocumentPickerAllContainersModel : _UIDocumentPickerURLContainerModel {

	NSArray* _scopes;
	BRContainer* _sourceContainer;

}
-(id)scopes;
-(id)displayTitle;
-(id)initWithURL:(id)arg1 pickableTypes:(id)arg2 mode:(unsigned long long)arg3 ;
-(void)startMonitoringChanges;
-(BOOL)shouldShowTopLevelContainers;
-(id)_createObserver;
-(id)initWithFoldersForPickableTypes:(id)arg1 mode:(unsigned long long)arg2 sourceContainer:(id)arg3 ;
-(void)updateScopes;
@end

