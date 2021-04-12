/*
* Generated on Monday, March 1, 2021 at 2:32:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
*/

#import <libobjc.A.dylib/MPCReportingIdentityPropertiesLoading.h>

@class MPCPlaybackRequestEnvironment, NSString;

@interface MPCReportingPlaybackEnvironmentPropertiesLoader : NSObject <MPCReportingIdentityPropertiesLoading> {

	MPCPlaybackRequestEnvironment* _playbackRequestEnvironment;

}

@property (nonatomic,copy,readonly) MPCPlaybackRequestEnvironment * playbackRequestEnvironment;              //@synthesize playbackRequestEnvironment=_playbackRequestEnvironment - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithPlaybackRequestEnvironment:(id)arg1 ;
-(MPCPlaybackRequestEnvironment *)playbackRequestEnvironment;
-(void)loadReportingIdentityPropertiesWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)_getHasSubscriptionPlaybackCapabilityForUserIdentity:(id)arg1 completion:(/*^block*/id)arg2 ;
@end

