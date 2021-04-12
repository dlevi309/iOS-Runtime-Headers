/*
* Generated on Thursday, January 14, 2021 at 2:25:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
*/

#import <libobjc.A.dylib/MPCPlaybackEngineEventStreamDeferralAssertion.h>

@class NSString, MPCPlaybackEngineEventStream;

@interface _MPCPlaybackEngineEventStreamDeferralAssertion : NSObject <MPCPlaybackEngineEventStreamDeferralAssertion> {

	MPCPlaybackEngineEventStream* _eventStream;
	NSString* _reason;

}

@property (nonatomic,__weak,readonly) MPCPlaybackEngineEventStream * eventStream;              //@synthesize eventStream=_eventStream - In the implementation block
@property (nonatomic,copy,readonly) NSString * reason;                                         //@synthesize reason=_reason - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(MPCPlaybackEngineEventStream *)eventStream;
-(NSString *)description;
-(NSString *)reason;
-(void)invalidate;
-(void)dealloc;
-(id)initWithEventStream:(id)arg1 reason:(id)arg2 ;
@end

