/*
* Generated on Thursday, January 14, 2021 at 2:21:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AVFCore.framework/AVFCore
*/

#import <AVFCore/AVPlayerItemOutput.h>

@class AVPlayerItemMetadataOutputInternal, NSDictionary;

@interface AVPlayerItemMetadataOutput : AVPlayerItemOutput {

	AVPlayerItemMetadataOutputInternal* _metadataOutputInternal;

}

@property (getter=_figMetadataOutputsDictionaryOptions,nonatomic,readonly) NSDictionary * figMetadataOutputsDictionaryOptions; 
@property (nonatomic,__weak,readonly) id<AVPlayerItemMetadataOutputPushDelegate> delegate; 
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> delegateQueue; 
@property (assign,nonatomic) double advanceIntervalForDelegateInvocation; 
+(void)initialize;
-(id)initWithIdentifiers:(id)arg1 ;
-(id)init;
-(id<AVPlayerItemMetadataOutputPushDelegate>)delegate;
-(double)advanceIntervalForDelegateInvocation;
-(void)setDelegate:(id)arg1 queue:(id)arg2 ;
-(void)setAdvanceIntervalForDelegateInvocation:(double)arg1 ;
-(NSObject*<OS_dispatch_queue>)delegateQueue;
-(void)_collectUncollectables;
-(void)_signalFlush;
-(id)_figMetadataOutputsDictionaryOptions;
-(BOOL)_attachToPlayerItem:(id)arg1 ;
-(void)_detachFromPlayerItem;
-(void)dealloc;
-(void)_pushTimedMetadataGroups:(id)arg1 fromPlayerItemTrack:(id)arg2 ;
@end

