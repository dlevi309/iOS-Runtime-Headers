/*
* Generated on Monday, March 1, 2021 at 2:33:13 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
*/

#import <ReminderKit/TTMergeableStringUndoGroup.h>

@class NSUUID, ICTableAttachmentSelection, ICTableUndoTarget;

@interface ICTableCellEditingUndoGroup : TTMergeableStringUndoGroup {

	NSUUID* _columnID;
	NSUUID* _rowID;
	ICTableAttachmentSelection* _tableSelection;
	ICTableUndoTarget* _undoTarget;

}

@property (nonatomic,readonly) NSUUID * columnID;                                        //@synthesize columnID=_columnID - In the implementation block
@property (nonatomic,readonly) NSUUID * rowID;                                           //@synthesize rowID=_rowID - In the implementation block
@property (nonatomic,readonly) ICTableAttachmentSelection * tableSelection;              //@synthesize tableSelection=_tableSelection - In the implementation block
@property (nonatomic,readonly) ICTableUndoTarget * undoTarget;                           //@synthesize undoTarget=_undoTarget - In the implementation block
-(id)init;
-(NSUUID *)rowID;
-(id)initWithColumn:(id)arg1 row:(id)arg2 selection:(id)arg3 undoTarget:(id)arg4 ;
-(NSUUID *)columnID;
-(ICTableAttachmentSelection *)tableSelection;
-(ICTableUndoTarget *)undoTarget;
@end

