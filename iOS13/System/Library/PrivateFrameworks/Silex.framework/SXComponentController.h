/*
* Generated on Monday, March 1, 2021 at 2:33:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
*/

#import <Silex/Silex-Structs.h>
#import <libobjc.A.dylib/SXViewportChangeListener.h>
#import <libobjc.A.dylib/SXComponentController.h>
@class SXLayoutBlueprint, NSArray;


@protocol SXComponentController <SXAXAssistiveTechStatusChangeListener>
@property (nonatomic,readonly) SXLayoutBlueprint * presentedBlueprint; 
@property (nonatomic,readonly) NSArray * flattenedComponentViews; 
@property (nonatomic,readonly) BOOL isPresented; 
@required
-(void)addObserver:(id)arg1;
-(void)removeObserver:(id)arg1;
-(BOOL)isPresented;
-(id)componentsInRect:(CGRect)arg1;
-(id)componentViewForPoint:(CGPoint)arg1;
-(id)componentViewsForRole:(int)arg1;
-(id)componentViewForIdentifier:(id)arg1;
-(SXLayoutBlueprint *)presentedBlueprint;
-(NSArray *)flattenedComponentViews;

@end

#import <libobjc.A.dylib/SXLayoutIntegrator.h>

@protocol SXComponentHosting, SXComponentViewEngine, SXDOMObjectProviding;
@class SXLayoutBlueprint, NSArray, SXViewport, NSHashTable, NSMutableDictionary, NSMutableArray, SXPresentationAttributes, NSString;

@interface SXComponentController : NSObject <SXViewportChangeListener, SXComponentController, SXLayoutIntegrator> {

	BOOL _isPresented;
	BOOL _isPresenting;
	SXLayoutBlueprint* _presentedBlueprint;
	NSArray* _flattenedComponentViews;
	id<SXComponentHosting> _host;
	SXViewport* _viewport;
	id<SXComponentViewEngine> _componentViewEngine;
	id<SXDOMObjectProviding> _DOMObjectProvider;
	NSHashTable* _observers;
	NSMutableDictionary* _mappedComponentViews;
	NSMutableArray* _sortedComponentViews;
	NSMutableArray* _nestedComponentViews;
	SXPresentationAttributes* _presentationAttributes;

}

@property (nonatomic,readonly) SXViewport * viewport;                                          //@synthesize viewport=_viewport - In the implementation block
@property (nonatomic,readonly) id<SXComponentViewEngine> componentViewEngine;                  //@synthesize componentViewEngine=_componentViewEngine - In the implementation block
@property (nonatomic,readonly) id<SXDOMObjectProviding> DOMObjectProvider;                     //@synthesize DOMObjectProvider=_DOMObjectProvider - In the implementation block
@property (nonatomic,readonly) NSHashTable * observers;                                        //@synthesize observers=_observers - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * mappedComponentViews;                       //@synthesize mappedComponentViews=_mappedComponentViews - In the implementation block
@property (nonatomic,retain) NSMutableArray * sortedComponentViews;                            //@synthesize sortedComponentViews=_sortedComponentViews - In the implementation block
@property (nonatomic,retain) NSMutableArray * nestedComponentViews;                            //@synthesize nestedComponentViews=_nestedComponentViews - In the implementation block
@property (assign,nonatomic) BOOL isPresenting;                                                //@synthesize isPresenting=_isPresenting - In the implementation block
@property (nonatomic,readonly) SXPresentationAttributes * presentationAttributes;              //@synthesize presentationAttributes=_presentationAttributes - In the implementation block
@property (assign,nonatomic,__weak) id<SXComponentHosting> host;                               //@synthesize host=_host - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) SXLayoutBlueprint * presentedBlueprint;                         //@synthesize presentedBlueprint=_presentedBlueprint - In the implementation block
@property (nonatomic,readonly) NSArray * flattenedComponentViews;                              //@synthesize flattenedComponentViews=_flattenedComponentViews - In the implementation block
@property (nonatomic,readonly) BOOL isPresented;                                               //@synthesize isPresented=_isPresented - In the implementation block
-(id<SXComponentHosting>)host;
-(void)addObserver:(id)arg1 ;
-(void)removeObserver:(id)arg1 ;
-(void)setHost:(id<SXComponentHosting>)arg1 ;
-(SXViewport *)viewport;
-(NSHashTable *)observers;
-(BOOL)isPresenting;
-(BOOL)isPresented;
-(SXPresentationAttributes *)presentationAttributes;
-(void)assistiveTechnologyStatusDidChange;
-(id)componentsInRect:(CGRect)arg1 ;
-(id)componentViewForPoint:(CGPoint)arg1 ;
-(id)componentViewsForRole:(int)arg1 ;
-(id)componentViewForIdentifier:(id)arg1 ;
-(SXLayoutBlueprint *)presentedBlueprint;
-(NSArray *)flattenedComponentViews;
-(id<SXDOMObjectProviding>)DOMObjectProvider;
-(void)viewport:(id)arg1 dynamicBoundsDidChangeFromBounds:(CGRect)arg2 ;
-(void)viewport:(id)arg1 boundsDidChangeFromBounds:(CGRect)arg2 ;
-(void)viewport:(id)arg1 appearStateChangedFromState:(unsigned long long)arg2 ;
-(id)initWithViewport:(id)arg1 componentViewEngine:(id)arg2 DOMObjectProvider:(id)arg3 ;
-(void)integrateBlueprint:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)provideInfosLayoutTo:(id)arg1 ;
-(id)componentViews;
-(void)setIsPresenting:(BOOL)arg1 ;
-(NSMutableArray *)nestedComponentViews;
-(void)removeComponentsInLayoutBlueprint:(id)arg1 removedFromLayoutBlueprint:(id)arg2 ;
-(void)presentBlueprint:(id)arg1 forParentComponentView:(id)arg2 inHost:(id)arg3 ;
-(void)presentComponentsInBlueprint:(id)arg1 ;
-(void)updateVisibilityStatesForComponentViews:(id)arg1 ;
-(void)updatePresentationStateForNestedComponentViews:(id)arg1 presentationState:(long long)arg2 ;
-(void)fadeComponent:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)updatePresentationStateForNestedComponentView:(id)arg1 presentationState:(long long)arg2 ;
-(void)renderContentsIfNeededForComponents:(id)arg1 ;
-(id)presentComponentBlueprint:(id)arg1 inHost:(id)arg2 columnLayout:(id)arg3 ;
-(void)setNestedComponentViews:(NSMutableArray *)arg1 ;
-(NSMutableDictionary *)mappedComponentViews;
-(id<SXComponentViewEngine>)componentViewEngine;
-(NSMutableArray *)sortedComponentViews;
-(id)componentViewForPoint:(CGPoint)arg1 inComponents:(id)arg2 ;
-(id)componentViewsForRole:(int)arg1 forLayoutBlueprint:(id)arg2 ;
-(void)updateVisibilityStatesForComponentViews:(id)arg1 toState:(long long)arg2 ;
-(CGRect)renderBounds;
-(void)updateVisibilityStatesForComponentViews:(id)arg1 parentComponent:(id)arg2 withOffset:(CGPoint)arg3 ;
-(void)setMappedComponentViews:(NSMutableDictionary *)arg1 ;
-(void)setSortedComponentViews:(NSMutableArray *)arg1 ;
@end

