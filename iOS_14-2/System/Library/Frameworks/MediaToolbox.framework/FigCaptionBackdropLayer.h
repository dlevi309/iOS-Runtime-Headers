/*
* Generated on Thursday, January 14, 2021 at 2:21:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MediaToolbox.framework/MediaToolbox
*/

#import <MediaToolbox/MediaToolbox-Structs.h>
#import <MediaToolbox/FigBaseCABackdropLayer.h>

@class CAFilter;

@interface FigCaptionBackdropLayer : FigBaseCABackdropLayer {

	CAFilter* backdropFilter;

}
+(void)initialize;
+(unsigned char)isSupported;
-(void)configure;
-(id)init;
-(void)applyRoundedCorners:(CGPathRef)arg1 ;
-(void)insertBackdropAsSublayerToLayer:(id)arg1 below:(id)arg2 ;
-(void)removeBackdropFromSuperLayer;
-(void)dealloc;
@end

