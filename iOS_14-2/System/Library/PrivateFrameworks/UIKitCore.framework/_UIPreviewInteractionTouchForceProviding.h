/*
* Generated on Thursday, January 14, 2021 at 2:20:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


@protocol _UIPreviewInteractionTouchForceProviding <NSObject>
@property (getter=isActive,nonatomic,readonly) BOOL active; 
@property (nonatomic,readonly) double touchForce; 
@required
-(double)touchForce;
-(BOOL)isActive;
-(CGPoint*)locationInCoordinateSpace:(id)arg1;
-(void)cancelInteraction;

@end

