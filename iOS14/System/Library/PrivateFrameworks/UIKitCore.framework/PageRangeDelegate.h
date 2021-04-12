/*
* Generated on Thursday, January 14, 2021 at 2:20:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


@protocol PageRangeDelegate <NSObject>
@required
-(BOOL)canShowMenuBar;
-(void)addAllPages:(id)arg1;
-(BOOL)canAddAllPages:(id)arg1;
-(void)setStartPage:(id)arg1 forPageIndex:(long long)arg2;
-(void)setEndPage:(id)arg1 forPageIndex:(long long)arg2;
-(void)addPage:(id)arg1 forPageIndex:(long long)arg2;
-(void)removePage:(id)arg1 forPageIndex:(long long)arg2;
-(BOOL)canSetStartPage:(id)arg1 forPageIndex:(long long)arg2;
-(BOOL)canSetEndPage:(id)arg1 forPageIndex:(long long)arg2;
-(BOOL)canAddPage:(id)arg1 forPageIndex:(long long)arg2;
-(BOOL)canRemovePage:(id)arg1 forPageIndex:(long long)arg2;

@end

