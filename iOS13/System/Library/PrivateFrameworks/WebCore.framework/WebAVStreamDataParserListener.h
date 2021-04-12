/*
* Generated on Monday, March 1, 2021 at 2:30:47 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
*/

#import <WebCore/WebCore-Structs.h>
#import <libobjc.A.dylib/AVStreamDataParserOutputHandling.h>

@class AVStreamDataParser, NSString;

@interface WebAVStreamDataParserListener : NSObject <AVStreamDataParserOutputHandling> {

	WeakPtr<WebCore::SourceBufferPrivateAVFObjC>* _parent;
	Box<WTF::Semaphore>* _abortSemaphore;
	AVStreamDataParser* _parser;

}

@property (assign) WeakPtr<WebCore::SourceBufferPrivateAVFObjC> parent;              //@synthesize parent=_parent - In the implementation block
@property (assign) Box<WTF::Semaphore> abortSemaphore;                               //@synthesize abortSemaphore=_abortSemaphore - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)invalidate;
-(WeakPtr<WebCore::SourceBufferPrivateAVFObjC>)parent;
-(void)setParent:(WeakPtr<WebCore::SourceBufferPrivateAVFObjC>)arg1 ;
-(void)streamDataParser:(id)arg1 didParseStreamDataAsAsset:(id)arg2 withDiscontinuity:(BOOL)arg3 ;
-(void)streamDataParser:(id)arg1 didFailToParseStreamDataWithError:(id)arg2 ;
-(void)streamDataParser:(id)arg1 didProvideMediaData:(opaqueCMSampleBufferRef)arg2 forTrackID:(int)arg3 mediaType:(id)arg4 flags:(unsigned long long)arg5 ;
-(void)streamDataParser:(id)arg1 didReachEndOfTrackWithTrackID:(int)arg2 mediaType:(id)arg3 ;
-(void)streamDataParserWillProvideContentKeyRequestInitializationData:(id)arg1 forTrackID:(int)arg2 ;
-(void)streamDataParser:(id)arg1 didProvideContentKeyRequestInitializationData:(id)arg2 forTrackID:(int)arg3 ;
-(id)initWithParser:(id)arg1 parent:(WeakPtr<WebCore::SourceBufferPrivateAVFObjC>*)arg2 ;
-(void)streamDataParser:(id)arg1 didParseStreamDataAsAsset:(id)arg2 ;
-(Box<WTF::Semaphore>)abortSemaphore;
-(void)setAbortSemaphore:(Box<WTF::Semaphore>)arg1 ;
@end

