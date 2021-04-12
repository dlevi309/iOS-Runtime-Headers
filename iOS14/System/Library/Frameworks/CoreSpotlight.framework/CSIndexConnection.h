/*
* Generated on Thursday, January 14, 2021 at 2:21:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreSpotlight.framework/CoreSpotlight
*/

#import <CoreSpotlight/CSXPCConnection.h>

@interface CSIndexConnection : CSXPCConnection {

	BOOL _previouslyInitialized;

}

@property (nonatomic,readonly) BOOL previouslyInitialized;              //@synthesize previouslyInitialized=_previouslyInitialized - In the implementation block
+(id)sharedConnection;
-(void)handleError:(id)arg1 ;
-(BOOL)previouslyInitialized;
-(void)sendMessageAsync:(id)arg1 completion:(/*^block*/id)arg2 ;
@end

