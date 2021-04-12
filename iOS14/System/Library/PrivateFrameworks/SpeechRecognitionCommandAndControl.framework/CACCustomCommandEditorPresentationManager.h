/*
* Generated on Thursday, January 14, 2021 at 2:28:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpeechRecognitionCommandAndControl.framework/SpeechRecognitionCommandAndControl
*/

#import <SpeechRecognitionCommandAndControl/CACOutOfProcessPresentationManager.h>

@interface CACCustomCommandEditorPresentationManager : CACOutOfProcessPresentationManager
+(long long)remoteViewType;
+(int)axNotification;
-(void)_showCustomCommandEditorWithContextKey:(id)arg1 contextValue:(id)arg2 ;
-(BOOL)showCustomCommandEditorWithGesture:(id)arg1 ;
-(BOOL)showCustomCommandEditorWithTextToInsert:(id)arg1 ;
-(BOOL)showCustomCommandEditorWithRecordedUserActionFlow:(id)arg1 ;
-(BOOL)showCustomCommandEditorWithShortcutsWorkflow:(id)arg1 ;
-(void)handleAXNotificationData:(void*)arg1 ;
@end

