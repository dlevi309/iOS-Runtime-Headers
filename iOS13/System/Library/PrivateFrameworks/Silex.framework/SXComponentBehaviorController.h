/*
* Generated on Monday, March 1, 2021 at 2:33:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
*/

#import <Silex/Silex-Structs.h>
#import <libobjc.A.dylib/SXViewportChangeListener.h>

@class SXViewport, UIDynamicAnimator, NSMutableSet, NSString;

@interface SXComponentBehaviorController : NSObject <SXViewportChangeListener> {

	SXViewport* _viewport;
	UIDynamicAnimator* _animator;
	NSMutableSet* _behaviorHandlers;

}

@property (nonatomic,retain) SXViewport * viewport;                          //@synthesize viewport=_viewport - In the implementation block
@property (nonatomic,readonly) NSMutableSet * behaviorHandlers;              //@synthesize behaviorHandlers=_behaviorHandlers - In the implementation block
@property (nonatomic,readonly) UIDynamicAnimator * animator;                 //@synthesize animator=_animator - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)reset;
-(void)update;
-(SXViewport *)viewport;
-(UIDynamicAnimator *)animator;
-(void)setViewport:(SXViewport *)arg1 ;
-(id)initWithViewport:(id)arg1 andAnimator:(id)arg2 ;
-(void)updateComponentView:(id)arg1 ;
-(void)viewport:(id)arg1 dynamicBoundsDidChangeFromBounds:(CGRect)arg2 ;
-(void)viewport:(id)arg1 boundsDidChangeFromBounds:(CGRect)arg2 ;
-(void)viewport:(id)arg1 appearStateChangedFromState:(unsigned long long)arg2 ;
-(void)unregisterComponentView:(id)arg1 ;
-(void)registerComponentView:(id)arg1 behavior:(id)arg2 ;
-(id)existingHandlerForComponentView:(id)arg1 behavior:(id)arg2 ;
-(NSMutableSet *)behaviorHandlers;
-(void)updateHandler:(id)arg1 ;
@end

