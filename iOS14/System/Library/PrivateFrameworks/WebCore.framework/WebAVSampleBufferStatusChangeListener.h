/*
* Generated on Thursday, January 14, 2021 at 2:21:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
*/


#import <WebCore/WebCore-Structs.h>
@interface WebAVSampleBufferStatusChangeListener : NSObject {

	WeakPtr<WebCore::LocalSampleBufferDisplayLayer, WTF::EmptyCounter>* _parent;

}
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)begin;
-(void)stop;
-(void)invalidate;
-(id)initWithParent:(LocalSampleBufferDisplayLayer*)arg1 ;
-(void)dealloc;
@end

