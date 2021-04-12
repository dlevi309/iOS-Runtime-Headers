/*
* Generated on Monday, March 1, 2021 at 2:32:36 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
*/


@protocol PKDashboardDataSource <NSObject>
@optional
-(void)setDataSourceDelegate:(id)arg1;
-(id)navigationBarTitle;

@required
-(unsigned long long)numberOfSections;
-(unsigned long long)numberOfItemsInSection:(unsigned long long)arg1;
-(id)itemAtIndexPath:(id)arg1;
-(id)titleForSection:(unsigned long long)arg1;
-(id)footerTextForSection:(unsigned long long)arg1;

@end

