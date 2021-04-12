/*
* Generated on Thursday, January 14, 2021 at 2:23:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ReminderKit.framework/ReminderKit
*/


@class REMListChangeItem, REMListBadge, NSString;

@interface REMListAppearanceContextChangeItem : NSObject {

	REMListChangeItem* _listChangeItem;

}

@property (nonatomic,retain) REMListChangeItem * listChangeItem;              //@synthesize listChangeItem=_listChangeItem - In the implementation block
@property (nonatomic,copy) REMListBadge * badge; 
@property (nonatomic,copy) NSString * badgeEmblem; 
-(void)setBadge:(REMListBadge *)arg1 ;
-(REMListBadge *)badge;
-(NSString *)badgeEmblem;
-(void)setBadgeEmblem:(NSString *)arg1 ;
-(BOOL)showingLargeAttachments;
-(REMListChangeItem *)listChangeItem;
-(void)setShowingLargeAttachments:(BOOL)arg1 ;
-(void)setListChangeItem:(REMListChangeItem *)arg1 ;
-(id)initWithListChangeItem:(id)arg1 ;
@end

