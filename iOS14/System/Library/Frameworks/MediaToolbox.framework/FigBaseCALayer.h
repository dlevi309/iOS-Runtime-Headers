/*
* Generated on Thursday, January 14, 2021 at 2:21:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MediaToolbox.framework/MediaToolbox
*/

#import <QuartzCore/CALayer.h>
#import <libobjc.A.dylib/FigPiPableLayer.h>

@interface FigBaseCALayer : CALayer <FigPiPableLayer> {

	BOOL _preventsChangesToSublayerHierarchy;

}

@property (assign,nonatomic) BOOL preventsChangesToSublayerHierarchy;              //@synthesize preventsChangesToSublayerHierarchy=_preventsChangesToSublayerHierarchy - In the implementation block
+(id)defaultActionForKey:(id)arg1 ;
-(void)removeFromSuperlayer;
-(void)addSublayer:(id)arg1 ;
-(void)insertSublayer:(id)arg1 atIndex:(unsigned)arg2 ;
-(id)init;
-(BOOL)preventsChangesToSublayerHierarchy;
-(void)setNeedsDisplay;
-(void)setSublayers:(id)arg1 ;
-(id)actionForKey:(id)arg1 ;
-(void)setPreventsChangesToSublayerHierarchy:(BOOL)arg1 ;
-(id)getLayerDisplay;
-(float)getDisplayScale;
-(void)insertSublayer:(id)arg1 above:(id)arg2 ;
-(void)replaceSublayer:(id)arg1 with:(id)arg2 ;
-(void)insertSublayer:(id)arg1 below:(id)arg2 ;
@end

