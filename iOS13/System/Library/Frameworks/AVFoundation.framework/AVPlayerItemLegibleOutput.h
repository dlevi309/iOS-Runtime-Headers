/*
* Generated on Monday, March 1, 2021 at 2:30:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
*/

#import <AVFoundation/AVFoundation-Structs.h>
#import <AVFoundation/AVPlayerItemOutput.h>

@class AVPlayerItemLegibleOutputInternal;

@interface AVPlayerItemLegibleOutput : AVPlayerItemOutput {

	AVPlayerItemLegibleOutputInternal* _legibleOutputInternal;

}

@property (nonatomic,__weak,readonly) id<AVPlayerItemLegibleOutputPushDelegate> delegate; 
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> delegateQueue; 
@property (assign,nonatomic) double advanceIntervalForDelegateInvocation; 
+(void)initialize;
-(id)init;
-(void)dealloc;
-(id<AVPlayerItemLegibleOutputPushDelegate>)delegate;
-(void)setDelegate:(id)arg1 queue:(id)arg2 ;
-(NSObject*<OS_dispatch_queue>)delegateQueue;
-(id)initWithMediaSubtypesForNativeRepresentation:(id)arg1 ;
-(void)setSuppressesPlayerRendering:(BOOL)arg1 ;
-(void)setAdvanceIntervalForDelegateInvocation:(double)arg1 ;
-(void)setTextStylingResolution:(id)arg1 ;
-(BOOL)suppressesPlayerRendering;
-(id)_figLegibleOutputsDictionaryOptions;
-(BOOL)_attachToPlayerItem:(id)arg1 ;
-(void)_detachFromPlayerItem;
-(void)_pushAttributedStrings:(id)arg1 andSampleBuffers:(id)arg2 atItemTime:(SCD_Struct_AV7)arg3 ;
-(void)_signalFlush;
-(void)_collectUncollectables;
-(double)advanceIntervalForDelegateInvocation;
-(id)textStylingResolution;
-(id)initWithDependencyFactory:(id)arg1 mediaSubtypesForNativeRepresentation:(id)arg2 ;
@end

