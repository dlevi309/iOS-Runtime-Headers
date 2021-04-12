/*
* Generated on Thursday, January 14, 2021 at 2:28:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WorkflowEditor.framework/WorkflowEditor
*/

#import <WorkflowEditor/WorkflowEditor-Structs.h>
#import <QuartzCore/CALayer.h>

@interface CKAsyncLayer : CALayer {

	int _displaySentinel;
	BOOL _needsAsyncDisplayOnly;

}

@property (assign) unsigned long long displayMode; 
+(id)defaultValueForKey:(id)arg1 ;
+(void)drawInContext:(CGContextRef)arg1 parameters:(id)arg2 ;
+(id)displayQueue;
+(/*^block*/id)asyncDisplayBlockWithBounds:(CGRect)arg1 contentsScale:(double)arg2 opaque:(BOOL)arg3 backgroundColor:(CGColorRef)arg4 displaySentinel:(int*)arg5 expectedDisplaySentinelValue:(int)arg6 drawingDelegate:(id)arg7 drawParameters:(id)arg8 ;
+(void)drawAsyncLayerInContext:(CGContextRef)arg1 parameters:(id)arg2 ;
-(void)setNeedsDisplay;
-(id)name;
-(void)display;
-(void)drawInContext:(CGContextRef)arg1 ;
-(id)drawParameters;
-(id)willDisplayAsynchronouslyWithDrawParameters:(id)arg1 ;
-(void)didDisplayAsynchronously:(id)arg1 withDrawParameters:(id)arg2 ;
-(void)setNeedsAsyncDisplay;
-(void)cancelAsyncDisplay;
@end

