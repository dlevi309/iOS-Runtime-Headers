/*
* Generated on Thursday, January 14, 2021 at 2:20:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSArray *)constraints;
-(BOOL)allConstraintsActive;
-(CGPoint)origin;
-(UIEdgeInsets)contentInsets;
-(BOOL)isGesture:(id)arg1 inDraggableView:(CGPoint)arg2;
-(void)applyChanges:(id)arg1;
-(UIView *)draggableView;
-(CGRect)popoverFrame;
-(UIView *)twoFingerDraggableView;
-(BOOL)preBeginGesture:(id)arg1 shouldBegin:(BOOL*)arg2;
-(void)invalidate;
-(void)prepare;

@end

