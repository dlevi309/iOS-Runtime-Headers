/*
* Generated on Thursday, January 14, 2021 at 2:20:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
*/

#import <QuartzCore/QuartzCore-Structs.h>
#import <QuartzCore/CALayer.h>

@class CALayer;

@interface CAPortalLayer : CALayer

@property (__weak) CALayer * sourceLayer; 
@property (assign) unsigned long long sourceLayerRenderId; 
@property (assign) unsigned sourceContextId; 
@property (assign) BOOL hidesSourceLayer; 
@property (assign) BOOL matchesOpacity; 
@property (assign) BOOL matchesPosition; 
@property (assign) BOOL matchesTransform; 
@property (assign) BOOL allowsBackdropGroups; 
+(BOOL)CA_automaticallyNotifiesObservers:(Class)arg1 ;
+(BOOL)_hasRenderLayerSubclass;
-(BOOL)allowsBackdropGroups;
-(Layer*)_copyRenderLayer:(Transaction*)arg1 layerFlags:(unsigned)arg2 commitFlags:(unsigned*)arg3 ;
-(void)setMatchesTransform:(BOOL)arg1 ;
-(void)setMatchesPosition:(BOOL)arg1 ;
-(BOOL)_renderLayerDefinesProperty:(unsigned)arg1 ;
-(void)setAllowsBackdropGroups:(BOOL)arg1 ;
-(void)didChangeValueForKey:(id)arg1 ;
-(unsigned)sourceContextId;
-(void)setSourceContextId:(unsigned)arg1 ;
-(void)setSourceLayerRenderId:(unsigned long long)arg1 ;
-(void)layerDidBecomeVisible:(BOOL)arg1 ;
-(unsigned long long)sourceLayerRenderId;
-(BOOL)matchesTransform;
-(void)setSourceLayer:(CALayer *)arg1 ;
-(BOOL)matchesOpacity;
-(void)setHidesSourceLayer:(BOOL)arg1 ;
-(void)setMatchesOpacity:(BOOL)arg1 ;
-(CALayer *)sourceLayer;
-(BOOL)matchesPosition;
-(BOOL)hidesSourceLayer;
@end

