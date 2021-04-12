/*
* Generated on Monday, March 1, 2021 at 2:30:47 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
*/


#import <WebCore/WebCore-Structs.h>
@interface WebAVSampleBufferErrorListener : NSObject {

	WeakPtr<WebCore::SourceBufferPrivateAVFObjC>* _parent;
	Vector<WTF::RetainPtr<AVSampleBufferDisplayLayer>, 0, WTF::CrashOnOverflow, 16, WTF::FastMalloc>* _layers;
	Vector<WTF::RetainPtr<AVSampleBufferAudioRenderer>, 0, WTF::CrashOnOverflow, 16, WTF::FastMalloc>* _renderers;

}
-(void)dealloc;
-(void)invalidate;
-(id)initWithParent:(WeakPtr<WebCore::SourceBufferPrivateAVFObjC>*)arg1 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)layerFailedToDecode:(id)arg1 ;
-(void)beginObservingLayer:(id)arg1 ;
-(void)stopObservingLayer:(id)arg1 ;
-(void)beginObservingRenderer:(id)arg1 ;
-(void)stopObservingRenderer:(id)arg1 ;
@end

