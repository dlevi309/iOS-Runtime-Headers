/*
* Generated on Thursday, January 14, 2021 at 2:27:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
*/

#import <ActionKit/ActionKit-Structs.h>
#import <WorkflowKit/WFAction.h>

@interface WFPlayPodcastAction : WFAction
-(void)runAsynchronouslyWithInput:(id)arg1 ;
-(id)localizedKeyParameterDisplayName;
-(id)serializedParametersForDonatedIntent:(id)arg1 allowDroppingUnconfigurableValues:(BOOL)arg2 ;
-(void)playQueue:(MRSystemAppPlaybackQueueRef)arg1 onPlayerPath:(void*)arg2 completion:(/*^block*/id)arg3 ;
-(id)getPlaybackURLForContentItem:(id)arg1 ;
-(id)contentNotFoundError;
-(id)genericPlayPodcastFailedError;
-(id)errorPlayingPodcast:(unsigned)arg1 ;
@end

