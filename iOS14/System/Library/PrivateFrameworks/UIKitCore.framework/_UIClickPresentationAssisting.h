/*
* Generated on Thursday, January 14, 2021 at 2:20:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

@class _UIClickPresentation;


@protocol _UIClickPresentationAssisting <NSObject>
@property (nonatomic,retain) _UIClickPresentation * presentation; 
@property (nonatomic,copy) id lifecycleCompletion; 
@required
-(void)setPresentation:(id)arg1;
-(void)dismissWithReason:(unsigned long long)arg1 alongsideActions:(/*^block*/id)arg2 completion:(/*^block*/id)arg3;
-(void)presentFromSourcePreview:(id)arg1 lifecycleCompletion:(/*^block*/id)arg2;
-(_UIClickPresentation *)presentation;
-(id)initWithClickPresentation:(id)arg1;
-(id)lifecycleCompletion;
-(void)setLifecycleCompletion:(/*^block*/id)arg1;

@end

