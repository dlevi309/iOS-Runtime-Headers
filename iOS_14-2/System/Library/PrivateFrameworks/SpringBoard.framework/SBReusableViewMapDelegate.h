/*
* Generated on Thursday, January 14, 2021 at 2:25:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/


@protocol SBReusableViewMapDelegate <NSObject>
@optional
-(BOOL)viewMap:(id)arg1 shouldRecycleView:(id)arg2;
-(id)viewMap:(id)arg1 makeNewViewOfClass:(Class)arg2;

@required
-(id)recycledViewsContainerProviderForViewMap:(id)arg1;
-(unsigned long long)viewMap:(id)arg1 maxRecycledViewsOfClass:(Class)arg2;

@end

