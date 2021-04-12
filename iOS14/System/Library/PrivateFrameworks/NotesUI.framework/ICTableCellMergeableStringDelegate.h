/*
* Generated on Thursday, January 14, 2021 at 2:26:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSUUID *)rowID;
-(id)init;
-(void)edited:(unsigned long long)arg1 range:(NSRange)arg2 changeInLength:(long long)arg3 ;
-(void)addUndoCommand:(id)arg1 ;
-(id<ICTableCellMergeableStringObserving>)changeObserver;
-(void)endEditing;
-(NSUUID *)columnID;
-(BOOL)wantsUndoCommands;
-(void)beginEditing;
-(id)initWithTableCellChangeObserver:(id)arg1 columnID:(id)arg2 rowID:(id)arg3 ;
-(unsigned long long)editingCount;
-(void)setEditingCount:(unsigned long long)arg1 ;
-(NSMutableArray *)undoCommands;
-(void)setUndoCommands:(NSMutableArray *)arg1 ;
@end

