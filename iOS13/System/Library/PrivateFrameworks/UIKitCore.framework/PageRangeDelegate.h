/*
* Generated on Monday, March 1, 2021 at 2:30:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


@protocol PageRangeDelegate <NSObject>
@required
-(void)setStartPage:(id)arg1 forPageIndex:(long long)arg2;
-(void)setEndPage:(id)arg1 forPageIndex:(long long)arg2;
-(void)addPage:(id)arg1 forPageIndex:(long long)arg2;
-(void)removePage:(id)arg1 forPageIndex:(long long)arg2;
-(void)addAllPages:(id)arg1;
-(BOOL)canSetStartPage:(id)arg1 forPageIndex:(long long)arg2;
-(BOOL)canSetEndPage:(id)arg1 forPageIndex:(long long)arg2;
-(BOOL)canAddPage:(id)arg1 forPageIndex:(long long)arg2;
-(BOOL)canRemovePage:(id)arg1 forPageIndex:(long long)arg2;
-(BOOL)canAddAllPages:(id)arg1;
-(BOOL)canShowMenuBar;

@end

