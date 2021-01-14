/*
* Generated on Thursday, January 14, 2021 at 2:28:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

