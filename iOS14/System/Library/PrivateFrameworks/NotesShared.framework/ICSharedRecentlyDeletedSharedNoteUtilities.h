/*
* Generated on Thursday, January 14, 2021 at 2:23:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
*/


@interface ICSharedRecentlyDeletedSharedNoteUtilities : NSObject
+(unsigned long long)sharedNoteTypeForNotes:(id)arg1 ;
+(void)showDeletingSharedNotesAlertWithType:(unsigned long long)arg1 displayWindow:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
+(id)notesSharedViaICloudFromNotes:(id)arg1 ;
+(void)showAlertsIfNecessaryForDeletingSharedNotes:(id)arg1 noteDeleteType:(unsigned long long)arg2 displayWindow:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
+(id)titleForSharedNotesType:(unsigned long long)arg1 ;
+(id)messageForSharedNotesType:(unsigned long long)arg1 ;
@end

