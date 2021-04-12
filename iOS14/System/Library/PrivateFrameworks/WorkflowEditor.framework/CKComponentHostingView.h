/*
* Generated on Thursday, January 14, 2021 at 2:28:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WorkflowEditor.framework/WorkflowEditor
*/

#import <WorkflowEditor/WorkflowEditor-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/CKComponentStateListener.h>
#import <libobjc.A.dylib/CKComponentDebugReflowListener.h>

@protocol CKComponentSizeRangeProviding, CKComponentHostingViewDelegate;
@class CKComponent, NSSet, UIView, NSString;

@interface CKComponentHostingView : UIView <CKComponentStateListener, CKComponentDebugReflowListener> {

	Class _componentProvider;
	id<CKComponentSizeRangeProviding> _sizeRangeProvider;
	CKComponentHostingViewInputs* _pendingInputs;
	CKComponentBoundsAnimation _boundsAnimation;
	CKComponent* _component;
	BOOL _componentNeedsUpdate;
	unsigned long long _requestedUpdateMode;
	CKComponentLayout* _mountedLayout;
	NSSet* _mountedComponents;
	BOOL _scheduledAsynchronousComponentUpdate;
	BOOL _isSynchronouslyUpdatingComponent;
	BOOL _isMountingComponent;
	id<CKComponentHostingViewDelegate> _delegate;
	UIView* _containerView;

}

@property (nonatomic,readonly) UIView * containerView;                                        //@synthesize containerView=_containerView - In the implementation block
@property (assign,nonatomic,__weak) id<CKComponentHostingViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithFrame:(CGRect)arg1 ;
-(id<CKComponentHostingViewDelegate>)delegate;
-(void)setDelegate:(id<CKComponentHostingViewDelegate>)arg1 ;
-(void)layoutSubviews;
-(UIView *)containerView;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)dealloc;
-(void)updateModel:(id)arg1 mode:(unsigned long long)arg2 ;
-(void)updateContext:(id)arg1 mode:(unsigned long long)arg2 ;
-(id)initWithComponentProvider:(Class)arg1 sizeRangeProvider:(id)arg2 ;
-(void)componentScopeHandleWithIdentifier:(int)arg1 rootIdentifier:(int)arg2 didReceiveStateUpdate:(/*^block*/id)arg3 mode:(unsigned long long)arg4 ;
-(void)didReceiveReflowComponentsRequest;
-(const CKComponentLayout*)mountedLayout;
-(void)_setNeedsUpdateWithMode:(unsigned long long)arg1 ;
-(void)_asynchronouslyUpdateComponentIfNeeded;
-(void)_scheduleAsynchronousUpdate;
-(void)_applyResult:(const CKBuildComponentResult*)arg1 ;
-(void)_synchronouslyUpdateComponentIfNeeded;
@end

