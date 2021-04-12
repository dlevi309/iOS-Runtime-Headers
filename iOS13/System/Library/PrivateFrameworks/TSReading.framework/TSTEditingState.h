/*
* Generated on Monday, March 1, 2021 at 2:33:19 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
*/

#import <TSReading/TSReading-Structs.h>
#import <TSReading/TSPObject.h>
#import <TSReading/TSWPStorageObserver.h>

@class TSWPStorage, TSTTableInfo, TSTCell, TSTTableSelection, TSTSearchReference, TSUPointerKeyDictionary, TSTTextStatisticsTracker, NSArray, TSKCommandController, TSTTableModel;

@interface TSTEditingState : TSPObject <TSWPStorageObserver> {

	TSWPStorage* mEditingStorage;
	TSTTableInfo* mTableInfo;
	TSTCell* mEditingCell;
	SCD_Struct_TS140 mEditingCellID;
	int mEditingMode;
	TSTTableSelection* mSelection;
	TSTTableSelection* mSelectionReflectingEditingState;
	TSTSearchReference* mSearchReference;
	int mPreviousEditingMode;
	unsigned char mLastColumnHitByTap;
	TSUPointerKeyDictionary* mColoredReferences;
	BOOL mCellWasEditedInCurrentSession;
	BOOL mEditingCellInProxy;
	TSTTextStatisticsTracker* mTracker;
	BOOL mEndingEditingDueToCancelOperation;
	BOOL _dispatchingPreflight;
	SCD_Struct_TS140 _lastEditingCellID;
	NSArray* _coloredReferences;
	TSKCommandController* _commandController;

}

@property (nonatomic,readonly) TSKCommandController * commandController;                                                     //@synthesize commandController=_commandController - In the implementation block
@property (assign,getter=isDispatchingPreflight,nonatomic) BOOL dispatchingPreflight;                                        //@synthesize dispatchingPreflight=_dispatchingPreflight - In the implementation block
@property (assign,getter=isEndingEditingDueToCancelOperation,nonatomic) BOOL endingEditingDueToCancelOperation; 
@property (nonatomic,retain) TSWPStorage * editingStorage; 
@property (nonatomic,retain) TSTCell * editingCell; 
@property (assign,nonatomic) SCD_Struct_TS140 editingCellID; 
@property (nonatomic,readonly) SCD_Struct_TS142 editingCellRange; 
@property (assign,nonatomic) TSTTableInfo * tableInfo; 
@property (assign,nonatomic) SCD_Struct_TS140 lastEditingCellID;                                                             //@synthesize lastEditingCellID=_lastEditingCellID - In the implementation block
@property (nonatomic,readonly) TSTTableModel * tableModel; 
@property (nonatomic,readonly) int editingMode; 
@property (nonatomic,copy) TSTTableSelection * selection; 
@property (assign,nonatomic) unsigned char lastColumnHitByTap; 
@property (assign,nonatomic) BOOL cellWasEditedInCurrentSession; 
@property (assign,nonatomic) BOOL editingCellInProxy; 
@property (nonatomic,retain) TSTSearchReference * searchReference; 
@property (assign,nonatomic) TSTTextStatisticsTracker * tracker; 
@property (nonatomic,readonly) int previousEditingMode; 
@property (nonatomic,readonly) NSArray * coloredReferences;                                                                  //@synthesize coloredReferences=_coloredReferences - In the implementation block
-(void)dealloc;
-(TSTTextStatisticsTracker *)tracker;
-(void)setTracker:(TSTTextStatisticsTracker *)arg1 ;
-(TSTTableSelection *)selection;
-(void)setSelection:(TSTTableSelection *)arg1 ;
-(int)editingMode;
-(TSTTableModel *)tableModel;
-(void)adoptStylesheet:(id)arg1 withMapper:(id)arg2 ;
-(void)storage:(id)arg1 didChangeRange:(NSRange)arg2 delta:(long long)arg3 broadcastKind:(int)arg4 ;
-(TSTTableInfo *)tableInfo;
-(SCD_Struct_TS140)editingCellID;
-(id)initWithTableInfo:(id)arg1 ;
-(void)p_unregisterStorageObserver;
-(void)p_performRichTextStorageDOLC:(id)arg1 newStorage:(id)arg2 ;
-(void)p_registerStorageObserver;
-(void)setSearchReference:(TSTSearchReference *)arg1 ;
-(void)setCellWasEditedInCurrentSession:(BOOL)arg1 ;
-(TSWPStorage *)editingStorage;
-(TSKCommandController *)commandController;
-(BOOL)cellWasEditedInCurrentSession;
-(void)setEndingEditingDueToCancelOperation:(BOOL)arg1 ;
-(TSTCell *)editingCell;
-(void)setEditingCellID:(SCD_Struct_TS140)arg1 ;
-(id)initForPasteboardFromSourceInfo:(id)arg1 stylesheet:(id)arg2 ;
-(void)setEditingStorage:(TSWPStorage *)arg1 ;
-(void)setTableInfo:(TSTTableInfo *)arg1 ;
-(void)setEditingCell:(TSTCell *)arg1 ;
-(SCD_Struct_TS142)editingCellRange;
-(id)storageForCellID:(SCD_Struct_TS140)arg1 ;
-(id)prepareEditingStorageToEditCell:(SCD_Struct_TS140)arg1 ;
-(void)performEndRichTextEditing;
-(void)reloadValue;
-(void)reloadValueFromFocusedCell;
-(void)changeEditingMode:(int)arg1 ;
-(BOOL)p_shouldSetCellPostFlight;
-(void)willEndEditingDueToCancelOperation;
-(void)didEndEditingDueToCancelOperation;
-(BOOL)editingCellInProxy;
-(void)setEditingCellInProxy:(BOOL)arg1 ;
-(TSTSearchReference *)searchReference;
-(BOOL)isEndingEditingDueToCancelOperation;
-(unsigned char)lastColumnHitByTap;
-(void)setLastColumnHitByTap:(unsigned char)arg1 ;
-(int)previousEditingMode;
-(SCD_Struct_TS140)lastEditingCellID;
-(void)setLastEditingCellID:(SCD_Struct_TS140)arg1 ;
-(NSArray *)coloredReferences;
-(BOOL)isDispatchingPreflight;
-(void)setDispatchingPreflight:(BOOL)arg1 ;
@end

