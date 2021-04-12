/*
* Generated on Thursday, January 14, 2021 at 2:27:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
*/

#import <WorkflowKit/WFAction.h>

@interface WFPlayMusicAction : WFAction
-(long long)repeatMode;
-(long long)shuffleMode;
-(void)runAsynchronouslyWithInput:(id)arg1 ;
-(void)finishRunningWithError:(id)arg1 ;
-(id)localizedKeyParameterDisplayName;
-(id)serializedParametersForDonatedIntent:(id)arg1 allowDroppingUnconfigurableValues:(BOOL)arg2 ;
-(void)getContentFromInput:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)mediaQueryFromMediaCollection:(id)arg1 ;
-(void)playContentViaMPCAssistant:(id)arg1 routeDescriptor:(id)arg2 ;
-(void)sendPlaybackArchive:(id)arg1 orPlaybackQueue:(id)arg2 toDestination:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)playContentViaMusicPlayer:(id)arg1 ;
-(void)playContent:(id)arg1 withMusicPlayer:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
@end

