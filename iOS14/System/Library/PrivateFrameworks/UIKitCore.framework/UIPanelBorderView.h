/*
* Generated on Thursday, January 14, 2021 at 2:20:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIView.h>

@class UIPanelBorderReplicatingView, NSString;

@interface UIPanelBorderView : UIView {

	BOOL _draggable;
	BOOL _observesTime;
	long long _statusBarAvoidance;
	UIPanelBorderReplicatingView* _replicatingView;
	NSString* _backdropGroupName;

}

@property (nonatomic,retain) UIPanelBorderReplicatingView * replicatingView;              //@synthesize replicatingView=_replicatingView - In the implementation block
@property (assign,nonatomic) BOOL observesTime;                                           //@synthesize observesTime=_observesTime - In the implementation block
@property (nonatomic,retain) NSString * backdropGroupName;                                //@synthesize backdropGroupName=_backdropGroupName - In the implementation block
@property (assign,nonatomic) long long statusBarAvoidance;                                //@synthesize statusBarAvoidance=_statusBarAvoidance - In the implementation block
@property (assign,getter=isDraggable,nonatomic) BOOL draggable;                           //@synthesize draggable=_draggable - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(BOOL)isDraggable;
-(long long)statusBarAvoidance;
-(void)setStatusBarAvoidance:(long long)arg1 ;
-(id)_cachedBackdropGroupName;
-(void)layoutSubviews;
-(NSString *)backdropGroupName;
-(BOOL)observesTime;
-(void)setBackdropGroupName:(NSString *)arg1 ;
-(void)setDraggable:(BOOL)arg1 ;
-(void)setObservesTime:(BOOL)arg1 ;
-(void)setReplicatingView:(UIPanelBorderReplicatingView *)arg1 ;
-(UIPanelBorderReplicatingView *)replicatingView;
@end

