/*
* Generated on Monday, March 1, 2021 at 2:31:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ReminderKit.framework/ReminderKit
*/


@class REMListChangeItem;

@interface REMListSublistContextChangeItem : NSObject {

	REMListChangeItem* _listChangeItem;

}

@property (nonatomic,retain) REMListChangeItem * listChangeItem;              //@synthesize listChangeItem=_listChangeItem - In the implementation block
-(REMListChangeItem *)listChangeItem;
-(void)addListChangeItem:(id)arg1 ;
-(void)insertListChangeItem:(id)arg1 beforeListChangeItem:(id)arg2 ;
-(void)insertListChangeItem:(id)arg1 afterListChangeItem:(id)arg2 ;
-(id)initWithListChangeItem:(id)arg1 ;
-(void)setListChangeItem:(REMListChangeItem *)arg1 ;
-(void)_insertListChangeItem:(id)arg1 adjacentToListChangeItem:(id)arg2 isAfter:(BOOL)arg3 ;
@end

