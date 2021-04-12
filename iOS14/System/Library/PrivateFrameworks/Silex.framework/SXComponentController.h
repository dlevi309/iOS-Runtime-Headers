/*
* Generated on Thursday, January 14, 2021 at 2:24:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
*/

#import <Silex/Silex-Structs.h>
#import <libobjc.A.dylib/SXViewportChangeListener.h>
#import <libobjc.A.dylib/SXComponentController.h>
@class SXLayoutBlueprint, NSArray;


@protocol SXComponentController <SXAXAssistiveTechStatusChangeListener,SXLayoutIntegrator>
@property (nonatomic,readonly) SXLayoutBlueprint * presentedBlueprint; 
@property (nonatomic,readonly) NSArray * flattenedComponentViews; 
@property (nonatomic,readonly) BOOL isPresented; 
@required
-(id)componentViewsForRole:(int)arg1;
-(void)addObserver:(id)arg1;
-(SXLayoutBlueprint *)presentedBlueprint;
-(void)removeObserver:(id)arg1;
-(id)componentViewForPoint:(CGPoint)arg1;
-(NSArray *)flattenedComponentViews;
-(BOOL)isPresented;
-(id)componentsInRect:(CGRect)arg1;
-(id)componentViewForIdentifier:(id)arg1;

@end


@protocol SXComponentHosting, SXComponentViewEngine, SXDOMObjectProviding;
@class SXLayoutBlueprint, NSArray, SXViewport, NSHashTable, NSMutableDictionary, NSMutableArray, SXPresentationAttributes, NSString;

@interface SXComponentController : NSObject <SXViewportChangeListener, SXComponentController> {

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
-(id<SXDOMObjectProviding>)DOMObjectProvider;
-(id<SXComponentViewEngine>)componentViewEngine;
-(id)componentViewsForRole:(int)arg1 ;
-(SXViewport *)viewport;
-(void)setHost:(id<SXComponentHosting>)arg1 ;
-(void)addObserver:(id)arg1 ;
-(id<SXComponentHosting>)host;
-(void)viewport:(id)arg1 appearStateChangedFromState:(unsigned long long)arg2 ;
-(SXPresentationAttributes *)presentationAttributes;
-(void)viewport:(id)arg1 boundsDidChangeFromBounds:(CGRect)arg2 ;
-(NSMutableArray *)sortedComponentViews;
-(NSHashTable *)observers;
-(id)componentViewForPoint:(CGPoint)arg1 inComponents:(id)arg2 ;
-(NSMutableDictionary *)mappedComponentViews;
-(void)setMappedComponentViews:(NSMutableDictionary *)arg1 ;
-(void)assistiveTechnologyStatusDidChange;
-(void)viewport:(id)arg1 dynamicBoundsDidChangeFromBounds:(CGRect)arg2 ;
-(SXLayoutBlueprint *)presentedBlueprint;
-(void)setNestedComponentViews:(NSMutableArray *)arg1 ;
-(void)setSortedComponentViews:(NSMutableArray *)arg1 ;
-(void)fadeComponent:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)componentViewsForRole:(int)arg1 forLayoutBlueprint:(id)arg2 ;
-(void)provideInfosLayoutTo:(id)arg1 ;
-(void)removeObserver:(id)arg1 ;
-(void)updatePresentationStateForNestedComponentView:(id)arg1 presentationState:(long long)arg2 ;
-(void)setIsPresenting:(BOOL)arg1 ;
-(id)componentViewForPoint:(CGPoint)arg1 ;
-(void)updateVisibilityStatesForComponentViews:(id)arg1 parentComponent:(id)arg2 withOffset:(CGPoint)arg3 ;
-(NSMutableArray *)nestedComponentViews;
-(id)componentViews;
-(CGRect)renderBounds;
-(NSArray *)flattenedComponentViews;
-(BOOL)isPresented;
-(void)updateVisibilityStatesForComponentViews:(id)arg1 ;
-(void)updatePresentationStateForNestedComponentViews:(id)arg1 presentationState:(long long)arg2 ;
-(void)presentBlueprint:(id)arg1 forParentComponentView:(id)arg2 inHost:(id)arg3 ;
-(void)integrateBlueprint:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)presentComponentsInBlueprint:(id)arg1 ;
-(BOOL)isPresenting;
-(id)componentsInRect:(CGRect)arg1 ;
-(id)initWithViewport:(id)arg1 componentViewEngine:(id)arg2 DOMObjectProvider:(id)arg3 ;
-(void)renderContentsIfNeededForComponents:(id)arg1 ;
-(void)removeComponentsInLayoutBlueprint:(id)arg1 removedFromLayoutBlueprint:(id)arg2 ;
-(id)presentComponentBlueprint:(id)arg1 inHost:(id)arg2 columnLayout:(id)arg3 ;
-(void)updateVisibilityStatesForComponentViews:(id)arg1 toState:(long long)arg2 ;
-(id)componentViewForIdentifier:(id)arg1 ;
@end

