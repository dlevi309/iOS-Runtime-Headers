/*
* Generated on Monday, March 1, 2021 at 2:35:17 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusFoundation.framework/OpusFoundation
*/


@protocol OFUIGridViewDataSource <NSObject>
@optional
-(void)gridView:(id)arg1 willDisplayCell:(id)arg2 atIndex:(unsigned long long)arg3;
-(void)gridView:(id)arg1 didRecycleCell:(id)arg2 atIndex:(unsigned long long)arg3;

@required
-(long long)numberOfCellsInGridView:(id)arg1;
-(id)gridView:(id)arg1 cellAtIndex:(unsigned long long)arg2;

@end

