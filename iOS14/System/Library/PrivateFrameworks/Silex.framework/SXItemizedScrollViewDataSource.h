/*
* Generated on Thursday, January 14, 2021 at 2:24:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
*/


@protocol SXItemizedScrollViewDataSource <NSObject>
@optional
-(BOOL)itemizedScrollViewWillReindex:(id)arg1;
-(BOOL)itemizedScrollView:(id)arg1 isAllowedToAddViewInHierarchy:(unsigned long long)arg2;
-(double)gutterBetweenItemsInNotPagingItemizedScrollView:(id)arg1;

@required
-(unsigned long long)numberOfViewsInItemizedScrollView:(id)arg1;
-(CGRect*)itemizedScrollView:(id)arg1 frameForViewAtIndex:(unsigned long long)arg2;
-(id)itemizedScrollView:(id)arg1 viewAtIndex:(unsigned long long)arg2;

@end

