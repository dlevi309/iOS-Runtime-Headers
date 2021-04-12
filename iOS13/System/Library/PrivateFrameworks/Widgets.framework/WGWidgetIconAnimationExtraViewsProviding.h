/*
* Generated on Monday, March 1, 2021 at 2:33:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Widgets.framework/Widgets
*/

@class UIView, NSArray;


@protocol WGWidgetIconAnimationExtraViewsProviding <NSObject>
@property (nonatomic,readonly) UIView * extraViewsContainer; 
@property (nonatomic,copy,readonly) NSArray * extraViews; 
@property (nonatomic,readonly) BOOL shouldAnimateLastTwoViewsAsOne; 
@property (nonatomic,readonly) BOOL shouldAnimateFirstTwoViewsAsOne; 
@required
-(UIView *)extraViewsContainer;
-(NSArray *)extraViews;
-(BOOL)shouldAnimateLastTwoViewsAsOne;
-(BOOL)shouldAnimateFirstTwoViewsAsOne;

@end

