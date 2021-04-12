/*
* Generated on Monday, March 1, 2021 at 2:30:17 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

@class NSArray, UIView;


@protocol UIInputViewSetPlacementApplicator <NSObject>
@property (readonly) CGPoint origin; 
@property (retain,readonly) NSArray * constraints; 
@property (retain,readonly) UIView * draggableView; 
@property (retain,readonly) UIView * twoFingerDraggableView; 
@property (readonly) UIEdgeInsets contentInsets; 
@property (readonly) CGRect popoverFrame; 
@required
+(id)applicatorForOwner:(id)arg1 withPlacement:(id)arg2;
-(void)invalidate;
-(NSArray *)constraints;
-(CGPoint)origin;
-(UIEdgeInsets)contentInsets;
-(void)prepare;
-(UIView *)draggableView;
-(BOOL)preBeginGesture:(id)arg1 shouldBegin:(BOOL*)arg2;
-(BOOL)isGesture:(id)arg1 inDraggableView:(CGPoint)arg2;
-(BOOL)allConstraintsActive;
-(void)applyChanges:(id)arg1;
-(UIView *)twoFingerDraggableView;
-(CGRect)popoverFrame;

@end

