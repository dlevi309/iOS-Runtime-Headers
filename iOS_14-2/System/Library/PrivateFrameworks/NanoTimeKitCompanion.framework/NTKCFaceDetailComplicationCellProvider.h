/*
* Generated on Thursday, January 14, 2021 at 2:26:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/


@protocol NTKComplicationPickerListProvider;
@class UITableView;

@interface NTKCFaceDetailComplicationCellProvider : NSObject {

	UITableView* _tableView;
	id<NTKComplicationPickerListProvider> _listProvider;

}

@property (nonatomic,retain) UITableView * tableView;                                         //@synthesize tableView=_tableView - In the implementation block
@property (nonatomic,retain) id<NTKComplicationPickerListProvider> listProvider;              //@synthesize listProvider=_listProvider - In the implementation block
-(UITableView *)tableView;
-(void)setTableView:(UITableView *)arg1 ;
-(id<NTKComplicationPickerListProvider>)listProvider;
-(id)initWithTableView:(id)arg1 listProvider:(id)arg2 ;
-(id)cellForItem:(id)arg1 atIndexPath:(id)arg2 ;
-(void)setListProvider:(id<NTKComplicationPickerListProvider>)arg1 ;
@end

