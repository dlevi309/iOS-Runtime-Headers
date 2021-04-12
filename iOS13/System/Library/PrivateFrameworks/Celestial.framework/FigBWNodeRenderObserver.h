/*
* Generated on Monday, March 1, 2021 at 2:31:39 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
*/

#import <Celestial/Celestial-Structs.h>
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
-(void)dealloc;
-(void)node:(id)arg1 format:(id)arg2 didBecomeLiveForOutput:(id)arg3 ;
-(void)node:(id)arg1 format:(id)arg2 didBecomeLiveForInput:(id)arg3 ;
-(void)node:(id)arg1 willRenderSampleBuffer:(opaqueCMSampleBufferRef)arg2 forInput:(id)arg3 ;
-(id)initWithBWNode:(id)arg1 ;
-(void)setWillRenderSampleBufferHandler:(id)arg1 ;
-(void)setFormatDidBecomeLiveHandler:(id)arg1 ;
-(id)willRenderSampleBufferHandler;
-(id)formatDidBecomeLiveHandler;
@end

