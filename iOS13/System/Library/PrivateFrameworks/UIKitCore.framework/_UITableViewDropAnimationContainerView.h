/*
* Generated on Monday, March 1, 2021 at 2:30:21 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/_UITableViewContainerView.h>

@class NSArray;

@interface _UITableViewDropAnimationContainerView : _UITableViewContainerView {

	long long _activeDropAnimationCount;
	double _originalTargetCenterY;
	CGPoint __tableViewContainerOffsetFromTargetCenter;

}

@property (assign,nonatomic) long long activeDropAnimationCount;                             //@synthesize activeDropAnimationCount=_activeDropAnimationCount - In the implementation block
@property (assign,nonatomic) double originalTargetCenterY;                                   //@synthesize originalTargetCenterY=_originalTargetCenterY - In the implementation block
@property (nonatomic,readonly) NSArray * cells; 
@property (nonatomic,readonly) BOOL hasCompletedAllDropAnimations; 
@property (assign,nonatomic) CGPoint _tableViewContainerOffsetFromTargetCenter;              //@synthesize _tableViewContainerOffsetFromTargetCenter=__tableViewContainerOffsetFromTargetCenter - In the implementation block
-(id)init;
-(void)setCenter:(CGPoint)arg1 ;
-(void)setFrame:(CGRect)arg1 ;
-(void)beginDropAnimation;
-(void)endDropAnimation;
-(BOOL)hasCompletedAllDropAnimations;
-(NSArray *)cells;
-(void)setOriginalTargetCenterY:(double)arg1 ;
-(double)originalTargetCenterY;
-(void)set_tableViewContainerOffsetFromTargetCenter:(CGPoint)arg1 ;
-(void)updateOffsetFromTargetCenterIfNeeded;
-(long long)activeDropAnimationCount;
-(void)setActiveDropAnimationCount:(long long)arg1 ;
-(CGPoint)_tableViewContainerOffsetFromTargetCenter;
@end

