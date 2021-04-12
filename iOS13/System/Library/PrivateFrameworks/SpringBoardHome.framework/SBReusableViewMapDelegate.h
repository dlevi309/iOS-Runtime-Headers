/*
* Generated on Monday, March 1, 2021 at 2:33:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardHome.framework/SpringBoardHome
*/


@protocol SBReusableViewMapDelegate <NSObject>
@optional
-(id)viewMap:(id)arg1 makeNewViewOfClass:(Class)arg2;
-(BOOL)viewMap:(id)arg1 shouldRecycleView:(id)arg2;

@required
-(unsigned long long)viewMap:(id)arg1 maxRecycledViewsOfClass:(Class)arg2;
-(id)recycledViewsContainerProviderForViewMap:(id)arg1;

@end

