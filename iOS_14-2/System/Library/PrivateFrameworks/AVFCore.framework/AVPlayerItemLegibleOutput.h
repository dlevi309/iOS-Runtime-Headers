/*
* Generated on Thursday, January 14, 2021 at 2:21:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AVFCore.framework/AVFCore
*/

#import <AVFCore/AVFCore-Structs.h>
#import <AVFCore/AVPlayerItemOutput.h>

@class AVPlayerItemLegibleOutputInternal;

@interface AVPlayerItemLegibleOutput : AVPlayerItemOutput {

	AVPlayerItemLegibleOutputInternal* _legibleOutputInternal;

}

@property (nonatomic,__weak,readonly) id<AVPlayerItemLegibleOutputPushDelegate> delegate; 
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> delegateQueue; 
@property (assign,nonatomic) double advanceIntervalForDelegateInvocation; 
+(void)initialize;
-(id)init;
-(id<AVPlayerItemLegibleOutputPushDelegate>)delegate;
-(double)advanceIntervalForDelegateInvocation;
-(void)setDelegate:(id)arg1 queue:(id)arg2 ;
-(void)setSuppressesPlayerRendering:(BOOL)arg1 ;
-(void)setAdvanceIntervalForDelegateInvocation:(double)arg1 ;
-(void)setTextStylingResolution:(id)arg1 ;
-(id)textStylingResolution;
-(id)initWithMediaSubtypesForNativeRepresentation:(id)arg1 ;
-(id)initWithDependencyFactory:(id)arg1 mediaSubtypesForNativeRepresentation:(id)arg2 ;
-(NSObject*<OS_dispatch_queue>)delegateQueue;
-(void)_collectUncollectables;
-(void)_signalFlush;
-(BOOL)suppressesPlayerRendering;
-(id)_figLegibleOutputsDictionaryOptions;
-(BOOL)_attachToPlayerItem:(id)arg1 ;
-(void)_detachFromPlayerItem;
-(void)dealloc;
-(void)_pushAttributedStrings:(id)arg1 andSampleBuffers:(id)arg2 atItemTime:(SCD_Struct_AV6)arg3 ;
@end

