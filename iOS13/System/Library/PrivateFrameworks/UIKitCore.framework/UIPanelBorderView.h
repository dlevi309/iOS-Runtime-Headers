/*
* Generated on Monday, March 1, 2021 at 2:30:12 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIView.h>

@class UIPanelBorderReplicatingView, NSString;

@interface UIPanelBorderView : UIView {

	BOOL _observesTime;
	long long _statusBarAvoidance;
	UIPanelBorderReplicatingView* _replicatingView;
	NSString* _backdropGroupName;

}

@property (nonatomic,retain) UIPanelBorderReplicatingView * replicatingView;              //@synthesize replicatingView=_replicatingView - In the implementation block
@property (assign,nonatomic) BOOL observesTime;                                           //@synthesize observesTime=_observesTime - In the implementation block
@property (nonatomic,retain) NSString * backdropGroupName;                                //@synthesize backdropGroupName=_backdropGroupName - In the implementation block
@property (assign,nonatomic) long long statusBarAvoidance;                                //@synthesize statusBarAvoidance=_statusBarAvoidance - In the implementation block
-(void)layoutSubviews;
-(NSString *)backdropGroupName;
-(void)setBackdropGroupName:(NSString *)arg1 ;
-(long long)statusBarAvoidance;
-(UIPanelBorderReplicatingView *)replicatingView;
-(void)setReplicatingView:(UIPanelBorderReplicatingView *)arg1 ;
-(id)_cachedBackdropGroupName;
-(void)setStatusBarAvoidance:(long long)arg1 ;
-(BOOL)observesTime;
-(void)setObservesTime:(BOOL)arg1 ;
@end

