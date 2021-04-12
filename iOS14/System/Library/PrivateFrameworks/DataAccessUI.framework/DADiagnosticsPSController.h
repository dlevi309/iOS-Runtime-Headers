/*
* Generated on Thursday, January 14, 2021 at 2:27:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DataAccessUI.framework/DataAccessUI
*/

#import <Preferences/PSListController.h>
#import <libobjc.A.dylib/DADiagnosticSaveNotesDelegate.h>
#import <UIKit/UIAlertViewDelegate.h>

@class UIAlertView, NSString;

@interface DADiagnosticsPSController : PSListController <DADiagnosticSaveNotesDelegate, UIAlertViewDelegate> {

	UIAlertView* _simpleAlert;
	UIAlertView* _savingDataAlert;
	SEL _simpleConfirmSheetDismissedSEL;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)diagnosticsVisible;
+(id)dumpRuntimeStateSpecifiers;
+(id)linkSpecifier;
-(void)suspend;
-(id)specifiers;
-(void)alertView:(id)arg1 didDismissWithButtonIndex:(long long)arg2 ;
-(void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2 ;
-(void)handleDumpRuntimeStateForSpecifier:(id)arg1 ;
-(id)diagnosticSpecifiers;
-(void)handleSaveAllLogsStep2;
-(void)runSimpleAlertWithTitle:(id)arg1 message:(id)arg2 dismissedSelector:(SEL)arg3 ;
-(void)setLoggingEnabled:(BOOL)arg1 forSpecifier:(id)arg2 ;
-(BOOL)isLoggingEnabledForSpecifier:(id)arg1 ;
-(id)pathsOfAllLogFiles;
-(id)savedLogsDirectoryNameForSpecifier:(id)arg1 ;
-(BOOL)saveFileAtPath:(id)arg1 toDirectory:(id)arg2 withExtension:(id)arg3 error:(id*)arg4 ;
-(void)purgeFileAtPath:(id)arg1 ;
-(void)runSimpleAlertWithTitle:(id)arg1 message:(id)arg2 ;
-(void)saveLogsWithNotes:(id)arg1 ;
-(void)_presentNotesController;
-(void)_dismissSavingDataAlert;
-(void)saveNotesInBackground:(id)arg1 ;
-(void)setBooleanProperty:(id)arg1 withSpecifier:(id)arg2 ;
-(id)booleanPropertyWithSpecifier:(id)arg1 ;
-(void)handleSaveAllLogsForSpecifier:(id)arg1 ;
-(void)handleClearAllLogsForSpecifier:(id)arg1 ;
-(id)pathsOfPurgableFiles;
@end

