/*
* Generated on Monday, March 1, 2021 at 2:30:22 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

@class _UIVisualEffectViewBackdropCaptureGroup, NSArray;


@protocol _UIVisualEffectViewParticipating <NSObject>
@property (nonatomic,retain) _UIVisualEffectViewBackdropCaptureGroup * primaryCaptureGroup; 
@property (nonatomic,retain) UIView*<_UIVisualEffectViewParticipating> containedView; 
@property (nonatomic,copy) NSArray * viewEffects; 
@property (nonatomic,copy) NSArray * filters; 
@required
-(NSArray *)filters;
-(void)setFilters:(id)arg1;
-(void)setContainedView:(id)arg1;
-(void)setPrimaryCaptureGroup:(id)arg1;
-(void)applyRequestedFilterEffects;
-(NSArray *)viewEffects;
-(void)setViewEffects:(id)arg1;
-(UIView*<_UIVisualEffectViewParticipating>)containedView;
-(void)applyIdentityFilterEffects;
-(void)applyIdentityViewEffects;
-(void)applyRequestedViewEffects;
-(_UIVisualEffectViewBackdropCaptureGroup *)primaryCaptureGroup;

@end

