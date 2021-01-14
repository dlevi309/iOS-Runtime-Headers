/*
* Generated on Thursday, January 14, 2021 at 2:23:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSUUID *)rowID;
-(id)init;
-(id)initWithColumn:(id)arg1 row:(id)arg2 selection:(id)arg3 undoTarget:(id)arg4 ;
-(ICTableAttachmentSelection *)tableSelection;
-(ICTableUndoTarget *)undoTarget;
-(NSUUID *)columnID;
@end

