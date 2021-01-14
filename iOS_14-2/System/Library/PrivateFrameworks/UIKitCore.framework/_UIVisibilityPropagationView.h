/*
* Generated on Thursday, January 14, 2021 at 2:20:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIView.h>

@class RBSTarget, NSString, BSServiceConnectionEndpointInjector, NSMutableArray;

@interface _UIVisibilityPropagationView : UIView {

	os_unfair_lock_s _visibilityLock;
	RBSTarget* _visibilityLock_target;
	BOOL _visibilityLock_enabled;
	NSString* _visibilityLock_sourceEnvironment;
	BOOL _visibilityLock_updateEnqueued;
	os_unfair_lock_s _visibilityProcessingLock;
	RBSTarget* _visibilityProcessingLock_target;
	NSString* _visibilityProcessingLock_sourceEnvironment;
	BSServiceConnectionEndpointInjector* _visibilityProcessingLock_endpointInjector;
	NSMutableArray* _windowChangeNotifications;

}

@property (assign,getter=isVisibilityPropagationEnabled,nonatomic) BOOL visibilityPropagationEnabled; 
-(void)_visibilityLock_enqueueUpdateIfNecessary;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setHidden:(BOOL)arg1 ;
-(void)_visibilityLock_updateVisibility;
-(void)_visibilityLock_setSource:(id)arg1 ;
-(BOOL)isVisibilityPropagationEnabled;
-(void)didMoveToWindow;
-(void)setVisibilityTarget:(id)arg1 ;
-(void)_visibilityLock_enqueueUpdateIfNecessary_body;
-(id)initWithCoder:(id)arg1 ;
-(void)setVisibilityPropagationEnabled:(BOOL)arg1 ;
-(void)_updateVisibility;
-(void)dealloc;
@end

