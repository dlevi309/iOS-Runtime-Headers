/*
* Generated on Monday, March 1, 2021 at 2:33:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ReminderMigration.framework/ReminderMigration
*/


@class REMListChangeItem;

@interface CalOrderedListChangeItem : NSObject {

	REMListChangeItem* _listChangeItem;
	long long _order;

}

@property (nonatomic,retain) REMListChangeItem * listChangeItem;              //@synthesize listChangeItem=_listChangeItem - In the implementation block
@property (assign,nonatomic) long long order;                                 //@synthesize order=_order - In the implementation block
-(long long)order;
-(void)setOrder:(long long)arg1 ;
-(REMListChangeItem *)listChangeItem;
-(void)setListChangeItem:(REMListChangeItem *)arg1 ;
@end

