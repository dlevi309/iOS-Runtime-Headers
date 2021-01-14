/*
* Generated on Thursday, January 14, 2021 at 2:21:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AVFCore.framework/AVFCore
*/

#import <AVFCore/AVFCore-Structs.h>
#import <AVFCore/AVAssetWriterInputHelper.h>
#import <AVFCore/AVAssetWriterInputMediaDataRequesterDelegate.h>

@class NSString;

@interface AVAssetWriterInputTerminalHelper : AVAssetWriterInputHelper <AVAssetWriterInputMediaDataRequesterDelegate> {

	long long _terminalStatus;
	BOOL _didRequestMediaDataOnce;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)markCurrentPassAsFinished;
-(void)markAsFinished;
-(void)stopRequestingMediaData;
-(BOOL)isReadyForMoreMediaData;
-(long long)appendSampleBuffer:(opaqueCMSampleBufferRef)arg1 error:(id*)arg2 ;
-(BOOL)appendPixelBuffer:(CVBufferRef)arg1 withPresentationTime:(SCD_Struct_AV6)arg2 ;
-(id)initWithConfigurationState:(id)arg1 terminalStatus:(long long)arg2 ;
-(void)requestMediaDataWhenReadyOnQueue:(id)arg1 usingBlock:(/*^block*/id)arg2 ;
-(id)transitionToAndReturnTerminalHelperWithTerminalStatus:(long long)arg1 ;
-(BOOL)canStartRespondingToEachPassDescriptionReturningReason:(id*)arg1 ;
-(void)requestMediaDataOnceIfNecessaryWithMediaDataRequester:(id)arg1 ;
-(BOOL)mediaDataRequesterShouldRequestMediaData;
-(long long)status;
-(id)initWithConfigurationState:(id)arg1 ;
@end

