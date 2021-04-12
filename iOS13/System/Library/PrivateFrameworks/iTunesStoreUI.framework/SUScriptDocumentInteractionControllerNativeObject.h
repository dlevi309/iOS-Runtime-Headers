/*
* Generated on Monday, March 1, 2021 at 2:32:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
*/

#import <iTunesStoreUI/SUScriptNativeObject.h>
#import <UIKit/UIDocumentInteractionControllerDelegate.h>

@class NSString;

@interface SUScriptDocumentInteractionControllerNativeObject : SUScriptNativeObject <UIDocumentInteractionControllerDelegate> {

	BOOL _didPickApplication;
	BOOL _isVisible;
	/*^block*/id _presentationBlock;
	BOOL _redisplayAfterRotation;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)documentInteractionControllerWillPresentOpenInMenu:(id)arg1 ;
-(void)documentInteractionControllerDidDismissOpenInMenu:(id)arg1 ;
-(void)documentInteractionController:(id)arg1 willBeginSendingToApplication:(id)arg2 ;
-(void)destroyNativeObject;
-(void)_windowDidRotateNotification:(id)arg1 ;
-(void)_windowWillRotateNotification:(id)arg1 ;
-(void)setupNativeObject;
-(BOOL)_isAffectedByWindowNotification:(id)arg1 ;
-(void)presentUsingBlock:(/*^block*/id)arg1 ;
@end

