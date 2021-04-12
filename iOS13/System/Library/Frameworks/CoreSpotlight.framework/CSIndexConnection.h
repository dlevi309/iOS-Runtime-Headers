/*
* Generated on Monday, March 1, 2021 at 2:31:42 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CoreSpotlight.framework/CoreSpotlight
*/

#import <CoreSpotlight/CSXPCConnection.h>

@interface CSIndexConnection : CSXPCConnection {

	BOOL _previouslyInitialized;

}

@property (nonatomic,readonly) BOOL previouslyInitialized;              //@synthesize previouslyInitialized=_previouslyInitialized - In the implementation block
+(id)sharedConnection;
-(void)handleError:(id)arg1 ;
-(void)sendMessageAsync:(id)arg1 completion:(/*^block*/id)arg2 ;
-(BOOL)previouslyInitialized;
@end

