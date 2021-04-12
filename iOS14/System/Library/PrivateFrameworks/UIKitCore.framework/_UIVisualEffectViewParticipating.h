/*
* Generated on Thursday, January 14, 2021 at 2:20:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

@class _UIVisualEffectViewBackdropCaptureGroup, NSArray;


@protocol _UIVisualEffectViewParticipating <NSObject>
@property (nonatomic,retain) _UIVisualEffectViewBackdropCaptureGroup * primaryCaptureGroup; 
@property (nonatomic,retain) UIView*<_UIVisualEffectViewParticipating> containedView; 
@property (nonatomic,copy) NSArray * viewEffects; 
@property (nonatomic,copy) NSArray * filters; 
@required
-(_UIVisualEffectViewBackdropCaptureGroup *)primaryCaptureGroup;
-(void)setFilters:(id)arg1;
-(void)applyIdentityFilterEffects;
-(void)setPrimaryCaptureGroup:(id)arg1;
-(NSArray *)filters;
-(void)setContainedView:(id)arg1;
-(void)applyRequestedFilterEffects;
-(void)applyRequestedViewEffects;
-(void)setViewEffects:(id)arg1;
-(UIView*<_UIVisualEffectViewParticipating>)containedView;
-(void)applyIdentityViewEffects;
-(NSArray *)viewEffects;

@end

