/*
* Generated on Monday, March 1, 2021 at 2:30:47 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
*/


#import <WebCore/WebCore-Structs.h>
@interface WebAVSampleBufferStatusChangeListener : NSObject {

	MediaPlayerPrivateMediaStreamAVFObjC* _parent;

}
-(void)dealloc;
-(void)invalidate;
-(id)initWithParent:(MediaPlayerPrivateMediaStreamAVFObjC*)arg1 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)stopObservingLayers;
-(void)beginObservingLayers;
@end

