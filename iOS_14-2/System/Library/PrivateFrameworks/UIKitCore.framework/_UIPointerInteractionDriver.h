/*
* Generated on Thursday, January 14, 2021 at 2:20:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

@class UIView;


@protocol _UIPointerInteractionDriver <NSObject>
@property (assign,nonatomic,__weak) UIView * view; 
@required
-(CGPoint*)locationInView:(id)arg1;
-(void)setView:(id)arg1;
-(id)initWithSink:(id)arg1;
-(UIView *)view;
-(void)invalidate;

@end

