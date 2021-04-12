/*
* Generated on Thursday, January 14, 2021 at 2:21:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
*/

#import <WebCore/WebCore-Structs.h>
#import <libobjc.A.dylib/AVPlayerItemLegibleOutputPushDelegate.h>
#import <libobjc.A.dylib/AVPlayerItemMetadataOutputPushDelegate.h>
#import <libobjc.A.dylib/AVPlayerItemMetadataCollectorPushDelegate.h>

@class NSString;

@interface WebCoreAVFMovieObserver : NSObject <AVPlayerItemLegibleOutputPushDelegate, AVPlayerItemMetadataOutputPushDelegate, AVPlayerItemMetadataCollectorPushDelegate> {

	WeakPtr<WebCore::MediaPlayerPrivateAVFoundationObjC, WTF::EmptyCounter>* m_player;
	GenericTaskQueue<WebCore::Timer>* m_taskQueue;
	int m_delayCallbacks;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)disconnect;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(int)arg4 ;
-(void)metadataCollector:(id)arg1 didCollectDateRangeMetadataGroups:(id)arg2 indexesOfNewGroups:(id)arg3 indexesOfModifiedGroups:(id)arg4 ;
-(void)metadataOutput:(id)arg1 didOutputTimedMetadataGroups:(id)arg2 fromPlayerItemTrack:(id)arg3 ;
-(id)initWithPlayer:(WeakPtr<WebCore::MediaPlayerPrivateAVFoundationObjC, WTF::EmptyCounter>*)arg1 ;
-(void)didEnd:(id)arg1 ;
-(void)outputSequenceWasFlushed:(id)arg1 ;
-(void)legibleOutput:(id)arg1 didOutputAttributedStrings:(id)arg2 nativeSampleBuffers:(id)arg3 forItemTime:(SCD_Struct_We12)arg4 ;
-(void)metadataLoaded;
@end

