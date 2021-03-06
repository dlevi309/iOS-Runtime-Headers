/*
* Generated on Thursday, January 14, 2021 at 2:23:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ContactsAutocompleteUI.framework/ContactsAutocompleteUI
*/


@class NSIndexSet;

@interface _CNAutocompleteTableViewModelDiff : NSObject {

	NSIndexSet* _changedRows;
	NSIndexSet* _deletedRows;
	NSIndexSet* _insertedRows;

}

@property (nonatomic,retain) NSIndexSet * changedRows;               //@synthesize changedRows=_changedRows - In the implementation block
@property (nonatomic,retain) NSIndexSet * deletedRows;               //@synthesize deletedRows=_deletedRows - In the implementation block
@property (nonatomic,retain) NSIndexSet * insertedRows;              //@synthesize insertedRows=_insertedRows - In the implementation block
-(NSIndexSet *)changedRows;
-(void)setChangedRows:(NSIndexSet *)arg1 ;
-(NSIndexSet *)deletedRows;
-(void)setDeletedRows:(NSIndexSet *)arg1 ;
-(NSIndexSet *)insertedRows;
-(void)setInsertedRows:(NSIndexSet *)arg1 ;
@end

