/*
* Generated on Monday, March 1, 2021 at 2:31:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
*/


@protocol SKUIObservableNavigationStack <NSObject>
@property (assign,nonatomic,__weak) id<SKUINavigationStackObserver> navigationStackObserver; 
@property (assign,getter=isShowingNavigationStackRootContent,nonatomic) BOOL showingNavigationStackRootContent; 
@required
-(void)popToNavigationStackRootContentAnimated:(BOOL)arg1 withBehavior:(long long)arg2;
-(id<SKUINavigationStackObserver>)navigationStackObserver;
-(void)setNavigationStackObserver:(id)arg1;
-(BOOL)isShowingNavigationStackRootContent;
-(void)setShowingNavigationStackRootContent:(BOOL)arg1;

@end

