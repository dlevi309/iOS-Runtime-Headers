/*
* Generated on Thursday, January 14, 2021 at 2:21:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MediaToolbox.framework/MediaToolbox
*/

#import <MediaToolbox/MediaToolbox-Structs.h>
#import <QuartzCore/CALayer.h>

@protocol OS_dispatch_queue, FigNeroLayerDelegate;
@class NSObject;

@interface FigNeroLayer : CALayer {

	NSObject*<OS_dispatch_queue> _neroQueue;
	OpaqueFigNeroidRef _neroid;
	id<FigNeroLayerDelegate> _neroDelegate;

}

@property (assign,nonatomic) id<FigNeroLayerDelegate> neroDelegate; 
-(id)init;
-(void)start;
-(void)_start;
-(void)stop;
-(void)setBounds:(CGRect)arg1 ;
-(id<FigNeroLayerDelegate>)neroDelegate;
-(void)setNeroDelegate:(id<FigNeroLayerDelegate>)arg1 ;
-(void)_dispatchNotification:(id)arg1 value:(id)arg2 ;
-(void)dealloc;
@end

