/*
* Generated on Thursday, January 14, 2021 at 2:23:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AXMediaUtilities.framework/AXMediaUtilities
*/

#import <AXMediaUtilities/AXMediaUtilities-Structs.h>
#import <AXMediaUtilities/AXMSourceNode.h>
#import <libobjc.A.dylib/AVPlayerItemLegibleOutputPushDelegate.h>

@protocol OS_dispatch_queue;
@class NSObject, AVPlayerItem, AXMVisionAnalysisOptions, NSString;

@interface AXMAVPlayerItemNode : AXMSourceNode <AVPlayerItemLegibleOutputPushDelegate> {

	NSObject*<OS_dispatch_queue> _avkit_queue;
	BOOL _triggeringLegibilityEvents;
	AVPlayerItem* _targetPlayerItem;
	AXMVisionAnalysisOptions* _analysisOptions;

}

@property (assign,nonatomic,__weak) AVPlayerItem * targetPlayerItem;                                             //@synthesize targetPlayerItem=_targetPlayerItem - In the implementation block
@property (nonatomic,retain) AXMVisionAnalysisOptions * analysisOptions;                                         //@synthesize analysisOptions=_analysisOptions - In the implementation block
@property (getter=isTriggeringLegibilityEvents,nonatomic,readonly) BOOL triggeringLegibilityEvents;              //@synthesize triggeringLegibilityEvents=_triggeringLegibilityEvents - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(BOOL)isSupported;
+(id)title;
-(AXMVisionAnalysisOptions *)analysisOptions;
-(void)setAnalysisOptions:(AXMVisionAnalysisOptions *)arg1 ;
-(void)outputSequenceWasFlushed:(id)arg1 ;
-(void)legibleOutput:(id)arg1 didOutputAttributedStrings:(id)arg2 nativeSampleBuffers:(id)arg3 forItemTime:(SCD_Struct_AX8)arg4 ;
-(void)setShouldProcessRemotely:(BOOL)arg1 ;
-(void)nodeInitialize;
-(id)axmDescription;
-(AVPlayerItem *)targetPlayerItem;
-(void)_mainQueue_endAutoTriggerOfLegibilityEvents;
-(void)setTargetPlayerItem:(AVPlayerItem *)arg1 ;
-(void)autoTriggerLegibilityEventsWithAVPlayerItem:(id)arg1 ;
-(void)endAutoTriggerOfLegibilityEvents;
-(BOOL)isTriggeringLegibilityEvents;
@end

