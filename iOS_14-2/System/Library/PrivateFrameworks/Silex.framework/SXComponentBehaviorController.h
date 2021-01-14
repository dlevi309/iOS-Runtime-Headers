/*
* Generated on Thursday, January 14, 2021 at 2:24:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(UIDynamicAnimator *)animator;
-(SXViewport *)viewport;
-(void)setViewport:(SXViewport *)arg1 ;
-(void)viewport:(id)arg1 appearStateChangedFromState:(unsigned long long)arg2 ;
-(void)viewport:(id)arg1 boundsDidChangeFromBounds:(CGRect)arg2 ;
-(void)viewport:(id)arg1 dynamicBoundsDidChangeFromBounds:(CGRect)arg2 ;
-(void)update;
-(void)reset;
-(id)initWithViewport:(id)arg1 andAnimator:(id)arg2 ;
-(void)updateComponentView:(id)arg1 ;
-(void)unregisterComponentView:(id)arg1 ;
-(void)registerComponentView:(id)arg1 behavior:(id)arg2 ;
-(id)existingHandlerForComponentView:(id)arg1 behavior:(id)arg2 ;
-(NSMutableSet *)behaviorHandlers;
-(void)updateHandler:(id)arg1 ;
@end

