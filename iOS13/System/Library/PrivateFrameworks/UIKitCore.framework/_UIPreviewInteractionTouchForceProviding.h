/*
* Generated on Monday, March 1, 2021 at 2:30:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


@protocol _UIPreviewInteractionTouchForceProviding <NSObject>
@property (getter=isActive,nonatomic,readonly) BOOL active; 
@property (nonatomic,readonly) double touchForce; 
@required
-(BOOL)isActive;
-(void)cancelInteraction;
-(double)touchForce;
-(CGPoint*)locationInCoordinateSpace:(id)arg1;

@end

