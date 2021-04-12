/*
* Generated on Monday, March 1, 2021 at 2:30:43 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
*/

#import <QuartzCore/QuartzCore-Structs.h>
#import <QuartzCore/CALayer.h>

@interface CALayerHost : CALayer

@property (assign) unsigned contextId; 
@property (assign) BOOL inheritsSecurity; 
@property (assign) BOOL rendersAsynchronously; 
@property (assign) BOOL preservesFlip; 
+(BOOL)_hasRenderLayerSubclass;
+(BOOL)CA_automaticallyNotifiesObservers:(Class)arg1 ;
-(void)didChangeValueForKey:(id)arg1 ;
-(unsigned)contextId;
-(void)setContextId:(unsigned)arg1 ;
-(void)setRendersAsynchronously:(BOOL)arg1 ;
-(BOOL)rendersAsynchronously;
-(void)setInheritsSecurity:(BOOL)arg1 ;
-(BOOL)inheritsSecurity;
-(Layer*)_copyRenderLayer:(Transaction*)arg1 layerFlags:(unsigned)arg2 commitFlags:(unsigned*)arg3 ;
-(BOOL)_renderLayerDefinesProperty:(unsigned)arg1 ;
-(void)layerDidBecomeVisible:(BOOL)arg1 ;
-(BOOL)preservesFlip;
-(void)setPreservesFlip:(BOOL)arg1 ;
@end

