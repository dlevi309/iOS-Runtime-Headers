/*
* Generated on Thursday, January 14, 2021 at 2:27:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreChart.framework/CoreChart
*/

#import <libobjc.A.dylib/CCVegaCARendererJSExport.h>

@class NSString, CCVegaCARenderer;

@interface CCVegaCARendererWrapper : NSObject <CCVegaCARendererJSExport> {

	CCVegaCARenderer* _renderer;

}

@property (__weak) CCVegaCARenderer * renderer;              //@synthesize renderer=_renderer - In the implementation block
@property (retain) NSString * backgroundColor; 
-(void)dirty;
-(void)setBackgroundColor:(NSString *)arg1 ;
-(NSString *)backgroundColor;
-(CCVegaCARenderer *)renderer;
-(void)setRenderer:(CCVegaCARenderer *)arg1 ;
-(void)render:(id)arg1 ;
-(id)initWithRenderer:(id)arg1 ;
-(void)dirtyAll;
-(void)resizeWidth:(double)arg1 height:(double)arg2 originX:(double)arg3 originY:(double)arg4 ;
@end

