/*
* Generated on Thursday, January 14, 2021 at 2:27:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ActivityRingsUI.framework/ActivityRingsUI
*/


@protocol ARUIRingGroupAnimation <NSObject>
@property (assign,nonatomic,__weak) id<ARUIRingGroupAnimationDelegate> delegate; 
@required
-(void)update:(double)arg1;
-(id<ARUIRingGroupAnimationDelegate>)delegate;
-(void)completeAnimation;
-(void)setDelegate:(id)arg1;
-(BOOL)isAnimating;

@end

