/*
* Generated on Thursday, January 14, 2021 at 2:22:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/


@protocol PUAdjustmentsViewDataSource <NSObject>
@optional
-(BOOL)canModifyAdjustmentAtIndexPath:(id)arg1;
-(void)setAdjustmentEnabled:(BOOL)arg1 atIndexPath:(id)arg2 completionHandler:(/*^block*/id)arg3;
-(void)modifyValue:(double)arg1 atIndexPath:(id)arg2;

@required
-(id)infoForItemAtIndexPath:(id)arg1;
-(void)resetInfoAtIndexPath:(id)arg1;
-(long long)numberOfItemsInSection:(long long)arg1;
-(long long)numberOfSections;

@end

