/*
* Generated on Monday, March 1, 2021 at 2:30:15 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <libobjc.A.dylib/BSDescriptionProviding.h>
#import <UIKit/UIScenePresenter.h>

@protocol NSCopying_UIComparable;
@class NSString, FBScene, UIScenePresentationContext, _UIScenePresenterOwner, BSMonotonicReferenceTime, _UIScenePresentationView;

@interface _UIScenePresenter : NSObject <BSDescriptionProviding, UIScenePresenter> {

	_UIScenePresenterOwner* _owner;
	UIScenePresentationContext* _presentationContext;
	BSMonotonicReferenceTime* _initializeTime;
	id<NSCopying><_UIComparable> _sortContext;
	NSString* _identifier;
	BOOL _invalidated;
	BOOL _visibilityPropagationEnabled;
	_UIScenePresentationView* _view;
	BOOL _enabled;
	BOOL _hosting;

}

@property (nonatomic,retain) BSMonotonicReferenceTime * _initializeTime;                                           //@synthesize initializeTime=_initializeTime - In the implementation block
@property (assign,getter=isActive,nonatomic) BOOL enabled;                                                         //@synthesize enabled=_enabled - In the implementation block
@property (assign,getter=isHosting,nonatomic) BOOL hosting;                                                        //@synthesize hosting=_hosting - In the implementation block
@property (assign,getter=isVisibilityPropagationEnabled,nonatomic) BOOL visibilityPropagationEnabled;              //@synthesize visibilityPropagationEnabled=_visibilityPropagationEnabled - In the implementation block
@property (nonatomic,copy,readonly) id<NSCopying> sortContext;                                                     //@synthesize sortContext=_sortContext - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSString * identifier; 
@property (nonatomic,__weak,readonly) FBScene * scene; 
@property (nonatomic,copy,readonly) UIScenePresentationContext * presentationContext;                              //@synthesize presentationContext=_presentationContext - In the implementation block
@property (nonatomic,readonly) UIView*<UIScenePresentation> presentationView; 
@property (getter=isActive,nonatomic,readonly) BOOL active; 
@property (getter=isInvalidated,nonatomic,readonly) BOOL invalidated; 
-(id)init;
-(void)dealloc;
-(NSString *)description;
-(void)invalidate;
-(void)setEnabled:(BOOL)arg1 ;
-(long long)compare:(id)arg1 ;
-(NSString *)identifier;
-(BOOL)isActive;
-(BOOL)isInvalidated;
-(id)succinctDescription;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescriptionBuilder;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(FBScene *)scene;
-(void)activate;
-(void)deactivate;
-(UIScenePresentationContext *)presentationContext;
-(void)modifyPresentationContext:(/*^block*/id)arg1 ;
-(UIView*<UIScenePresentation>)presentationView;
-(void)setVisibilityPropagationEnabled:(BOOL)arg1 ;
-(BOOL)isHosting;
-(id<NSCopying>)sortContext;
-(BSMonotonicReferenceTime *)_initializeTime;
-(id)newSnapshotContext;
-(id)newSnapshot;
-(id)newSnapshotPresentationView;
-(id)initWithOwner:(id)arg1 identifier:(id)arg2 sortContext:(id)arg3 ;
-(void)set_initializeTime:(BSMonotonicReferenceTime *)arg1 ;
-(void)setHosting:(BOOL)arg1 ;
-(BOOL)isVisibilityPropagationEnabled;
@end

