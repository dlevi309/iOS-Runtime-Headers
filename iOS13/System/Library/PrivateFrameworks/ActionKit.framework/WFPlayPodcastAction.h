/*
* Generated on Monday, March 1, 2021 at 2:34:36 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
*/

#import <WorkflowKit/WFAction.h>

@interface WFPlayPodcastAction : WFAction
-(void)runAsynchronouslyWithInput:(id)arg1 ;
-(id)localizedKeyParameterDisplayName;
-(id)serializedParametersForDonatedIntent:(id)arg1 allowDroppingUnconfigurableValues:(BOOL)arg2 ;
-(id)getPlaybackURLForContentItem:(id)arg1 ;
-(id)contentNotFoundError;
-(id)genericPlayPodcastFailedError;
-(id)errorPlayingPodcast:(unsigned)arg1 ;
@end

