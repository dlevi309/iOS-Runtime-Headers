/*
* Generated on Monday, March 1, 2021 at 2:33:12 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
*/


@protocol ICNoteUI <NSObject>
@optional
-(BOOL)shouldReleaseTextStorageWhenTurningIntoFault;
-(void)noteWillTurnIntoFault;
-(void)noteDidReplaceDocument;
-(id)uiAttributedString;
-(void)willMergeNoteDocument:(id)arg1 withUserInfo:(id)arg2;
-(void)didMergeNoteDocument:(id)arg1 withUserInfo:(id)arg2;
-(void)noteDidSaveAndClearDecryptedData;
-(void)createMissingAttachmentsInTextStorage;

@end

