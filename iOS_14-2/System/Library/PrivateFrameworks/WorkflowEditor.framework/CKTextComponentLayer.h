/*
* Generated on Thursday, January 14, 2021 at 2:28:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WorkflowEditor.framework/WorkflowEditor
*/

#import <WorkflowEditor/WorkflowEditor-Structs.h>
#import <WorkflowEditor/CKAsyncLayer.h>

@class CKTextComponentLayerHighlighter, CKTextKitRenderer;

@interface CKTextComponentLayer : CKAsyncLayer {

	CKTextComponentLayerHighlighter* _highlighter;
	CKTextKitRenderer* _renderer;

}

@property (nonatomic,retain) CKTextKitRenderer * renderer;                                 //@synthesize renderer=_renderer - In the implementation block
@property (nonatomic,readonly) CKTextComponentLayerHighlighter * highlighter; 
+(id)defaultValueForKey:(id)arg1 ;
+(void)drawInContext:(CGContextRef)arg1 parameters:(id)arg2 ;
-(void)layoutSublayers;
-(CKTextKitRenderer *)renderer;
-(void)setRenderer:(CKTextKitRenderer *)arg1 ;
-(void)setNeedsDisplayOnBoundsChange:(BOOL)arg1 ;
-(CKTextComponentLayerHighlighter *)highlighter;
-(void)drawInContext:(CGContextRef)arg1 ;
-(id)drawParameters;
-(id)willDisplayAsynchronouslyWithDrawParameters:(id)arg1 ;
-(void)didDisplayAsynchronously:(id)arg1 withDrawParameters:(id)arg2 ;
@end

