/*
* Generated on Monday, March 1, 2021 at 2:32:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MessageUI.framework/MessageUI
*/


@class NSIndexSet;

@interface _MFTableViewModelDiff : NSObject {

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

