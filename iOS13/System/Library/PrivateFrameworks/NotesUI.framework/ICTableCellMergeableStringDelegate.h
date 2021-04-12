/*
* Generated on Monday, March 1, 2021 at 2:34:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NotesUI.framework/NotesUI
*/

#import <NotesUI/NotesUI-Structs.h>
#import <libobjc.A.dylib/TTMergeableStringDelegate.h>

@protocol ICTableCellMergeableStringObserving;
@class NSUUID, NSMutableArray, NSString;

@interface ICTableCellMergeableStringDelegate : NSObject <TTMergeableStringDelegate> {

	id<ICTableCellMergeableStringObserving> _changeObserver;
	NSUUID* _columnID;
	NSUUID* _rowID;
	unsigned long long _editingCount;
	NSMutableArray* _undoCommands;

}

@property (nonatomic,__weak,readonly) id<ICTableCellMergeableStringObserving> changeObserver;              //@synthesize changeObserver=_changeObserver - In the implementation block
@property (nonatomic,readonly) NSUUID * columnID;                                                          //@synthesize columnID=_columnID - In the implementation block
@property (nonatomic,readonly) NSUUID * rowID;                                                             //@synthesize rowID=_rowID - In the implementation block
@property (assign,nonatomic) unsigned long long editingCount;                                              //@synthesize editingCount=_editingCount - In the implementation block
@property (nonatomic,retain) NSMutableArray * undoCommands;                                                //@synthesize undoCommands=_undoCommands - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)beginEditing;
-(void)endEditing;
-(void)edited:(unsigned long long)arg1 range:(NSRange)arg2 changeInLength:(long long)arg3 ;
-(id<ICTableCellMergeableStringObserving>)changeObserver;
-(NSUUID *)rowID;
-(BOOL)wantsUndoCommands;
-(void)addUndoCommand:(id)arg1 ;
-(NSUUID *)columnID;
-(id)initWithTableCellChangeObserver:(id)arg1 columnID:(id)arg2 rowID:(id)arg3 ;
-(unsigned long long)editingCount;
-(void)setEditingCount:(unsigned long long)arg1 ;
-(NSMutableArray *)undoCommands;
-(void)setUndoCommands:(NSMutableArray *)arg1 ;
@end

