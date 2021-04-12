/*
* Generated on Thursday, January 14, 2021 at 2:25:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
*/

#import <libobjc.A.dylib/MPCPlaybackEngineEventConsumer.h>

@protocol MPCPlaybackEngineEventStreamSubscription;
@class NSString;

@interface MPCPlaybackEngineLoggingConsumer : NSObject <MPCPlaybackEngineEventConsumer> {

	id<MPCPlaybackEngineEventStreamSubscription> _subscription;

}

@property (nonatomic,readonly) id<MPCPlaybackEngineEventStreamSubscription> subscription;              //@synthesize subscription=_subscription - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)dateFormatter;
+(id)identifier;
-(id<MPCPlaybackEngineEventStreamSubscription>)subscription;
-(id)_prefixWithCursor:(id)arg1 ;
-(BOOL)_logAccountEvent:(id)arg1 cursor:(id)arg2 ;
-(id)_symbolForCommand:(unsigned)arg1 ;
-(void)subscribeToEventStream:(id)arg1 ;
-(void)unsubscribeFromEventStream:(id)arg1 ;
@end

