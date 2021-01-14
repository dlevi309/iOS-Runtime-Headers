/*
* Generated on Thursday, January 14, 2021 at 2:20:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIView.h>
#import <UIKitCore/_UIVisualEffectViewParticipating.h>

@protocol _UIVisualEffectViewParticipating, _UIVisualEffectViewSubviewMonitoring;
@class _UIVisualEffectViewBackdropCaptureGroup, NSArray, UIView, NSString;

@interface _UIVisualEffectSubview : UIView <_UIVisualEffectViewParticipating> {

	NSArray* _filters;
	_UIVisualEffectViewBackdropCaptureGroup* _primaryCaptureGroup;
	UIView*<_UIVisualEffectViewParticipating> _containedView;
	NSArray* _viewEffects;
	id<_UIVisualEffectViewSubviewMonitoring> _subviewMonitor;

}

@property (assign,nonatomic,__weak) id<_UIVisualEffectViewSubviewMonitoring> subviewMonitor;              //@synthesize subviewMonitor=_subviewMonitor - In the implementation block
@property (assign,nonatomic) BOOL disableGroupFiltering; 
@property (nonatomic,retain) _UIVisualEffectViewBackdropCaptureGroup * primaryCaptureGroup;               //@synthesize primaryCaptureGroup=_primaryCaptureGroup - In the implementation block
@property (nonatomic,retain) UIView*<_UIVisualEffectViewParticipating> containedView;                     //@synthesize containedView=_containedView - In the implementation block
@property (nonatomic,copy) NSArray * viewEffects;                                                         //@synthesize viewEffects=_viewEffects - In the implementation block
@property (nonatomic,copy) NSArray * filters;                                                             //@synthesize filters=_filters - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(_UIVisualEffectViewBackdropCaptureGroup *)primaryCaptureGroup;
-(void)setSubviewMonitor:(id<_UIVisualEffectViewSubviewMonitoring>)arg1 ;
-(void)setFilters:(NSArray *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(BOOL)_shouldAnimatePropertyWithKey:(id)arg1 ;
-(void)applyIdentityFilterEffects;
-(void)setPrimaryCaptureGroup:(_UIVisualEffectViewBackdropCaptureGroup *)arg1 ;
-(id)_initialValueForLayer:(id)arg1 keyPath:(id)arg2 usePresentationValue:(BOOL)arg3 ;
-(NSArray *)filters;
-(void)setContainedView:(UIView*<_UIVisualEffectViewParticipating>)arg1 ;
-(void)_monitoredView:(id)arg1 willMoveFromSuperview:(id)arg2 toSuperview:(id)arg3 ;
-(void)applyRequestedFilterEffects;
-(void)setDisableGroupFiltering:(BOOL)arg1 ;
-(void)applyRequestedViewEffects;
-(void)layoutSubviews;
-(void)willMoveToWindow:(id)arg1 ;
-(void)setViewEffects:(NSArray *)arg1 ;
-(id<_UIVisualEffectViewSubviewMonitoring>)subviewMonitor;
-(UIView*<_UIVisualEffectViewParticipating>)containedView;
-(void)applyIdentityViewEffects;
-(BOOL)disableGroupFiltering;
-(NSArray *)viewEffects;
@end

