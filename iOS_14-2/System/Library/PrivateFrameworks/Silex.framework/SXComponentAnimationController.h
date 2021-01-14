/*
* Generated on Thursday, January 14, 2021 at 2:24:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
*/

#import <Silex/Silex-Structs.h>
#import <libobjc.A.dylib/SXViewportChangeListener.h>

@class NSMutableSet, SXViewport, CADisplayLink, NSString;

@interface SXComponentAnimationController : NSObject <SXViewportChangeListener> {

	NSMutableSet* _registeredComponents;
	NSMutableSet* _animatingComponents;
	SXViewport* _viewport;
	CADisplayLink* _displayLink;
	NSMutableSet* _animationHandlersToFinish;

}

@property (nonatomic,retain) NSMutableSet * registeredComponents;                     //@synthesize registeredComponents=_registeredComponents - In the implementation block
@property (nonatomic,retain) NSMutableSet * animatingComponents;                      //@synthesize animatingComponents=_animatingComponents - In the implementation block
@property (nonatomic,readonly) SXViewport * viewport;                                 //@synthesize viewport=_viewport - In the implementation block
@property (nonatomic,readonly) CADisplayLink * displayLink;                           //@synthesize displayLink=_displayLink - In the implementation block
@property (nonatomic,readonly) NSMutableSet * animationHandlersToFinish;              //@synthesize animationHandlersToFinish=_animationHandlersToFinish - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithViewport:(id)arg1 ;
-(SXViewport *)viewport;
-(void)viewport:(id)arg1 appearStateChangedFromState:(unsigned long long)arg2 ;
-(void)viewport:(id)arg1 boundsDidChangeFromBounds:(CGRect)arg2 ;
-(CADisplayLink *)displayLink;
-(void)viewport:(id)arg1 documentSizeDidChangeFromSize:(CGSize)arg2 ;
-(void)viewport:(id)arg1 dynamicBoundsDidChangeFromBounds:(CGRect)arg2 ;
-(void)displayLinkTick:(id)arg1 ;
-(id)animatingHandlerForComponent:(id)arg1 ;
-(NSMutableSet *)registeredComponents;
-(void)updateVisibleBoundsIfNeeded;
-(id)registeredHandlerForComponent:(id)arg1 ;
-(NSMutableSet *)animatingComponents;
-(void)stopUpdatingAnimationForComponentView:(id)arg1 finishAnimation:(BOOL)arg2 ;
-(void)updateVisibleBounds:(CGRect)arg1 ;
-(CGRect)convertRectForComponent:(id)arg1 ;
-(NSMutableSet *)animationHandlersToFinish;
-(void)finishAnimationHandlerAnimated:(id)arg1 ;
-(void)startOrStopDisplayLink;
-(void)registerComponentView:(id)arg1 animation:(id)arg2 ;
-(void)unregisterComponentView:(id)arg1 ;
-(void)startUpdatingAnimationForComponentView:(id)arg1 ;
-(void)stopUpdatingAnimationForComponentView:(id)arg1 ;
-(void)setRegisteredComponents:(NSMutableSet *)arg1 ;
-(void)setAnimatingComponents:(NSMutableSet *)arg1 ;
@end

