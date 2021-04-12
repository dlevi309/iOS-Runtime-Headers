/*
* Generated on Monday, March 1, 2021 at 2:30:15 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

@class UIView;


@protocol _UIPointerInteractionDriver <NSObject>
@property (assign,nonatomic,__weak) UIView * view; 
@required
-(void)invalidate;
-(UIView *)view;
-(void)setView:(id)arg1;
-(CGPoint*)locationInView:(id)arg1;
-(id)initWithSink:(id)arg1;

@end

