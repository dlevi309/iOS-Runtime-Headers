/*
* Generated on Monday, March 1, 2021 at 2:30:48 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MediaToolbox.framework/MediaToolbox
*/

#import <MediaToolbox/MediaToolbox-Structs.h>
#import <QuartzCore/CABackdropLayer.h>

@class CAFilter;

@interface FigCaptionBackdropLayer : CABackdropLayer {

	CAFilter* backdropFilter;

}
+(void)initialize;
+(unsigned char)isSupported;
-(id)init;
-(void)dealloc;
-(void)configure;
-(void)insertBackdropAsSublayerToLayer:(id)arg1 below:(id)arg2 ;
-(void)removeBackdropFromSuperLayer;
-(void)applyRoundedCorners:(CGPathRef)arg1 ;
@end

