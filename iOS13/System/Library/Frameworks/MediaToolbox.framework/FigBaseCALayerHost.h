/*
* Generated on Monday, March 1, 2021 at 2:30:48 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MediaToolbox.framework/MediaToolbox
*/

#import <QuartzCore/CALayerHost.h>

@interface FigBaseCALayerHost : CALayerHost {

	BOOL _preventsChangesToSublayerHierarchy;

}

@property (assign,nonatomic) BOOL preventsChangesToSublayerHierarchy;              //@synthesize preventsChangesToSublayerHierarchy=_preventsChangesToSublayerHierarchy - In the implementation block
+(id)defaultActionForKey:(id)arg1 ;
-(id)init;
-(void)removeFromSuperlayer;
-(void)addSublayer:(id)arg1 ;
-(void)insertSublayer:(id)arg1 atIndex:(unsigned)arg2 ;
-(id)actionForKey:(id)arg1 ;
-(void)insertSublayer:(id)arg1 above:(id)arg2 ;
-(void)setSublayers:(id)arg1 ;
-(void)insertSublayer:(id)arg1 below:(id)arg2 ;
-(void)replaceSublayer:(id)arg1 with:(id)arg2 ;
-(BOOL)preventsChangesToSublayerHierarchy;
-(void)setPreventsChangesToSublayerHierarchy:(BOOL)arg1 ;
@end

