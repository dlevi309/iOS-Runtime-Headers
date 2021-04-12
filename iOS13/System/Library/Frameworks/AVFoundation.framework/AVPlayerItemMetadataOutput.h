/*
* Generated on Monday, March 1, 2021 at 2:30:50 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
*/

#import <AVFoundation/AVPlayerItemOutput.h>

@class AVPlayerItemMetadataOutputInternal, NSDictionary;

@interface AVPlayerItemMetadataOutput : AVPlayerItemOutput {

	AVPlayerItemMetadataOutputInternal* _metadataOutputInternal;

}

@property (getter=_figMetadataOutputsDictionaryOptions,nonatomic,readonly) NSDictionary * figMetadataOutputsDictionaryOptions; 
@property (nonatomic,__weak,readonly) id<AVPlayerItemMetadataOutputPushDelegate> delegate; 
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> delegateQueue; 
@property (assign,nonatomic) double advanceIntervalForDelegateInvocation; 
+(void)initialize;
-(id)init;
-(void)dealloc;
-(id<AVPlayerItemMetadataOutputPushDelegate>)delegate;
-(void)setDelegate:(id)arg1 queue:(id)arg2 ;
-(NSObject*<OS_dispatch_queue>)delegateQueue;
-(id)initWithIdentifiers:(id)arg1 ;
-(void)setAdvanceIntervalForDelegateInvocation:(double)arg1 ;
-(id)_figMetadataOutputsDictionaryOptions;
-(BOOL)_attachToPlayerItem:(id)arg1 ;
-(void)_detachFromPlayerItem;
-(void)_signalFlush;
-(void)_pushTimedMetadataGroups:(id)arg1 fromPlayerItemTrack:(id)arg2 ;
-(void)_collectUncollectables;
-(double)advanceIntervalForDelegateInvocation;
@end

