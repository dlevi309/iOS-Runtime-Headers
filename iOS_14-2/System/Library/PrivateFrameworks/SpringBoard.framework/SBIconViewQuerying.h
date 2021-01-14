/*
* Generated on Thursday, January 14, 2021 at 2:25:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/


@protocol SBIconViewQuerying <NSObject>
@optional
-(BOOL)isDisplayingIconView:(id)arg1 options:(unsigned long long)arg2;
-(BOOL)isDisplayingIcon:(id)arg1 inLocation:(id)arg2 options:(unsigned long long)arg3;
-(id)firstIconViewForIcon:(id)arg1 options:(unsigned long long)arg2;
-(id)iconViewForIcon:(id)arg1 location:(id)arg2 options:(unsigned long long)arg3;
-(void)enumerateDisplayedIconViewsWithOptions:(unsigned long long)arg1 usingBlock:(/*^block*/id)arg2;
-(void)enumerateIconViewQueryableChildrenWithOptions:(unsigned long long)arg1 usingBlock:(/*^block*/id)arg2;
-(BOOL)isDisplayingIcon:(id)arg1 options:(unsigned long long)arg2;

@required
-(id)firstIconViewForIcon:(id)arg1 inLocations:(id)arg2;
-(void)enumerateDisplayedIconViewsUsingBlock:(/*^block*/id)arg1;
-(void)enumerateDisplayedIconViewsForIcon:(id)arg1 usingBlock:(/*^block*/id)arg2;
-(BOOL)isDisplayingIcon:(id)arg1 inLocations:(id)arg2;
-(BOOL)isDisplayingIconView:(id)arg1 inLocation:(id)arg2;
-(id)firstIconViewForIcon:(id)arg1;
-(id)iconViewForIcon:(id)arg1 location:(id)arg2;
-(BOOL)isDisplayingIconView:(id)arg1;
-(BOOL)isDisplayingIcon:(id)arg1;
-(BOOL)isDisplayingIcon:(id)arg1 inLocation:(id)arg2;
-(id)firstIconViewForIcon:(id)arg1 excludingLocations:(id)arg2;

@end

