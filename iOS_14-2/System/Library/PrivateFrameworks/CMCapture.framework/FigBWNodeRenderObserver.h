/*
* Generated on Thursday, January 14, 2021 at 2:23:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
*/

#import <CMCapture/CMCapture-Structs.h>
#import <libobjc.A.dylib/BWNodeRenderDelegate.h>

@class BWNode, NSString;

@interface FigBWNodeRenderObserver : NSObject <BWNodeRenderDelegate> {

	BWNode* _node;
	/*^block*/id _willRenderSampleBufferHandler;
	/*^block*/id _formatDidBecomeLiveHandler;

}

@property (nonatomic,copy) id willRenderSampleBufferHandler;              //@synthesize willRenderSampleBufferHandler=_willRenderSampleBufferHandler - In the implementation block
@property (nonatomic,copy) id formatDidBecomeLiveHandler;                 //@synthesize formatDidBecomeLiveHandler=_formatDidBecomeLiveHandler - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setFormatDidBecomeLiveHandler:(id)arg1 ;
-(void)node:(id)arg1 format:(id)arg2 didBecomeLiveForInput:(id)arg3 ;
-(void)setWillRenderSampleBufferHandler:(id)arg1 ;
-(id)initWithBWNode:(id)arg1 ;
-(void)node:(id)arg1 format:(id)arg2 didBecomeLiveForOutput:(id)arg3 ;
-(void)node:(id)arg1 willRenderSampleBuffer:(opaqueCMSampleBufferRef)arg2 forInput:(id)arg3 ;
-(id)willRenderSampleBufferHandler;
-(id)formatDidBecomeLiveHandler;
-(void)dealloc;
@end

