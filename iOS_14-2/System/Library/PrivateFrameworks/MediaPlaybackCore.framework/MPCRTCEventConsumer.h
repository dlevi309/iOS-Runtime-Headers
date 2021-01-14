/*
* Generated on Thursday, January 14, 2021 at 2:25:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
*/

#import <libobjc.A.dylib/MPCPlaybackEngineEventConsumer.h>

@protocol MPCPlaybackEngineEventStreamSubscription;
@class NSString;

@interface MPCRTCEventConsumer : NSObject <MPCPlaybackEngineEventConsumer> {

	id<MPCPlaybackEngineEventStreamSubscription> _subscription;

}

@property (nonatomic,readonly) id<MPCPlaybackEngineEventStreamSubscription> subscription;              //@synthesize subscription=_subscription - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)identifier;
-(id<MPCPlaybackEngineEventStreamSubscription>)subscription;
-(void)subscribeToEventStream:(id)arg1 ;
-(void)unsubscribeFromEventStream:(id)arg1 ;
-(id)_reportingSessionWithToken:(id)arg1 serviceIdentifier:(id)arg2 ;
@end

