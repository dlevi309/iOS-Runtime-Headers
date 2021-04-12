/*
* Generated on Monday, March 1, 2021 at 2:30:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

@class _UIClickPresentation;


@protocol _UIClickPresentationAssisting <NSObject>
@property (nonatomic,retain) _UIClickPresentation * presentation; 
@property (nonatomic,copy) id lifecycleCompletion; 
@required
-(void)setPresentation:(id)arg1;
-(_UIClickPresentation *)presentation;
-(void)setLifecycleCompletion:(/*^block*/id)arg1;
-(id)lifecycleCompletion;
-(id)initWithClickPresentation:(id)arg1;
-(void)presentFromSourcePreview:(id)arg1 lifecycleCompletion:(/*^block*/id)arg2;
-(void)dismissWithReason:(unsigned long long)arg1 alongsideActions:(/*^block*/id)arg2 completion:(/*^block*/id)arg3;

@end

