/*
* Generated on Thursday, January 14, 2021 at 2:20:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
*/


@protocol CNPropertyCellDelegate <NSObject>
@optional
-(id)sharedActionsDataSource;

@required
-(void)propertyCell:(id)arg1 didUpdateItem:(id)arg2 withNewLabel:(id)arg3;
-(void)propertyCell:(id)arg1 didUpdateItem:(id)arg2 withNewValue:(id)arg3;
-(void)propertyCell:(id)arg1 didDeleteLabel:(id)arg2 forGroup:(id)arg3;
-(void)propertyCell:(id)arg1 performActionForItem:(id)arg2 withTransportType:(long long)arg3;
-(void)propertyCellDidChangeLayout:(id)arg1;
-(id)contactViewCache;

@end

