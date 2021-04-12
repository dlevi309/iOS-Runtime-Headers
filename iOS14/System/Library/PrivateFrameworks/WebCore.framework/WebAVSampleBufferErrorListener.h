/*
* Generated on Thursday, January 14, 2021 at 2:21:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
*/


#import <WebCore/WebCore-Structs.h>
@interface WebAVSampleBufferErrorListener : NSObject {

	WeakPtr<WebCore::SourceBufferPrivateAVFObjC, WTF::EmptyCounter>* _parent;
	Vector<WTF::RetainPtr<AVSampleBufferDisplayLayer>, 0, WTF::CrashOnOverflow, 16, WTF::FastMalloc>* _layers;
	Vector<WTF::RetainPtr<AVSampleBufferAudioRenderer>, 0, WTF::CrashOnOverflow, 16, WTF::FastMalloc>* _renderers;

}
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)invalidate;
-(id)initWithParent:(WeakPtr<WebCore::SourceBufferPrivateAVFObjC, WTF::EmptyCounter>*)arg1 ;
-(void)layerFailedToDecode:(id)arg1 ;
-(void)beginObservingLayer:(id)arg1 ;
-(void)stopObservingLayer:(id)arg1 ;
-(void)beginObservingRenderer:(id)arg1 ;
-(void)stopObservingRenderer:(id)arg1 ;
-(void)dealloc;
@end

