/*
* Generated on Monday, March 1, 2021 at 2:33:13 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
*/

#import <NotesShared/CRTable.h>

@class ICTableCellChangeNotifier, NSMutableDictionary, CRTTCompatibleDocument;

@interface ICTable : CRTable {

	ICTableCellChangeNotifier* _cellChangeNotifier;
	NSMutableDictionary* _columnTextStorages;

}

@property (nonatomic,retain) NSMutableDictionary * columnTextStorages;                      //@synthesize columnTextStorages=_columnTextStorages - In the implementation block
@property (nonatomic,readonly) CRTTCompatibleDocument * ttDocument; 
@property (nonatomic,readonly) ICTableCellChangeNotifier * cellChangeNotifier;              //@synthesize cellChangeNotifier=_cellChangeNotifier - In the implementation block
+(void)registerWithCRCoder;
-(id)copyIntoNewDocumentWithReplicaID:(id)arg1 ;
-(void)setAttributedString:(id)arg1 columnIndex:(unsigned long long)arg2 rowIndex:(unsigned long long)arg3 ;
-(id)stringForColumnIndex:(unsigned long long)arg1 rowIndex:(unsigned long long)arg2 ;
-(BOOL)isEmptyAtColumnIndexes:(id)arg1 rowIndexes:(id)arg2 ;
-(id)subtableWithDocument:(id)arg1 forSelectionContainingColumnIndices:(id)arg2 rowIndices:(id)arg3 ;
-(CRTTCompatibleDocument *)ttDocument;
-(ICTableCellChangeNotifier *)cellChangeNotifier;
-(id)stringForColumnID:(id)arg1 rowID:(id)arg2 ;
-(id)mergeableStringForColumnID:(id)arg1 rowID:(id)arg2 ;
-(id)joinedAttributedStringForColumns:(id)arg1 rows:(id)arg2 ;
-(BOOL)columnIsEmptyAtIndex:(unsigned long long)arg1 ;
-(BOOL)rowIsEmptyAtIndex:(unsigned long long)arg1 ;
-(BOOL)isEmptyAtColumnIdentifiers:(id)arg1 rowIdentifiers:(id)arg2 ;
-(NSMutableDictionary *)columnTextStorages;
-(void)setColumnTextStorages:(NSMutableDictionary *)arg1 ;
@end

