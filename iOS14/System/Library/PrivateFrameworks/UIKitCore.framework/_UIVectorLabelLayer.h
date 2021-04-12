/*
* Generated on Thursday, January 14, 2021 at 2:20:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <QuartzCore/CALayer.h>
#import <libobjc.A.dylib/CALayerDelegate.h>
#import <libobjc.A.dylib/CAAnimationDelegate.h>

@class NSArray, _UIVectorTextLayout, NSString;

@interface _UIVectorLabelLayer : CALayer <CALayerDelegate, CAAnimationDelegate> {

	NSArray* _currentLayers;
	_UIVectorTextLayout* _currentTextLayout;
	unsigned long long _maxRenderedMoveDistance;

}

@property (nonatomic,copy) _UIVectorTextLayout * textLayout; 
@property (assign,nonatomic) unsigned long long maxRenderedMoveDistance;              //@synthesize maxRenderedMoveDistance=_maxRenderedMoveDistance - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)initialize;
-(void)willChangeValueForKey:(id)arg1 ;
-(id)init;
-(void)didChangeValueForKey:(id)arg1 ;
-(id)actionForLayer:(id)arg1 forKey:(id)arg2 ;
-(void)_cleanupUnusedLayers;
-(void)setMaxRenderedMoveDistance:(unsigned long long)arg1 ;
-(void)_applyTextLayoutChangeFrom:(id)arg1 to:(id)arg2 ;
-(id)_layersForTextLayout:(id)arg1 ;
-(BOOL)_isPathCompatible:(CGPathRef)arg1 with:(CGPathRef)arg2 ;
-(void)_transitionWithSetup:(/*^block*/id)arg1 target:(/*^block*/id)arg2 ;
-(id)_findSimilarLayer:(id)arg1 inLayers:(id)arg2 ;
-(unsigned long long)maxRenderedMoveDistance;
@end

