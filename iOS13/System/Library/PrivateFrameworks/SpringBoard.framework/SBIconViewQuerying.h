/*
* Generated on Monday, March 1, 2021 at 2:35:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/


@protocol SBIconViewQuerying
@required
-(BOOL)isDisplayingIcon:(id)arg1 inLocation:(id)arg2;
-(BOOL)isDisplayingIconView:(id)arg1;
-(id)iconViewForIcon:(id)arg1 location:(id)arg2;
-(id)firstIconViewForIcon:(id)arg1 inLocations:(id)arg2;
-(id)firstIconViewForIcon:(id)arg1;
-(id)firstIconViewForIcon:(id)arg1 excludingLocations:(id)arg2;
-(BOOL)isDisplayingIcon:(id)arg1 inLocations:(id)arg2;
-(BOOL)isDisplayingIcon:(id)arg1;
-(BOOL)isDisplayingIconView:(id)arg1 inLocation:(id)arg2;
-(void)enumerateDisplayedIconViewsForIcon:(id)arg1 usingBlock:(/*^block*/id)arg2;
-(void)enumerateDisplayedIconViewsUsingBlock:(/*^block*/id)arg1;

@end

