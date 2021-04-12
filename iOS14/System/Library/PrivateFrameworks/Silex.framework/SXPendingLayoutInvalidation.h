/*
* Generated on Thursday, January 14, 2021 at 2:24:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
*/


@protocol SXComponent;
@class NFPendingPromise, SXLayoutOptions;

@interface SXPendingLayoutInvalidation : NSObject {

	id<SXComponent> _component;
	NFPendingPromise* _pendingPromise;
	SXLayoutOptions* _layoutOptions;
	/*^block*/id _invalidation;

}

@property (nonatomic,readonly) id<SXComponent> component;                      //@synthesize component=_component - In the implementation block
@property (nonatomic,readonly) NFPendingPromise * pendingPromise;              //@synthesize pendingPromise=_pendingPromise - In the implementation block
@property (nonatomic,readonly) SXLayoutOptions * layoutOptions;                //@synthesize layoutOptions=_layoutOptions - In the implementation block
@property (nonatomic,readonly) id invalidation;                                //@synthesize invalidation=_invalidation - In the implementation block
-(NFPendingPromise *)pendingPromise;
-(id<SXComponent>)component;
-(SXLayoutOptions *)layoutOptions;
-(id)initWithComponent:(id)arg1 pendingPromise:(id)arg2 layoutOptions:(id)arg3 invalidation:(/*^block*/id)arg4 ;
-(id)invalidation;
@end

