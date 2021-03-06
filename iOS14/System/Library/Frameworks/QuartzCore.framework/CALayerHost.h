/*
* Generated on Thursday, January 14, 2021 at 2:20:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
*/

#import <QuartzCore/QuartzCore-Structs.h>
#import <QuartzCore/CALayer.h>

@interface CALayerHost : CALayer

@property (assign) unsigned contextId; 
@property (assign) BOOL inheritsSecurity; 
@property (assign) BOOL rendersAsynchronously; 
@property (assign) BOOL preservesFlip; 
+(BOOL)CA_automaticallyNotifiesObservers:(Class)arg1 ;
+(BOOL)_hasRenderLayerSubclass;
-(Layer*)_copyRenderLayer:(Transaction*)arg1 layerFlags:(unsigned)arg2 commitFlags:(unsigned*)arg3 ;
-(void)setInheritsSecurity:(BOOL)arg1 ;
-(unsigned)contextId;
-(BOOL)inheritsSecurity;
-(BOOL)preservesFlip;
-(BOOL)_renderLayerDefinesProperty:(unsigned)arg1 ;
-(void)didChangeValueForKey:(id)arg1 ;
-(void)setContextId:(unsigned)arg1 ;
-(BOOL)rendersAsynchronously;
-(void)layerDidBecomeVisible:(BOOL)arg1 ;
-(void)setRendersAsynchronously:(BOOL)arg1 ;
-(void)setPreservesFlip:(BOOL)arg1 ;
@end

