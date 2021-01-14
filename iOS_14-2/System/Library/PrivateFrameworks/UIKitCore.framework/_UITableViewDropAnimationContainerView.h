/*
* Generated on Thursday, January 14, 2021 at 2:20:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSArray *)cells;
-(id)init;
-(void)setOriginalTargetCenterY:(double)arg1 ;
-(double)originalTargetCenterY;
-(void)set_tableViewContainerOffsetFromTargetCenter:(CGPoint)arg1 ;
-(void)updateOffsetFromTargetCenterIfNeeded;
-(long long)activeDropAnimationCount;
-(void)setActiveDropAnimationCount:(long long)arg1 ;
-(CGPoint)_tableViewContainerOffsetFromTargetCenter;
-(void)setFrame:(CGRect)arg1 ;
-(void)setCenter:(CGPoint)arg1 ;
-(void)endDropAnimation;
-(void)beginDropAnimation;
-(BOOL)hasCompletedAllDropAnimations;
@end

