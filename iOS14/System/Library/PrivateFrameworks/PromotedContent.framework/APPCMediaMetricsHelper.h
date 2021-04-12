/*
* Generated on Thursday, January 14, 2021 at 2:24:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PromotedContent.framework/PromotedContent
*/

#import <libobjc.A.dylib/APPCMediaMetricsHelping.h>
#import <libobjc.A.dylib/APPCMetricRegister.h>

@interface APPCMediaMetricsHelper : NSObject <APPCMediaMetricsHelping, APPCMetricRegister> {

	 visiblePercentage;
	 contextIdentifier;
	 promotedContentIdentifier;
	 primitiveCreator;
	 notificationOwner;
	 videoDuration;
	 videoQuality;
	 mediaHasStarted;
	 promotedContent;
	 $__lazy_storage_$_initialVolumeSender;

}
-(void)mediaComplete;
-(id)init;
-(void)mediaLoaded;
-(void)videoChosenWithVideoWidth:(float)arg1 videoHeight:(float)arg2 ;
-(void)mediaPlayedAtPosition:(double)arg1 ;
-(void)mediaPausedAtPosition:(double)arg1 ;
-(void)mediaSkippedAtPosition:(double)arg1 ;
-(void)mediaVolumeChangedAtPosition:(double)arg1 volume:(float)arg2 ;
-(void)mediaExpandedAtPosition:(double)arg1 fullScreen:(BOOL)arg2 ;
-(void)mediaContractedAtPosition:(double)arg1 fullScreen:(BOOL)arg2 ;
-(void)mediaShowControlsAtPosition:(double)arg1 ;
-(void)mediaStarted;
-(void)mediaFinished;
-(void)mediaProgress:(long long)arg1 ;
-(void)updateVisiblePercentage:(long long)arg1 ;
-(void)registerHandlerForAllMetricsWithClosure:(/*^block*/id)arg1 ;
-(void)removeHandler;
-(id)initWithContextIdentifier:(id)arg1 promotedContentIdentifier:(id)arg2 primitiveCreator:(id)arg3 notificationOwner:(id)arg4 ;
@end

