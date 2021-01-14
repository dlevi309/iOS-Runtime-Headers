/*
* Generated on Thursday, January 14, 2021 at 2:23:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ReminderKit.framework/ReminderKit
*/


@class REMListChangeItem;

@interface REMListSublistContextChangeItem : NSObject {

	REMListChangeItem* _listChangeItem;

}

@property (nonatomic,retain) REMListChangeItem * listChangeItem;              //@synthesize listChangeItem=_listChangeItem - In the implementation block
-(void)insertListChangeItem:(id)arg1 beforeListChangeItem:(id)arg2 ;
-(void)insertListChangeItem:(id)arg1 afterListChangeItem:(id)arg2 ;
-(void)addListChangeItem:(id)arg1 ;
-(REMListChangeItem *)listChangeItem;
-(void)setListChangeItem:(REMListChangeItem *)arg1 ;
-(id)initWithListChangeItem:(id)arg1 ;
-(void)_insertListChangeItem:(id)arg1 adjacentToListChangeItem:(id)arg2 isAfter:(BOOL)arg3 ;
@end

