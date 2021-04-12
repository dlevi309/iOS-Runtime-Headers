/*
* Generated on Monday, March 1, 2021 at 2:30:10 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/_UIVisualEffectViewSubviewMonitoring.h>

@class NSMutableArray, _UIVisualEffectSubview, _UIVisualEffectViewBackdropCaptureGroup, _UIVisualEffectBackdropView, _UIVisualEffectDescriptor, NSArray, NSString;

@interface _UIVisualEffectHost : NSObject <_UIVisualEffectViewSubviewMonitoring> {

	NSMutableArray* _views;
	BOOL _autosetSubviewLabelTintColor;
	BOOL _contentViewRequired;
	_UIVisualEffectSubview* _contentView;
	_UIVisualEffectViewBackdropCaptureGroup* _primaryCaptureGroup;
	_UIVisualEffectBackdropView* _captureView;
	_UIVisualEffectDescriptor* _currentEffectDescriptor;
	_UIVisualEffectDescriptor* _transitionEffectDescriptor;

}

@property (nonatomic,readonly) _UIVisualEffectSubview * contentView;                                     //@synthesize contentView=_contentView - In the implementation block
@property (assign,nonatomic) BOOL contentViewRequired;                                                   //@synthesize contentViewRequired=_contentViewRequired - In the implementation block
@property (nonatomic,readonly) NSArray * views;                                                          //@synthesize views=_views - In the implementation block
@property (nonatomic,retain) _UIVisualEffectViewBackdropCaptureGroup * primaryCaptureGroup;              //@synthesize primaryCaptureGroup=_primaryCaptureGroup - In the implementation block
@property (assign,nonatomic,__weak) _UIVisualEffectBackdropView * captureView;                           //@synthesize captureView=_captureView - In the implementation block
@property (nonatomic,retain) _UIVisualEffectDescriptor * currentEffectDescriptor;                        //@synthesize currentEffectDescriptor=_currentEffectDescriptor - In the implementation block
@property (nonatomic,readonly) _UIVisualEffectDescriptor * transitionEffectDescriptor;                   //@synthesize transitionEffectDescriptor=_transitionEffectDescriptor - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)description;
-(_UIVisualEffectSubview *)contentView;
-(id)initWithContentView:(id)arg1 ;
-(void)setPrimaryCaptureGroup:(_UIVisualEffectViewBackdropCaptureGroup *)arg1 ;
-(void)_iterateViews:(/*^block*/id)arg1 ;
-(id)_cloneFilters:(id)arg1 ;
-(void)_updateView:(id)arg1 shouldDrawWithTintColor:(BOOL)arg2 ;
-(void)_updateAdjustTintColors;
-(void)_configureEffectDescriptor:(id)arg1 ;
-(void)_applyRequestedDescriptorEffectInvertingView:(id)arg1 ;
-(void)_applyIdentityDescriptorEffectInvertingView:(id)arg1 ;
-(id)_viewForEntry:(id)arg1 fromCapturePool:(id)arg2 imagePool:(id)arg3 otherPool:(id)arg4 ;
-(void)_evaluateInPlaceFiltering;
-(void)_view:(id)arg1 willMoveToWindow:(id)arg2 ;
-(void)_view:(id)arg1 willGainDescendent:(id)arg2 ;
-(void)_view:(id)arg1 willLoseDescendent:(id)arg2 ;
-(void)setContentViewRequired:(BOOL)arg1 ;
-(void)setCaptureView:(_UIVisualEffectBackdropView *)arg1 ;
-(void)setCurrentEffectDescriptor:(_UIVisualEffectDescriptor *)arg1 ;
-(void)prepareToTransitionToEffectDescriptor:(id)arg1 ;
-(void)beginTransition;
-(void)endTransition;
-(void)_applyEffectDescriptor:(id)arg1 ;
-(BOOL)contentViewRequired;
-(NSArray *)views;
-(_UIVisualEffectViewBackdropCaptureGroup *)primaryCaptureGroup;
-(_UIVisualEffectBackdropView *)captureView;
-(_UIVisualEffectDescriptor *)currentEffectDescriptor;
-(_UIVisualEffectDescriptor *)transitionEffectDescriptor;
@end

