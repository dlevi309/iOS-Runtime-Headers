/*
* Generated on Thursday, January 14, 2021 at 2:23:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setAttributedString:(id)arg1 columnIndex:(unsigned long long)arg2 rowIndex:(unsigned long long)arg3 ;
-(id)stringForColumnIndex:(unsigned long long)arg1 rowIndex:(unsigned long long)arg2 ;
-(id)copyIntoNewDocumentWithReplicaID:(id)arg1 ;
-(CRTTCompatibleDocument *)ttDocument;
-(BOOL)isEmptyAtColumnIndexes:(id)arg1 rowIndexes:(id)arg2 ;
-(id)subtableWithDocument:(id)arg1 forSelectionContainingColumnIndices:(id)arg2 rowIndices:(id)arg3 ;
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

