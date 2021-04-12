/*
* Generated on Monday, March 1, 2021 at 2:31:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ReminderKit.framework/ReminderKit
*/


@class REMListChangeItem, NSString;

@interface REMListAppearanceContextChangeItem : NSObject {

	REMListChangeItem* _listChangeItem;

}

@property (nonatomic,retain) REMListChangeItem * listChangeItem;              //@synthesize listChangeItem=_listChangeItem - In the implementation block
@property (nonatomic,copy) NSString * badgeEmblem; 
-(REMListChangeItem *)listChangeItem;
-(NSString *)badgeEmblem;
-(void)setBadgeEmblem:(NSString *)arg1 ;
-(BOOL)showingLargeAttachments;
-(void)setShowingLargeAttachments:(BOOL)arg1 ;
-(id)initWithListChangeItem:(id)arg1 ;
-(void)setListChangeItem:(REMListChangeItem *)arg1 ;
@end

