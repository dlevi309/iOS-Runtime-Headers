/*
* Generated on Thursday, January 14, 2021 at 2:28:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ReminderMigration.framework/ReminderMigration
*/


@class REMListChangeItem;

@interface CalOrderedListChangeItem : NSObject {

	REMListChangeItem* _listChangeItem;
	long long _order;

}

@property (nonatomic,retain) REMListChangeItem * listChangeItem;              //@synthesize listChangeItem=_listChangeItem - In the implementation block
@property (assign,nonatomic) long long order;                                 //@synthesize order=_order - In the implementation block
-(REMListChangeItem *)listChangeItem;
-(void)setListChangeItem:(REMListChangeItem *)arg1 ;
-(long long)order;
-(void)setOrder:(long long)arg1 ;
@end

