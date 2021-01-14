/*
* Generated on Thursday, January 14, 2021 at 2:20:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(FBScene *)scene;
-(id)succinctDescription;
-(long long)compare:(id)arg1 ;
-(BOOL)isInvalidated;
-(id)init;
-(UIScenePresentationContext *)presentationContext;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(void)setEnabled:(BOOL)arg1 ;
-(BOOL)isActive;
-(id)newSnapshotContext;
-(UIView*<UIScenePresentation>)presentationView;
-(void)deactivate;
-(void)activate;
-(BOOL)isVisibilityPropagationEnabled;
-(BOOL)isHosting;
-(NSString *)description;
-(id<NSCopying>)sortContext;
-(BSMonotonicReferenceTime *)_initializeTime;
-(id)newSnapshot;
-(id)initWithOwner:(id)arg1 identifier:(id)arg2 sortContext:(id)arg3 ;
-(void)modifyPresentationContext:(/*^block*/id)arg1 ;
-(void)invalidate;
-(NSString *)identifier;
-(void)setVisibilityPropagationEnabled:(BOOL)arg1 ;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescriptionBuilder;
-(void)set_initializeTime:(BSMonotonicReferenceTime *)arg1 ;
-(void)setHosting:(BOOL)arg1 ;
-(void)dealloc;
-(id)newSnapshotPresentationView;
@end

