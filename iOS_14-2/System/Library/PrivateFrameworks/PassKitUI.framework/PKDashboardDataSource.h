/*
* Generated on Thursday, January 14, 2021 at 2:24:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
*/


@protocol PKDashboardDataSource <NSObject>
@optional
-(id)navigationBarTitle;
-(void)setDataSourceDelegate:(id)arg1;

@required
-(unsigned long long)numberOfItemsInSection:(unsigned long long)arg1;
-(id)itemAtIndexPath:(id)arg1;
-(unsigned long long)numberOfSections;
-(id)titleForSection:(unsigned long long)arg1;
-(id)footerTextItemForSection:(unsigned long long)arg1;

@end

