/*
* Generated on Thursday, January 14, 2021 at 2:25:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

@class NSArray;


@protocol WGWidgetIconAnimationExtraViewsProviding <NSObject>
@property (nonatomic,copy,readonly) NSArray * extraViewsContainers; 
@property (nonatomic,copy,readonly) NSArray * extraViews; 
@property (nonatomic,readonly) BOOL shouldAnimateLastTwoViewsAsOne; 
@property (nonatomic,readonly) BOOL shouldAnimateFirstTwoViewsAsOne; 
@required
-(NSArray *)extraViewsContainers;
-(NSArray *)extraViews;
-(BOOL)shouldAnimateLastTwoViewsAsOne;
-(BOOL)shouldAnimateFirstTwoViewsAsOne;

@end

