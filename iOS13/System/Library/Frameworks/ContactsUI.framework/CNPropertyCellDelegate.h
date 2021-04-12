/*
* Generated on Monday, March 1, 2021 at 2:30:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
*/


@protocol CNPropertyCellDelegate <NSObject>
@optional
-(id)sharedActionsDataSource;

@required
-(id)contactViewCache;
-(void)propertyCell:(id)arg1 didUpdateItem:(id)arg2 withNewLabel:(id)arg3;
-(void)propertyCell:(id)arg1 didUpdateItem:(id)arg2 withNewValue:(id)arg3;
-(void)propertyCell:(id)arg1 didDeleteLabel:(id)arg2 forGroup:(id)arg3;
-(void)propertyCell:(id)arg1 performActionForItem:(id)arg2 withTransportType:(long long)arg3;
-(void)propertyCellDidChangeLayout:(id)arg1;

@end

